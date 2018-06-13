#ifndef __PreviewEPUBWindow__H
#define __PreviewEPUBWindow__H
#include <QWidget>
#include "LayoutEngin.h"
#include "BookReader.h"
#include <QDockWidget.h>

class QStandardItemModel;
class QStandardItem;

class PreviewEPUBWindow : public QDockWidget, public LayoutEngineDelegate {

	Q_OBJECT

public:
	QImage * pic;

public:
	PreviewEPUBWindow(QWidget *parent, const std::string& bundlePath, const std::string& epubPath, const QSize& defaultSize);
	~PreviewEPUBWindow();
	void PreviewEPUBWindow::paintEvent(QPaintEvent *);
	void updateEngine(const std::string& bundlePath = "", const std::string& epubPath = "", const QSize& defaultSize = QSize(0, 0));
	QStandardItemModel *getBookContentList() { return m_bookContents; };

public:
	virtual void engineInitFinish();
	virtual void engineOpenBook(BookReader* bookModel, QList<BookContents *>list, LAYOUT_ENGINE_OPEN_EPUB_STATUS error);
	void mousePressEvent(QMouseEvent * event);
	virtual void engineClickResponse(const qint32& originX, const qint32& originY, const QString& chapterId, const qint32& htmlOffset);
	virtual void engineUpdateTotalCount(const qint32& totolPageCount);
	virtual void enginUpdateAllViewPage();
	virtual void engineUpdateVisibleViewPage(EngineHighlightInfo* info);
	virtual void engineShowSelectionMenu(const qint32& x, const qint32& y, const qint32& x2, const qint32& y2);
	virtual void engineOpenUrl(QString urlString);
	virtual void engineClickImage(QImage* image, const qint32& originX, const qint32& originY, const qint32& width, const qint32& height);
	virtual QList<BookUnderlineData *> engineNeedUnderlineData(const QString& charpterId);
	virtual QStringList engineNeedNoteData(const QString& charpterId);
	virtual void enginePaintHighlightRect(const QRect& rect, const QColor& color);

	void engineOpenHTML(BookChapter * html, LAYOUT_ENGINE_OPEN_EPUB_STATUS error);

	void htmlImageRenderFinish(BookChapter *html, std::shared_ptr<QImage>& pic);

public slots:
	void gotoChapterByIndex(const QModelIndex);
	void changeBGColorNormal() { changeBGColor(0); };
	void changeBGColorYellow() { changeBGColor(1); };
	void changeBGColorGreen() { changeBGColor(2); };
	void changeBGColorNight() { changeBGColor(3, true); };

private:
	std::string epubPath;
	LayoutEngine * engine;
	BookReader* m_bookModel;
	QSize m_defaultSize;
	QStandardItemModel *m_bookContents;
	std::vector<QStandardItem *>m_bookItems;
	std::map<int, std::string> m_supportBGColor{
		{ 0,"rgb(255,255,255)" },
		{ 1,"rgb(244,240,221)" },
		{ 2,"rgb(174,200,174)" },
		{ 3,"rgb(52,55,59);" }
	};
	bool m_isNightMode{ false };

private:
	void generateContentsModel();
	void changeBGColor(int color, bool isNightMode = false);

private slots:
	void canDraw();
	void closed();
	void GoToHtml();

signals:
	void canDrawSignal();
	void bookContentReady();
	void windowClose();
	void gotoHtmlSourceCode(const std::string& htmlName, size_t offsite);

protected:
	void keyPressEvent(QKeyEvent *);
	void resizeEvent(QResizeEvent * event);
	void closeEvent(QCloseEvent * event);
};
#endif // !__PreviewEPUBWindow_H