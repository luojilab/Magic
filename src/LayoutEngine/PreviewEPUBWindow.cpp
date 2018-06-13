#include "PreviewEPUBWindow.h"
#include <QPainter>
#include <iostream>
#include <QMessageBox>
#include "BookReader.h"
#include <QMouseEvent>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QApplication>
#include <QMenu>

PreviewEPUBWindow::PreviewEPUBWindow(QWidget* parent,const std::string& bundlePath, const std::string& epubPath, const QSize& defaultSize):
	QDockWidget(parent),
	pic(nullptr),
	engine(new LayoutEngine),
	epubPath(epubPath),
	m_bookModel(NULL),
	m_defaultSize(defaultSize),
	m_bookContents(NULL),
	m_bookItems(std::vector<QStandardItem *>()) {
	this->engine->delegate = dynamic_cast<LayoutEngineDelegate *>(this);
	this->engine->SetViewTopMargin(60.f * 128.f / 112.f);
	this->engine->SetViewBottomMargin(60.f * 128.f / 112.f);
	this->setFocusPolicy(Qt::ClickFocus);
}

PreviewEPUBWindow::~PreviewEPUBWindow()
{
	closed();
	this->engine->ReleaseLayoutEngine();
	delete engine;
}

void PreviewEPUBWindow::canDraw() {
	if (this->engine->EngineIsReady()) {
		this->m_bookModel->GetTextReader()->GotoFirstPage();
		while (this->pic == nullptr) {
			this->pic = this->engine->paintDisplayImageByOffset(this->m_bookModel, 0);
		}
		this->update();
	}
}

void PreviewEPUBWindow::paintEvent(QPaintEvent *) {
	if (this->pic != nullptr) {
		QPainter p(this);
		if (p.isActive()) {
			p.eraseRect(0, 0, width(), height());
			p.drawImage(QRect(0, 0, width(), height()), this->pic->scaled(width(), height(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
			p.end();
		} else {
			printf("painter isn't actived");
		}
	}
}

void PreviewEPUBWindow::keyPressEvent(QKeyEvent *event) {
	switch (event->key())
	{
	case Qt::Key_Right: {
		this->m_bookModel->GetTextReader()->GotoNextPage();
		break;
	}
	case Qt::Key_Left: {
		this->m_bookModel->GetTextReader()->GotoPreviousPage();
		break;
	}
	case Qt::Key_PageUp: {
		this->m_bookModel->GetTextReader()->GotoPreviousChapter();
		break;
	}
	case Qt::Key_PageDown: {
		this->m_bookModel->GetTextReader()->GotoNextChapter();
		break;
	}
	default:
		return;
	}
	if (this->isVisible()) {
		this->pic = this->engine->paintDisplayImageByOffset(this->m_bookModel, 0);
		while (this->pic == nullptr)
		{
			this->pic = this->engine->paintDisplayImageByOffset(this->m_bookModel, 0);
		}
		this->update();
	}
}

void PreviewEPUBWindow::resizeEvent(QResizeEvent *event) 
{
	event->accept();
	if (event->size() == event->oldSize()) {
		return;
	}
	float ratio = m_defaultSize.width() / float(m_defaultSize.height());
	resize(event->size().width(), int(event->size().width() / ratio));
}

void PreviewEPUBWindow::closeEvent(QCloseEvent *event) 
{
	emit windowClose();
	closed();
}

void PreviewEPUBWindow::updateEngine(const std::string& bundlePath, const std::string & epubPath, const QSize& defaultSize)
{
	if ( !this->engine->EngineIsReady() ) {
		this->engine->InitLayoutEngine(bundlePath);
		this->epubPath = epubPath;
	} else {
		if (epubPath.length()) {
			if (this->m_bookModel != NULL) {
				this->engine->closeEpub(this->m_bookModel);
			}
			if (defaultSize != m_defaultSize) {
				m_defaultSize = defaultSize;
				this->engine->setPageSize(m_bookModel, m_defaultSize.width(), m_defaultSize.height(), 1);
			}
			this->epubPath = epubPath;
			this->engine->openEpub(this, this->epubPath, "/", "\n");
		} else {
			this->engine->closeEpub(this->m_bookModel);
		}
	}
}

void PreviewEPUBWindow::gotoChapterByIndex(const QModelIndex index)
{
	if (!m_bookContents) { return; }
	if (!this->isVisible()) { return; }
	QStandardItem *selectItem = static_cast<QStandardItem *>(index.internalPointer());
	int idx{-1};
	std::vector<QStandardItem *>::iterator it = m_bookItems.begin();
	// get click index
	if (index.parent().isValid()) {
		// only have level0 content item
		while (it != m_bookItems.end()) {
			++idx;
			if (selectItem == *it++) {
				break;
			}
		}
		idx += index.row() + 1;
	} else {
		idx = index.row();
	}
	QList<BookContents *>items = this->engine->getContentList(m_bookModel);
	if (idx == -1 || idx > items.count()) { return; }
	// goto chapter
	qDebug("ref = %s", items[idx]->ContentHRef.toStdString().c_str());
	QApplication::setOverrideCursor(Qt::WaitCursor);
	engine->gotoChapterByFileName(m_bookModel, items[idx]->ContentHRef);
	engine->updateAllView(m_bookModel);
}

void PreviewEPUBWindow::engineInitFinish() {
	if ( this->engine->EngineIsReady() && this->epubPath.length() ) {
		this->engine->setPageSize(m_bookModel, m_defaultSize.width(), m_defaultSize.height(), 1);
		this->engine->openEpub(this, this->epubPath, "/", "\n");
	}
}

void PreviewEPUBWindow::engineOpenBook(BookReader * bookModel, QList<BookContents*> list, LAYOUT_ENGINE_OPEN_EPUB_STATUS error)
{
	if (error == OPEN_EPUB_SUCCESS) {
		if (m_bookModel) {
			closed();
		}
		this->m_bookModel = bookModel;
		this->engine->setPageSize(m_bookModel, m_defaultSize.width(), m_defaultSize.height(), 1);
		m_bookModel->GetTextReader()->SetIsNightTime(m_isNightMode);
		generateContentsModel();
		canDraw();
		QApplication::restoreOverrideCursor();
	}
	else {
		this->m_bookModel = NULL;
		QMessageBox::information(this, "Opne Epub failed", "Fail open", QMessageBox::Ok);
	}
}

void PreviewEPUBWindow::mousePressEvent(QMouseEvent *event) {
	if (event->button() == Qt::RightButton) {
		QMenu* menu = new QMenu(this);
		QAction* action = new QAction("Go to Html", menu);
		connect(action, SIGNAL(triggered()), this, SLOT(GoToHtml()));
		menu->addAction(action);
		menu->exec(event->globalPos());
		delete menu;
	}
}

void PreviewEPUBWindow::engineClickResponse(const qint32 & originX, const qint32 & originY, const QString & chapterId, const qint32 & htmlOffset)
{
}

void PreviewEPUBWindow::engineUpdateTotalCount(const qint32 & totolPageCount)
{
}

void PreviewEPUBWindow::enginUpdateAllViewPage()
{
	this->pic = this->engine->paintDisplayImageByOffset(m_bookModel, 0);
	while (pic == nullptr) {
		this->pic = this->engine->paintDisplayImageByOffset(m_bookModel, 0);
	}
	update();
	QApplication::restoreOverrideCursor();
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

void PreviewEPUBWindow::engineOpenHTML(BookChapter *html, LAYOUT_ENGINE_OPEN_EPUB_STATUS error) {}
void PreviewEPUBWindow::htmlImageRenderFinish(BookChapter *html, std::shared_ptr<QImage>& pic) {}

void PreviewEPUBWindow::generateContentsModel()
{
	if (!m_bookModel) { return; }

	if (m_bookContents) {
		delete m_bookContents;
		m_bookContents = NULL;
	}
	m_bookItems.clear();

	QStandardItemModel *model = new QStandardItemModel();
	QStandardItem *lastItem = NULL;
	int lastLevel = 0;
	model->setHorizontalHeaderLabels(QStringList() << "");
	QList<BookContents *> contents = this->engine->getContentList(m_bookModel);
	for (BookContents *item : contents) {

		int diff = item->level - lastLevel;
		Q_ASSERT(diff < 2);

		QStandardItem* content = new QStandardItem(item->text);
		lastLevel = item->level;
		m_bookItems.push_back(content);

		if (item->level == 0) {
			model->appendRow(content);
			lastItem = content;
			continue;
		}

		if (diff == 1) {
			lastItem->appendRow(content);
			lastItem = content;
			continue;
		}

		if (diff <= 0) {
			QStandardItem* parent = lastItem->parent();
			for (int i = 0; i < -diff; i++) {
				parent = parent->parent();
			}
			parent->appendRow(content);
			lastItem = content;
		}
	}
	m_bookContents = model;
	emit bookContentReady();
}

void PreviewEPUBWindow::closed()
{
	if (m_bookModel) {
		this->engine->closeEpub(m_bookModel);
		this->pic = NULL;
		m_bookModel = NULL;
		delete m_bookContents;
		m_bookContents = NULL;
	}
}

void PreviewEPUBWindow::GoToHtml()
{
	int offset = m_bookModel->GetTextReader()->GetCurrentPageOffset();
	std::string chapterId = m_bookModel->GetTextReader()->GetCurrentChapterId();
	std::string name = m_bookModel->GetTextReader()->GetChapterFileNameById(chapterId);
	emit gotoHtmlSourceCode(name, offset);
}

void PreviewEPUBWindow::changeBGColor(int color, bool isNightMode)
{
	if (!isVisible()) {
		return;
	}
	if (color >= m_supportBGColor.size()) {
		return;
	}
	if (isNightMode != m_isNightMode) {
		m_isNightMode = isNightMode;
		QApplication::setOverrideCursor(Qt::WaitCursor);
		closed();
		engine->openEpub(this, this->epubPath, "", "");
	}
	QString prefix = "background-color:";
	setStyleSheet(prefix + QString(m_supportBGColor[color].c_str()));
}
