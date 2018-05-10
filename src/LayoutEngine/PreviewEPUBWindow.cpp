#include "PreviewEPUBWindow.h"
#include <QPainter>
#include <iostream>
#include <QMessageBox>
#include "BookModel.h"
#include <QMouseEvent>

PreviewEPUBWindow::PreviewEPUBWindow(QWidget* parent,const std::string& bundlePath, const std::string& epubPath):
	QDockWidget(parent),
	pic(nullptr),
	engine(new LayoutEngine),
	epubPath(epubPath),
	m_bookModel(NULL) {
	this->engine->delegate = dynamic_cast<LayoutEngineDelegate *>(this);
	this->engine->SetViewTopMargin(0);
	this->engine->SetViewBottomMargin(0);
}

void PreviewEPUBWindow::canDraw() {
	if (this->engine->EngineIsReady()) {
		this->engine->setPageSize(m_bookModel, width(), height(), 1.0);
		this->m_bookModel->GotoFirstPage();
		this->pic = this->engine->paintDisplayImageByOffset(this->m_bookModel, 0);
		if (this->pic != nullptr) {
			this->update();
		}
	}
}

void PreviewEPUBWindow::paintEvent(QPaintEvent *) {
	if (this->pic != nullptr) {
		QPainter p(this);
		if (p.isActive()) {
			p.eraseRect(0, 0, width(), height());
			p.drawImage(QRect(0, 0, width(), height()), *(this->pic));
			p.end();
		} else {
			printf("painter isn't actived");
		}
	}
}

void PreviewEPUBWindow::updateEngine(const std::string& bundlePath, const std::string & epubPath)
{
	if ( !this->engine->EngineIsReady() ) {
		this->engine->InitLayoutEngine(bundlePath);
		this->epubPath = epubPath;
	} else {
		if (bundlePath.length() && epubPath.length()) {
			if (this->m_bookModel != NULL) {
				this->engine->closeEpub(this->m_bookModel);
			}
			this->epubPath = epubPath;
			this->engine->openEpub(this, this->epubPath, "/", "\n");
		} else {
			this->engine->closeEpub(this->m_bookModel);
		}
	}
}

void PreviewEPUBWindow::engineInitFinish() {
	if ( this->engine->EngineIsReady() && this->epubPath.length() ) {
		this->engine->delegate = dynamic_cast<LayoutEngineDelegate *>(this);
		this->engine->openEpub(this, this->epubPath, "/", "\n");
	}
}

void PreviewEPUBWindow::engineOpenBook(BookModel * bookModel, QList<BookContents*> list, LAYOUT_ENGINE_OPEN_EPUB_STATUS error)
{
	if (error == OPEN_EPUB_SUCCESS) {
		this->m_bookModel = bookModel;
		//emit canDrawSignal();
		canDraw();
	}
	else {
		this->m_bookModel = NULL;
		QMessageBox::information(this, "Opne Epub failed", "Fail open", QMessageBox::Ok);
	}
}

void PreviewEPUBWindow::mousePressEvent(QMouseEvent *event) {
	if (event->button() == Qt::LeftButton) {
		this->m_bookModel->GotoNextPage();
	}
	else if (event->button() == Qt::RightButton)
	{
		this->m_bookModel->GotoPreviousPage();
	}
	this->pic = this->engine->paintDisplayImageByOffset(this->m_bookModel, 0);
	while (this->pic == nullptr)
	{
		this->pic = this->engine->paintDisplayImageByOffset(this->m_bookModel, 0);
	}
	this->update();
}

void PreviewEPUBWindow::engineClickResponse(const qint32 & originX, const qint32 & originY, const QString & chapterId, const qint32 & htmlOffset)
{
}

void PreviewEPUBWindow::engineUpdateTotalCount(const qint32 & totolPageCount)
{
}

void PreviewEPUBWindow::enginUpdateAllViewPage()
{
}

void PreviewEPUBWindow::engineUpdateVisibleViewPage(EngineHighlightInfo * info)
{
}

void PreviewEPUBWindow::engineShowSelectionMenu(const qint32 & x, const qint32 & y, const qint32 & x2, const qint32 & y2)
{
}

void PreviewEPUBWindow::engineOpenUrl(QString urlString)
{
}

void PreviewEPUBWindow::engineClickImage(QImage* image, const qint32 & originX, const qint32 & originY, const qint32 & width, const qint32 & height)
{
}

QList<BookUnderlineData*> PreviewEPUBWindow::engineNeedUnderlineData(const QString & charpterId)
{
	return QList<BookUnderlineData*>();
}

QStringList PreviewEPUBWindow::engineNeedNoteData(const QString & charpterId)
{
	return QStringList();
}

void PreviewEPUBWindow::enginePaintHighlightRect(const QRect & rect, const QColor & color)
{
}

