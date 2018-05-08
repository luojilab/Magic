#include "SMainWindow.h"
#include <QPainter>
#include <iostream>
#include <QMessageBox>
#include "bookModel.h"
#include <QMouseEvent>

using namespace future_core;
SMainWindow::SMainWindow(): 
	pic(nullptr),
	engine(new LayoutEngine){
	std::string base ("C:/work/looker_core/build/Res");
	std::string epub_path = base + "/text.epub";
	this->engine->delegate = dynamic_cast<LayoutEngineDelegate *>(this);
	this->engine->InitLayoutEngine(base);
	this->engine->SetViewTopMargin(0);
	this->engine->SetViewBottomMargin(0);
	QObject::connect(this, SIGNAL(canDrawSignal), this, SLOT(canDraw));
}

void SMainWindow::canDraw() {
	if (this->engine->EngineIsReady()) {
		this->engine->setPageSize(m_bookModel, width(), height(), 1.0);
		this->m_bookModel->GotoFirstPage();
		this->pic = this->engine->paintDisplayImageByOffset(this->m_bookModel, 0);
		if (this->pic != nullptr) {
			this->update();
		}
	}
}

void SMainWindow::paintEvent(QPaintEvent *) {
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

void SMainWindow::engineInitFinish() {
	std::string base("C:/Works/looker_core/build/Res");
	std::string epub_path = base + "/test.epub";
	if (this->engine->EngineIsReady()) {
		this->engine->openEpub(this, epub_path, "/", "\n");
	}
}

void SMainWindow::engineOpenBook(BookModel * bookModel, QList<BookContents*> list, LAYOUT_ENGINE_OPEN_EPUB_STATUS error)
{
	if (error == OPEN_EPUB_SUCCESS) {
		this->m_bookModel = bookModel;
		//emit canDrawSignal();
		canDraw();
	}
	else {
		QMessageBox::information(this, "Opne Epub failed", "Fail open", QMessageBox::Ok);
	}
}

void SMainWindow::mousePressEvent(QMouseEvent *event) {
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

void SMainWindow::engineClickResponse(const qint32 & originX, const qint32 & originY, const QString & chapterId, const qint32 & htmlOffset)
{
}

void SMainWindow::engineUpdateTotalCount(const qint32 & totolPageCount)
{
}

void SMainWindow::enginUpdateAllViewPage()
{
}

void SMainWindow::engineUpdateVisibleViewPage(EngineHighlightInfo * info)
{
}

void SMainWindow::engineShowSelectionMenu(const qint32 & x, const qint32 & y, const qint32 & x2, const qint32 & y2)
{
}

void SMainWindow::engineOpenUrl(QString urlString)
{
}

void SMainWindow::engineClickImage(QImage* image, const qint32 & originX, const qint32 & originY, const qint32 & width, const qint32 & height)
{
}

QList<BookUnderlineData*> SMainWindow::engineNeedUnderlineData(const QString & charpterId)
{
	return QList<BookUnderlineData*>();
}

QStringList SMainWindow::engineNeedNoteData(const QString & charpterId)
{
	return QStringList();
}

void SMainWindow::enginePaintHighlightRect(const QRect & rect, const QColor & color)
{
}


