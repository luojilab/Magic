#ifndef LAYOUT_ENGINE_H
#define LAYOUT_ENGINE_H

#include <QWidget>
#include <QtCore>
#include "BookChapter.h"
#include <memory>

namespace future_core {
	class BookReader;
	struct HighlightInfo;
};

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

//Engine offset
struct BookNotationOffsetData
{
	LAYOUT_ENGINE_OFFSET_DATA_TYPE m_dataType;
	QString m_summaryStr;
	QString m_noteStr;
	QString m_idStr;
	double m_createTimeStamp;
	double m_updateTimeStamp;
	//Old version engine
	qint32 m_startFileOffset;
	qint32 m_startParaOffset;
	qint32 m_startCharOffset;

	qint32 m_endFileOffset;
	qint32 m_endParaOffset;
	qint32 m_endCharOffset;
	//New version engine
	QString m_chapterId;
	qint32 m_htmlStartOffset;
	qint32 m_htmlEndOffset;

	BookNotationOffsetData() :
		m_createTimeStamp(0),
		m_updateTimeStamp(0),
		m_startFileOffset(0),
		m_startParaOffset(0),
		m_startCharOffset(0),
		m_endFileOffset(0),
		m_endParaOffset(0),
		m_endCharOffset(0),
		m_htmlStartOffset(0),
		m_htmlEndOffset(0) {}
};

struct SearchResultData
{
	qint32 m_chapterIndex;        //所在章节index
	QString m_chapterId;           //所在章节ID
	QString m_chapterName;         //所在章节名
	qint32 m_htmlBeginOffset;     //所在htmlOffset
	qint32 m_htmlEndOffset;       //所在htmlEndOffset
	QString m_resultString;        //前后文字
	qint32 m_strBeginOffset;      //高亮选中搜索文字start
	qint32 m_strEndOffset;        //高亮选中搜索文字end

	SearchResultData() :m_chapterIndex(0), m_htmlBeginOffset(0), m_htmlEndOffset(0), m_strBeginOffset(0), m_strEndOffset(0) {}
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
	qint32	m_htmlStartOffset;
	qint32	m_htmlEndOffset;
	QString m_selectedStr;
	bool	m_selectionIsForward;
	EngineHighlightInfo operator<<(future_core::HighlightInfo& info);
};

using future_core::BookReader;
using future_core::BookChapter;
class LayoutEngineDelegate
{
public:
	virtual void engineInitFinish() = 0;
	virtual void engineOpenBook(BookReader* bookModel, QList<BookContents *>list, LAYOUT_ENGINE_OPEN_EPUB_STATUS error) = 0;
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
	// only open html file
	virtual void engineOpenHTML(BookChapter *html, LAYOUT_ENGINE_OPEN_EPUB_STATUS error) = 0;
	virtual void htmlImageRenderFinish(BookChapter *html, std::shared_ptr<QImage>& pic) = 0;
};

class LayoutEngine
{
public:
	typedef void(*PageStartEndOffsetByPageOffsetCallback)(bool, QString, qint32, qint32, QString);
	typedef void(*CopySelectionToTextCallback)(QString, QString, int, int);
	LayoutEngineDelegate * delegate;
public:
	static bool EngineIsReady();
	static void ReleaseLayoutEngine();
	static void SetViewTopMargin(qint32 topMargin);
	static void SetViewBottomMargin(qint32 bottomMargin);
	QList<BookContents *>getContentList(BookReader *bookModel);

public:
	void InitLayoutEngine(const std::string& bundlePath);
	void setPageSize(BookReader *bookModel, const qint32& width, const qint32& height, const float& scale);
	void openEpub(QWidget *view, const std::string& filePath, const QString& tokenStd, const QString& uidStd);
	void gotoChapterByFileName(BookReader *bookModel, const QString& fileName);
	void updateAllView(BookReader *bookModel);
	void closeEpub(BookReader *bookModel);
    void repaint(BookReader *bookModel);
	// HTML utils
	void openHtml(QWidget *view,const std::string htmlPath, std::string uniqueKey);
	void paintHtml(BookChapter *html, unsigned int pageIndex);
	void closeHtml(BookChapter* html);
	void setIsNightMode(bool);
	/*void getTotalPageCount(BookReader *bookModel);
	int getCurrentPageIndex(BookReader *bookModel);
	QString getSummaryByPageOffset(BookReader *bookModel, qint32 pageOffset);
	QString getCurrentPageChapterName(BookReader *bookModel);
	QString getPreviousPageChapterName(BookReader *bookModel);
	QString getNextPageChapterName(BookReader *bookModel);
	QString getChapterNameByPageOffset(BookReader *bookModel, qint32 pageOffset);
	void gotoFirstPage(BookReader *bookModel);
	void gotoPreviousPage(BookReader *bookModel);
	void gotoNextPage(BookReader *bookModel);
	void gotoByPageIndex(BookReader *bookModel,qint32 pageIndex);
	void gotoByChapterOffset(BookReader *bookModel, const QString& charpterId, qint32 htmlOffset);
	void gotoBySearchResult(BookReader *bookModel, const QString& charpterId, qint32 htmlStartOffset, qint32 htmlEndOffset);
	void getCurrentPageOffset(BookReader *bookModel);
	void getPageStartEndOffsetByPageOffset(BookReader *bookModel, qint32 pageOffset, PageStartEndOffsetByPageOffsetCallback callback);
	void gotoPreviousChapter(BookReader *bookModel);
	void gotoPreviousChapter(BookReader *bookModel);*/

	void setFontScale(BookReader *bookModel, float scaleFactor);
	QImage* paintDisplayImageByOffset(BookReader *bookModel, qint32 offset);

	/*void setSuperFontSrc(BookReader *bookModel, const QString& fontLocalSrc);
	void setSuperFontSize(BookReader* bookModel, float fontSize);
	void setFontScale(BookReader *bookModel, float scaleFactor);
	float getFontScaleFactor(BookReader *bookModel);

	void mouseSingleClickAction(BookReader *bookModel, qint32 originX, qint32 originY);
	void longPressAction(BookReader *bookModel, qint32 originX, qint32 originY);
	void longPressReleaseAction(BookReader *bookModel, qint32 originX, qint32 originY);
	void startReviseSelection(BookReader *bookModel, qint32 originX, qint32 originY);
	void moveSelection(BookReader *bookModel, qint32 originX, qint32 originY);
	void touchUpAction(BookReader *bookModel, qint32 originX, qint32 originY);
	void deleteSelection(BookReader *bookModel);
	void copySelectionToText(BookReader *bookModel,CopySelectionToTextCallback callback);

	void showHighlight(BookReader *bookModel, const QString& charpterUUID, unsigned int startOffset, unsigned int enfOffset);
	bool isFirstPage(BookReader *bookModel);
	bool isLastPage(BookReader *bookModel);
	bool isFirstCharpter(BookReader *bookModel);
	bool isLastCharpter(BookReader *bookModel);
	bool isChapterFirstPage(BookReader *bookModel);
	bool isChapterLastPage(BookReader *bookModel);*/

private:
	void openEpubFailCallback(LAYOUT_ENGINE_OPEN_EPUB_STATUS e);
	void bookHookInit(BookReader *bookModel);
	void enginInitFinish();
	std::map<std::string, QImage*>m_imageCache = std::map<std::string, QImage*>();
	std::string m_htmlUniqueKey { "" };

private:
	void goPaintingHTML(BookChapter* html, unsigned int pageIndex);
};


#endif // LAYOUT_ENGINE_H
