#include "PreviewHTMLWindow.h"
#include <QPainter>
#include <QMouseEvent>
#include <QReadWriteLock>
#include <QFile>
#include <QSettings>

PreviewHTMLWindow::PreviewHTMLWindow(QWidget * parent, const std::string htmlPath, const QSize& maxSize)
	:QDockWidget(parent),
	m_htmlPath(htmlPath),
	m_engine(new LayoutEngine), 
	m_htmlPageIndex(0),
	m_maxSize(maxSize)
{
	m_engine->delegate = this;
	m_engine->InitLayoutEngine("");
	m_engine->SetViewTopMargin(0);
	m_engine->SetViewBottomMargin(0);
	QFile f(m_htmlPath.c_str());
	m_innerHtmlPath = tempFilePath(m_htmlPath);
	bool s = f.copy(m_innerHtmlPath.c_str());
}

void PreviewHTMLWindow::engineInitFinish() {
	m_engine->setPageSize(NULL, width(), height(), 1);
	m_engine->openHtml(this, m_htmlPath, "html_id_key");
}

// engine epub delegate function
void PreviewHTMLWindow::engineOpenBook(BookModel* bookModel, QList<BookContents *>list, LAYOUT_ENGINE_OPEN_EPUB_STATUS error) {}
void PreviewHTMLWindow::engineClickResponse(const qint32& originX, const qint32& originY, const QString& chapterId, const qint32& htmlOffset) {}
void PreviewHTMLWindow::engineUpdateTotalCount(const qint32& totolPageCount) {}
void PreviewHTMLWindow::enginUpdateAllViewPage() {}
void PreviewHTMLWindow::engineUpdateVisibleViewPage(EngineHighlightInfo* info){}
void PreviewHTMLWindow::engineShowSelectionMenu(const qint32& x, const qint32& y, const qint32& x2, const qint32& y2){}
void PreviewHTMLWindow::engineOpenUrl(QString urlString){}
void PreviewHTMLWindow::engineClickImage(QImage* image, const qint32& originX, const qint32& originY, const qint32& width, const qint32& height){}
QList<BookUnderlineData *> PreviewHTMLWindow::engineNeedUnderlineData(const QString& charpterId) { return QList<BookUnderlineData *>(); }
QStringList PreviewHTMLWindow::engineNeedNoteData(const QString& charpterId) { return QStringList(); }
void PreviewHTMLWindow::enginePaintHighlightRect(const QRect& rect, const QColor& color) {}

/*
 * engine html delegate function 
 */

// html open success 
void PreviewHTMLWindow::engineOpenHTML(BookChapter *html, LAYOUT_ENGINE_OPEN_EPUB_STATUS error) {
	if (error == OPEN_EPUB_SUCCESS) {
		m_htmlModel = html;
		m_engine->paintHtml(m_htmlModel, m_htmlPageIndex);
	}
}
// html pic render finish
void PreviewHTMLWindow::htmlImageRenderFinish(BookChapter *html, std::shared_ptr<QImage>& pic) {
	safeSetRenderStatus(false);
	if (pic != nullptr) {
		int count__ = pic.use_count();
		m_pic = pic;
		int count = m_pic.use_count();
		m_old_htmlPageIndex = m_htmlPageIndex;
		update();
	} else {
		m_htmlPageIndex = m_old_htmlPageIndex;
	}
}

/*
 * system function
 */

// paint event
void PreviewHTMLWindow::paintEvent(QPaintEvent *) {
	if ( m_pic != nullptr && !(*m_pic).isNull() ) {
		int count = m_pic.use_count();
		QPainter p(this);
		if (p.isActive()) {
			int w = width();
			p.eraseRect(QRect(0, 0, width(), height()));
			p.drawImage(QRect(0, 0, width(), height()), (*m_pic).scaled(size()));
			p.end();
		}
	}
}
// mouse click event
void PreviewHTMLWindow::mousePressEvent(QMouseEvent *event) {
	if (isRendering()) return;
	if (event->button() == Qt::LeftButton) {
		if (m_htmlPageIndex + 1 >= m_htmlModel->GetPageCount()) return;
		++m_htmlPageIndex;
	}
	else if (event->button() == Qt::RightButton) {
		if (m_htmlPageIndex == 0) return;
		--m_htmlPageIndex;
	}
	m_engine->paintHtml(m_htmlModel, m_htmlPageIndex);
}

void PreviewHTMLWindow::reloadHTML(std::string htmlPath)
{
	cleanResource();
	QFile f(htmlPath.c_str());
	m_htmlPath = htmlPath;
	m_innerHtmlPath = tempFilePath(m_htmlPath);
	if ( !QFile(tempFilePath(htmlPath).c_str()).exists() ) {
		f.copy(tempFilePath(m_htmlPath).c_str());
	}
	m_engine->openHtml(this, m_htmlPath, "html_id_key");
}

void PreviewHTMLWindow::updateCurrentPage()
{
	cleanResource();
	/*QFile f(m_innerHtmlPath.c_str());
	if (f.open(QIODevice::ReadWrite | QIODevice::Text)) {
		f.write(content.toUtf8());
	}*/
	m_engine->openHtml(this, m_htmlPath, "html_id_key");
}

void PreviewHTMLWindow::setMaxSize(int w, int h)
{
	m_maxSize.setHeight(h);
	m_maxSize.setWidth(w);
}

void PreviewHTMLWindow::safeSetRenderStatus(bool status)
{
	m_locker.lockForRead();
	m_isRendering = status;
	m_locker.unlock();
}

inline bool PreviewHTMLWindow::safeGetRenderStatus()
{
	m_locker.lockForRead();
	bool status = m_isRendering;
	m_locker.unlock();
	return status;
}

void PreviewHTMLWindow::cleanResource()
{
	int count = m_pic.use_count();
	m_pic.reset();
	m_engine->closeHtml(m_htmlModel);
	m_htmlModel = NULL;
}

std::string PreviewHTMLWindow::tempFilePath(const std::string & ofilePath)
{
	if (ofilePath.empty()) {
		return "";
	}

	QFileInfo oinfo(ofilePath.c_str());
	std::string fileName = "__Temp__" + oinfo.fileName().toStdString();
	std::string dir = oinfo.absolutePath().toStdString() + "/";
	if (fileName.empty()) {
		return "";
	}

	return dir + fileName;
}
