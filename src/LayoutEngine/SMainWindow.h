#include <QWidget>
#include "LayoutEngin.h"

class SMainWindow : public QWidget, public LayoutEngineDelegate {
public:
	QImage * pic;
private:
	LayoutEngine * engine;
	BookModel* m_bookModel;
public:
	SMainWindow();
	void SMainWindow::paintEvent(QPaintEvent *);
	virtual void engineInitFinish();
	virtual void engineOpenBook(BookModel* bookModel, QList<BookContents *>list, LAYOUT_ENGINE_OPEN_EPUB_STATUS error);
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

public slots:
	void canDraw();

signals:
	void canDrawSignal();
};