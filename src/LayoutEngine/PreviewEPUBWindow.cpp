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
#include "BookViewManager.h"

PreviewEPUBWindow::PreviewEPUBWindow(QWidget* parent,const std::string& bundlePath, const std::string& epubPath, const QSize& defaultSize):
	QWidget(parent),
	m_epubPath(epubPath),
    m_engine(new LayoutEngine),
	m_bookModel(NULL),
	m_defaultSize(defaultSize),
	m_bookContents(NULL),
    m_viewManager(new BookViewManager(this))
{
    m_engine->setDelegate(this);
#if __APPLE__
        float ratio = 1;
#else
        float ratio = 0.85;
#endif
	m_engine->SetViewTopMargin(60.f / ratio);
	m_engine->SetViewBottomMargin(60.f / ratio);
	setFocusPolicy(Qt::ClickFocus);
    m_viewManager->setUpdateViewCallback([this](){
        update();
    });
    connect(this, SIGNAL(showErrorDialog(const QString&)), this, SLOT(showError(const QString&)));
    connect(this, SIGNAL(drawSignal()), this, SLOT(doDraw()));
}

PreviewEPUBWindow::~PreviewEPUBWindow()
{
	closed();
    if (m_engine) {
        delete m_engine;
    }
    if (m_viewManager) {
        delete m_viewManager;
    }
}

void PreviewEPUBWindow::doDraw() {
    m_engine->gotoFirstPage(m_bookModel);
}

void PreviewEPUBWindow::paintEvent(QPaintEvent *) {
    m_viewManager->onDraw();
    QApplication::restoreOverrideCursor();
}

void PreviewEPUBWindow::keyPressEvent(QKeyEvent *event) {
    if ( !isVisible() ) {
        return;
    }
	switch (event->key()) {
	case Qt::Key_Right: {
        m_engine->gotoNextPage(m_bookModel);
		break;
	}
	case Qt::Key_Left: {
        m_engine->gotoPreviousPage(m_bookModel);
		break;
	}
	case Qt::Key_PageUp: {
        m_engine->gotoPreviousChapter(m_bookModel);
		break;
	}
	case Qt::Key_PageDown: {
        m_engine->gotoNextChapter(m_bookModel);
		break;
	}
	default:
		return;
	}
    QApplication::setOverrideCursor(Qt::WaitCursor);
}

void PreviewEPUBWindow::resizeEvent(QResizeEvent *event) 
{
}

void PreviewEPUBWindow::closeEvent(QCloseEvent *event) 
{
	closed();
}

// TODO close book
void PreviewEPUBWindow::updateEngine(const std::string& bundlePath, const std::string & epubPath, const QSize& defaultSize)
{
    if ( !m_engine->isEngineReady() ) {
        m_engine->initLayoutEngine(bundlePath);
		m_epubPath = epubPath;
	} else {
        if (m_bookModel != NULL) {
            m_engine->closeEpub(m_bookModel);
        }
        if (epubPath.length()) {
			if (defaultSize != m_defaultSize) {
				m_defaultSize = defaultSize;
				m_engine->setPageSize(m_bookModel, m_defaultSize.width(), m_defaultSize.height(), 1);
			}
			m_epubPath = epubPath;
			m_engine->openEpub(this, m_epubPath, "", "");
		}
	}
}

void PreviewEPUBWindow::gotoChapterByIndex(const QModelIndex index)
{
	if (!m_bookContents) { return; }
	if (!isVisible()) { return; }
	QStandardItem *selectItem = static_cast<QStandardItem *>(index.internalPointer());
	int idx{-1};
	std::vector<QStandardItem *>::iterator it = m_bookItems.begin();
	// get click index
	if ( !index.parent().isValid() ) {
        idx = index.row();
	} else {
        // only have level0 content item
        while (it != m_bookItems.end()) {
            ++idx;
            if (selectItem == *it++) {
                break;
            }
        }
        idx += index.row() + 1;
	}
    QList<std::shared_ptr<BookContents>>items = m_engine->getContentList(m_bookModel);
	if (idx == -1 || idx > items.count()) { return; }
	// goto chapter
	QApplication::setOverrideCursor(Qt::WaitCursor);
	m_engine->gotoChapterByFileName(m_bookModel, items[idx]->ContentHRef);
	m_engine->updateAllView(m_bookModel);
}

void PreviewEPUBWindow::engineInitFinish() {
    if ( m_engine->isEngineReady() && !m_epubPath.empty() ) {
		m_engine->setPageSize(m_bookModel, m_defaultSize.width(), m_defaultSize.height(), 1);
        m_engine->openEpub(this, m_epubPath, "", "");
	}
}

void PreviewEPUBWindow::engineOpenBook(BookReader* bookModel, QList<BookContents *>list, int error)
{
	if (error != 0) {
        emit showErrorDialog("Opne Epub failed");
        return;
	}
    if (m_bookModel) {
        closed();
    }
    m_bookModel = bookModel;
    m_viewManager->setBookReader(bookModel);
    m_engine->setPageSize(m_bookModel, m_defaultSize.width(), m_defaultSize.height(), 1);
    m_engine->setIsNightMode(m_isNightMode);
    generateContentsModel();
    emit drawSignal();
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
    QApplication::restoreOverrideCursor();
	update();
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
	if (!m_bookModel) {
        return;
    }

	if (m_bookContents) {
		delete m_bookContents;
		m_bookContents = NULL;
	}
	m_bookItems.clear();

	QStandardItemModel *model = new QStandardItemModel();
	QStandardItem *lastItem = NULL;
	int lastLevel = 0;
    QList<std::shared_ptr<BookContents>> contents = m_engine->getContentList(m_bookModel);
	for (std::shared_ptr<BookContents>item : contents) {
		int level		= item->level;
		QString text	= item->text;
        
		int diff = level - lastLevel;
		Q_ASSERT(diff < 2);

		QStandardItem* content = new QStandardItem(text);
		lastLevel = level;
		m_bookItems.push_back(content);

		if (level == 0) {
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
		m_engine->closeEpub(m_bookModel);
		m_bookModel = NULL;
		delete m_bookContents;
		m_bookContents = NULL;
	}
}

void PreviewEPUBWindow::GoToHtml()
{
	int offset = m_engine->getCurrentPageOffset(m_bookModel);
	std::string chapterId = m_engine->getCurrentChapterId(m_bookModel);
	std::string name = m_engine->getChapterFileNameById(m_bookModel, chapterId);
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
        m_engine->setIsNightMode(isNightMode);
        m_engine->repaint(m_bookModel);
	}
	QString prefix = "background-color:";
	setStyleSheet(prefix + QString(m_supportBGColor[color].c_str()));
}

void PreviewEPUBWindow::showError(const QString& error)
{
    QMessageBox::information(this, "", error, QMessageBox::Ok);
}
