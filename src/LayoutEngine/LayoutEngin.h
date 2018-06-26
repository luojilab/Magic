#ifndef LAYOUT_ENGINE_H
#define LAYOUT_ENGINE_H

#include <QWidget>
#include <QtCore>
#include "BookChapter.h"

namespace future_core {
    class BookReader;
    struct HighlightInfo;
};

using future_core::BookReader;
using future_core::BookChapter;

typedef enum {
    OPEN_EPUB_SUCCESS = 0,          //成功打开EPUB
    EPUB_FILENAME_ERROR,            //EPUB文件名错误
    EPUB_NO_HTMLS,                  //EPUB没有包含任何html
    EPUB_NO_NCX,                    //EPUB没有目录
    //... 陆续增加
} LAYOUT_ENGINE_OPEN_EPUB_STATUS;

typedef enum {
    BOOK_OFFSET_DATA_BOOKMARK = 0,          //书签
    BOOK_OFFSET_DATA_UNDERLINE = 1,         //划线
    BOOK_OFFSET_DATA_NOTE = 2,              //笔记
    BOOK_OFFSET_DATA_PROGRESS = 3,          //进度
} LAYOUT_ENGINE_OFFSET_DATA_TYPE;

struct BookContents
{
    quint32 order;
    quint32 level;
    QString text;
    QString ContentHRef;
    BookContents() :order(0), level(0) {}
};

struct BookUnderlineData
{
    quint32 m_startOffset;
    quint32 m_endOffset;
    QColor m_lineColor;
    BookUnderlineData() : m_startOffset(0), m_endOffset(0) {}
};

struct EngineHighlightInfo {
    //选中左边点
    qint32 m_leftTopX;
    qint32 m_leftTopY;
    qint32 m_leftBottomX;
    qint32 m_leftBottomY;
    
    //选中右边点
    qint32 m_rightTopX;
    qint32 m_rightTopY;
    qint32 m_rightBottomX;
    qint32 m_rightBottomY;
    
    //选中文字信息
    qint32    m_htmlStartOffset;
    qint32    m_htmlEndOffset;
    QString m_selectedStr;
    bool    m_selectionIsForward;
    EngineHighlightInfo operator<<(future_core::HighlightInfo& info);
};

class LayoutEngineDelegate {
public:
    virtual void engineInitFinish() = 0;
    virtual void engineOpenBook(BookReader* bookModel, QList<BookContents *>list, int error) = 0;
    virtual void engineClickResponse(const qint32& originX, const qint32& originY, const QString& chapterId, const qint32& htmlOffset) = 0;
    virtual void engineUpdateTotalCount(const qint32& totolPageCount) = 0;
    virtual void enginUpdateAllViewPage() = 0;
    virtual void engineUpdateVisibleViewPage(EngineHighlightInfo* info) = 0;
    virtual void engineShowSelectionMenu(const qint32& x, const qint32& y, const qint32& x2, const qint32& y2) = 0;
    virtual void engineOpenUrl(QString urlString) = 0;
    virtual void engineClickImage(QImage* image, const qint32& originX, const qint32& originY, const qint32& width, const qint32& height) = 0;
    virtual QList<BookUnderlineData *> engineNeedUnderlineData(const QString& charpterId) = 0;
    virtual QStringList engineNeedNoteData(const QString& charpterId) = 0;
    virtual void enginePaintHighlightRect(const QRect& rect, const QColor& color) = 0;
    // TODO only open html file -- add middle layer
    virtual void engineOpenHTML(BookChapter *html, LAYOUT_ENGINE_OPEN_EPUB_STATUS error) = 0;
    // TODO changed bookchapter to charpter ID -- add middle layer
    virtual void htmlImageRenderFinish(BookChapter *html, std::shared_ptr<QImage>& pic) = 0;
};

class LayoutEngine {
public:
    static bool isEngineReady();
    static void ReleaseLayoutEngine();
    static void SetViewTopMargin(qint32 topMargin);
    static void SetViewBottomMargin(qint32 bottomMargin);
    
public:
    void initLayoutEngine(const std::string& bundlePath);
    void setPageSize(BookReader *bookModel, qint32 width, qint32 height, float scale);
    void openEpub(QWidget *view, const std::string& filePath, const std::string& tokenStd, const std::string& uidStd);
    void gotoChapterByFileName(BookReader *bookModel, const QString& fileName);
    void updateAllView(BookReader *bookModel);
    void closeEpub(BookReader *bookModel);
    void repaint(BookReader *bookModel);
    void setNightModeForBook(bool isNight);
    void setIsNightMode(bool);
    void setDelegate(LayoutEngineDelegate *delegate);
    QList<std::shared_ptr<BookContents>>getContentList(BookReader *bookModel);
    void setFontScale(BookReader *bookModel, float scaleFactor);
    void gotoFirstPage(BookReader* bookModel);
    void gotoNextPage(BookReader *bookModel);
    void gotoPreviousPage(BookReader *bookModel);
    void gotoPreviousChapter(BookReader *bookModel);
    void gotoNextChapter(BookReader *bookModel);
    int getCurrentPageOffset(BookReader* bookModel);
    std::string getCurrentChapterId(BookReader* bookModel);
    std::string getChapterFileNameById(BookReader* bookModel, const std::string& charpterId);
    // HTML utils
    void openHtml(QWidget *view,const std::string& htmlPath, const std::string& uniqueKey);
    void paintHtml(BookChapter *html, unsigned int pageIndex);
    void closeHtml(BookChapter *html);
    
private:
    void openEpubFailCallback(BookReader *, int e);
    void engineCallbackInit(BookReader *bookModel);
    void enginInitFinish();
    void goPaintingHTML(BookChapter* html, unsigned int pageIndex);
    void clearCachedImage();
    
private:
    std::map<std::string, std::shared_ptr<QImage>>m_imageCache;
    std::string m_htmlUniqueKey { "" };
    bool m_isNightMode{ false };
    LayoutEngineDelegate* m_delegate{ NULL };
};

#endif // LAYOUT_ENGINE_H
