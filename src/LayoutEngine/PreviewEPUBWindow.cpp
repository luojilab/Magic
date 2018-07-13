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
#include <sstream>
#include "BookViewQt.h"

using future_core::BookViewQt;
const int UPDATE_VIEW_CODE = 0;
PreviewEPUBWindow::PreviewEPUBWindow(QWidget* parent,const std::string& bundlePath, const std::string& epubPath, const QSize& defaultSize):
	QWidget(parent),
	m_epubPath(epubPath),
    m_engine(new LayoutEngine),
	m_bookReader(NULL),
	m_defaultSize(defaultSize),
	m_bookContents(NULL),
    m_viewCore(new BookViewQt(this))
{
    m_engine->setDelegate(this);
#if __APPLE__
        float ratio = 1;
#else
        float ratio = 0.85;
#endif
    const float margin = 60.f;
	m_engine->SetViewTopMargin(margin / ratio);
	m_engine->SetViewBottomMargin(margin / ratio);
	setFocusPolicy(Qt::ClickFocus);
    m_viewCore->setUpdateViewCallback([this](){
        update();
		if (!m_canChangeTOC) {
			m_canChangeTOC = true;
		}
    });
}

PreviewEPUBWindow::~PreviewEPUBWindow()
{
	closed();
    if (m_engine) {
        delete m_engine;
        m_engine = NULL;
    }
    if (m_viewCore) {
        delete m_viewCore;
        m_viewCore = NULL;
    }
}

void PreviewEPUBWindow::doDraw() {
    m_engine->gotoFirstPage(m_bookReader);
    m_viewCore->AllViewUpdated(UPDATE_VIEW_CODE);
}

void PreviewEPUBWindow::paintEvent(QPaintEvent *) {
    if ( !m_viewCore ) {
        return;
    }
    m_viewCore->onDraw();
    QApplication::restoreOverrideCursor();
}

void PreviewEPUBWindow::keyPressEvent(QKeyEvent *event) {
    if ( !isVisible() ) {
        return;
    }
	switch (event->key()) {
	case Qt::Key_Right: {
        m_engine->gotoNextPage(m_bookReader);
		break;
	}
	case Qt::Key_Left: {
        m_engine->gotoPreviousPage(m_bookReader);
		break;
	}
	case Qt::Key_PageUp: {
        m_engine->gotoPreviousChapter(m_bookReader);
		break;
	}
	case Qt::Key_PageDown: {
        m_engine->gotoNextChapter(m_bookReader);
		break;
	}
	default:
		return;
	}
    m_viewCore->AllViewUpdated(UPDATE_VIEW_CODE);
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
        if (epubPath.empty()) {
            return;
        }
        if (m_bookReader != NULL) {
            m_engine->closeEpub(m_bookReader);
        }
        if (defaultSize != m_defaultSize) {
            m_defaultSize = defaultSize;
            if (m_bookReader) {
                m_viewCore->SetPaintSize(m_defaultSize.width(), m_defaultSize.height());
            }
        }
        m_epubPath = epubPath;
        m_engine->openEpub(m_viewCore, m_epubPath, "", "");
	}
}

void PreviewEPUBWindow::gotoChapterByIndex(const QModelIndex index)
{
	if (!m_canChangeTOC) { return; }
	if (!m_bookContents) { return; }
	if (!isVisible()) { return; }
	m_canChangeTOC = false;
	QStandardItem *selectItem = static_cast<QStandardItem *>(index.internalPointer());
	int idx{-1};
	std::vector<QStandardItem *>::iterator it = m_bookItems.begin();
	// get click index
	if ( !index.parent().isValid() ) {
        auto s = index.data().toString();
        while (it != m_bookItems.end()) {
            if (s == (*it++)->text()) {
                break;
            }
            idx += 1;
        }
        idx += 1;
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
    QList<std::shared_ptr<BookContents>>items = m_engine->getContentList(m_bookReader);
	if (idx == -1 || idx > items.count()) { return; }
	// goto chapter
	m_engine->gotoChapterByFileName(m_bookReader, items[idx]->ContentHRef);
    m_viewCore->AllViewUpdated(UPDATE_VIEW_CODE);
}

void PreviewEPUBWindow::engineInitFinish() {
    if ( m_engine->isEngineReady() && !m_epubPath.empty() ) {
		m_viewCore->SetPaintSize(m_defaultSize.width(), m_defaultSize.height());
        m_engine->openEpub(m_viewCore, m_epubPath, "", "");
	}
}

void PreviewEPUBWindow::engineOpenBook(BookReader* bookModel, QList<BookContents *>list, int error)
{
	if (error != 0) {
        std::stringstream str;
        str << error;
        showError(("Opne Epub failed" + str.str() + " " + m_epubPath).c_str());
        return;
	}
    if (m_bookReader) {
        closed();
    }
    if ( !m_viewCore ) {
        bookViewCoreInitial();
    }
    m_bookReader = bookModel;
    m_viewCore->SetBookReader(bookModel);
    m_viewCore->SetPaintSize(m_defaultSize.width(), m_defaultSize.height());
    m_engine->setIsNightMode(m_isNightMode);
    generateContentsModel();
    doDraw();
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

void PreviewEPUBWindow::enginUpdateAllViewPage()
{
    QApplication::restoreOverrideCursor();
	update();
}

void PreviewEPUBWindow::engineOpenHTML(HTMLReader *html, LAYOUT_ENGINE_OPEN_EPUB_STATUS error) {}

void PreviewEPUBWindow::generateContentsModel()
{
	if (!m_bookReader) {
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
    QList<std::shared_ptr<BookContents>> contents = m_engine->getContentList(m_bookReader);
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
    if ( !m_bookReader ) {
        return;
    }
    m_engine->closeEpub(m_bookReader);
    m_bookReader = 0;
    delete m_bookContents;
    delete m_viewCore;
    m_viewCore = 0;
    m_bookContents = 0;
}

void PreviewEPUBWindow::GoToHtml()
{
	int offset = m_engine->getCurrentPageOffset(m_bookReader);
	std::string chapterId = m_engine->getCurrentChapterId(m_bookReader);
	std::string filePath = m_engine->getChapterFileNameById(m_bookReader, chapterId);
    size_t pos = filePath.rfind('/');
    if ( pos == std::string::npos || pos == filePath.length() - 1 ) {
        return;
    }
    std::string name = filePath.substr(pos + 1, filePath.length() - pos);
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
        m_engine->repaint(m_bookReader);
	}
	QString prefix = "background-color:";
	setStyleSheet(prefix + QString(m_supportBGColor[color].c_str()));
}

void PreviewEPUBWindow::showError(const QString& error)
{
    QMessageBox::information(this, "", error, QMessageBox::Ok);
}

void PreviewEPUBWindow::bookViewCoreInitial()
{
    if ( m_viewCore ) {
        return;
    }
    m_viewCore = new BookViewQt(this);
    m_viewCore->setUpdateViewCallback([this]() {
        update();
		if (!m_canChangeTOC) {
			m_canChangeTOC = true;
		}
    });
}
