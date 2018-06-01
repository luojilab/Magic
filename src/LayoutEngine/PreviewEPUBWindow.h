#ifndef __PreviewEPUBWindow__H
#define __PreviewEPUBWindow__H
#include <QWidget>
#include "LayoutEngin.h"
#include "BookReader.h"
#include <QDockWidget.h>

class QStandardItemModel;
class QStandardItem;

class PreviewEPUBWindow : public QWidget, public LayoutEngineDelegate {

	Q_OBJECT

public:
	QImage * pic;
private:
	std::string epubPath;
	LayoutEngine * engine;
	BookReader* m_bookModel;
	QSize m_defaultSize;
	QStandardItemModel *m_bookContents;
	std::vector<QStandardItem *>m_bookItems;
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

private:
	void generateContentsModel();

private slots:
	void canDraw();
	void closed();

signals:
	void canDrawSignal();
	void bookContentReady();

protected:
	void keyPressEvent(QKeyEvent *);
};
#endif // !__PreviewEPUBWindow_H