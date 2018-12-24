#ifndef LAYOUT_ENGINE_H
#define LAYOUT_ENGINE_H

#include <QWidget>
#include <QtCore>
#include <QColor>
#include <functional>
#include <memory>
#include "exportMacro.h"

namespace future_core {
	class BookReader;
    class BookChapter;
    class HTMLReader;
    class BookViewQt;
    class HTMLViewQt;
    class BookView;
};

using future_core::BookReader;
using future_core::BookChapter;
using future_core::HTMLReader;

struct BookContents
{
	quint32 order;
	quint32 level;
	QString text;
	QString ContentHRef;
	BookContents() :order(0), level(0) {}
};

class LayoutEngine: public QObject {
    
    Q_OBJECT
    
public:
    ENGINE_EXPORT static LayoutEngine* GetEngine();
    ENGINE_EXPORT static bool isEngineReady();
    ENGINE_EXPORT static void ReleaseLayoutEngine();
    ENGINE_EXPORT static void SetViewTopMargin(qint32 topMargin);
    ENGINE_EXPORT static void SetViewBottomMargin(qint32 bottomMargin);
    
public:
    
    ENGINE_EXPORT ~LayoutEngine();
    ENGINE_EXPORT void initLayoutEngine(const std::string& bundlePath, std::function<void(void)>callback);
    
    ENGINE_EXPORT void openEpub(future_core::BookView* view, const std::string& filePath, const std::string& tokenStd, const std::string& uidStd, std::function<void(BookReader*, int)>callback);
    
    ENGINE_EXPORT void gotoChapterByFileName(BookReader *bookModel, const QString& fileName);
    
    ENGINE_EXPORT void closeEpub(BookReader *bookModel, std::function<void()>cb);
    
    ENGINE_EXPORT void repaint(BookReader *bookModel);
    ENGINE_EXPORT void repaint(HTMLReader *htmlReader);
    
    ENGINE_EXPORT void gotoFirstPage(BookReader* bookreader);
    ENGINE_EXPORT void gotoFirstPage(HTMLReader* chapterReader);
    
    ENGINE_EXPORT void gotoNextPage(BookReader* bookModel);
    ENGINE_EXPORT void gotoNextPage(HTMLReader* chapterReader);
    
    ENGINE_EXPORT void gotoPreviousPage(BookReader* bookModel);
    ENGINE_EXPORT void gotoPreviousPage(HTMLReader* chapterReader);
    
    ENGINE_EXPORT void gotoPageByIndex(HTMLReader*, unsigned int pageIndex);
    
    ENGINE_EXPORT int getPageCount(BookReader *reader);
    ENGINE_EXPORT int getPageCount(HTMLReader *reader);
    
    ENGINE_EXPORT void gotoPreviousChapter(BookReader* bookModel);
    
    ENGINE_EXPORT void gotoNextChapter(BookReader* bookModel);
    
    ENGINE_EXPORT int getCurrentPageOffset(BookReader* bookModel);
    
    ENGINE_EXPORT int getPageIndexForHTMLOffset(HTMLReader* reader, unsigned int offset);
    
    ENGINE_EXPORT int getStartHTMLOffsetForPageIndex(HTMLReader* reader, unsigned int offset);
    
    ENGINE_EXPORT std::string getCurrentChapterId(BookReader* bookModel);
    
    ENGINE_EXPORT std::string getChapterFileNameById(BookReader* bookModel, const std::string& charpterId);
    
    ENGINE_EXPORT void mouseClick(BookReader* reader, int x, int y);
    ENGINE_EXPORT void mouseClick(HTMLReader* reader, int x, int y);
    
    ENGINE_EXPORT void mouseStartSelection(BookReader* reader, int x, int y);
    ENGINE_EXPORT void mouseMoveSelection(BookReader* reader, int x, int y);
    ENGINE_EXPORT void mouseEndSelection(BookReader* reader, int x, int y);
    ENGINE_EXPORT void removeSelection(BookReader* reader);
    
    ENGINE_EXPORT void mouseRelease(BookReader* reader, int x, int y);
    
    ENGINE_EXPORT void
    openHtml(future_core::HTMLViewQt *view, const std::string& htmlPath, const std::string& uniqueKey, std::function<void(HTMLReader*, int code)>callback);
    ENGINE_EXPORT void closeHtml(HTMLReader *html);
    ENGINE_EXPORT void setIsNightMode(bool);
    ENGINE_EXPORT QList<std::shared_ptr<BookContents>>getContentList(BookReader *bookModel);
    ENGINE_EXPORT void setFontScale(BookReader *bookModel, float scaleFactor);
    ENGINE_EXPORT void getSelectedText(BookReader* reader, std::function<void(const std::string &, const std::string, int, int)>);
    
    ENGINE_EXPORT void setSelectionBackgroundColor(const QColor &color);
    ENGINE_EXPORT void setCaretColor(const QColor &color);
    
private:
    LayoutEngine();
    void pageManpulate(BookReader *bookModel, std::function<void(void)>);
    void pageManpulate(HTMLReader *chapterReader, std::function<void(void)>);
    
private:
    bool m_isNightMode{ false };
    
signals:
    void runOnMainthreadSignal(std::function<void(void)>);
    
private slots:
    void callOnMainthread(std::function<void(void)>);
    
};


#endif // LAYOUT_ENGINE_H
