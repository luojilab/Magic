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
#include <QWidgetAction>
#include <QLabel>
#include <QScreen>
#include <QClipboard>
#include "BookViewQt.h"

using future_core::BookViewQt;
PreviewEPUBWindow::PreviewEPUBWindow(QWidget* parent,const std::string& bundlePath, const std::string& epubPath, const QSize& defaultSize):
	QWidget(parent),
	m_epubPath(epubPath),
	m_bookReader(0),
	m_defaultSize(defaultSize),
	m_bookContents(0),
    m_viewCore(0)
{
    const float margin = 60.f;
    float ratio = QApplication::screens()[0]->devicePixelRatio() >= 2 ? 1 : 0.87;
	LayoutEngine::GetEngine()->SetViewTopMargin(margin / ratio);
	LayoutEngine::GetEngine()->SetViewBottomMargin(margin / ratio);
	setFocusPolicy(Qt::ClickFocus);
    bookViewCoreInitial();
	connect(this, SIGNAL(putTextIntoClipboard(QString)), this, SLOT(setClipboard(QString)));
}

PreviewEPUBWindow::~PreviewEPUBWindow()
{
	disconnect(this, SIGNAL(putTextIntoClipboard(QString)), this, SLOT(setClipboard(QString)));
	closed();
}

void PreviewEPUBWindow::paintEvent(QPaintEvent *) {
    if ( !m_viewCore && !m_bookReader ) {
        return;
    }
    m_viewCore->onDraw();
    QApplication::restoreOverrideCursor();
}

void PreviewEPUBWindow::keyPressEvent(QKeyEvent *event) {
    if ( !isVisible() ) {
        return;
    }
    if (event->modifiers() == Qt::ControlModifier && event->key() == Qt::Key_C) {
        copySelectedTextToClipboard();
        return;
    }
	switch (event->key()) {
	case Qt::Key_Right: {
        LayoutEngine::GetEngine()->gotoNextPage(m_bookReader);
		break;
	}
	case Qt::Key_Left: {
        LayoutEngine::GetEngine()->gotoPreviousPage(m_bookReader);
		break;
	}
	case Qt::Key_PageUp: {
        LayoutEngine::GetEngine()->gotoPreviousChapter(m_bookReader);
		break;
	}
	case Qt::Key_PageDown: {
        LayoutEngine::GetEngine()->gotoNextChapter(m_bookReader);
		break;
	}
	default:
		return;
	}
}

void PreviewEPUBWindow::resizeEvent(QResizeEvent *event) 
{
}

void PreviewEPUBWindow::closeEvent(QCloseEvent *event) 
{
	closed();
}

void PreviewEPUBWindow::reloadEPUB(const std::string& bundlePath, const std::string& epubPath, const std::string& jumpHtmlFilePath, const QSize& defaultSize)
{
    if (epubPath.empty()) {
        return;
    }
    if ( !LayoutEngine::GetEngine()->isEngineReady() ) {
        m_epubPath = epubPath;
        LayoutEngine::GetEngine()->initLayoutEngine(bundlePath, [this]() {
            engineInitFinish();
        });
	} else {
        if (m_bookReader != NULL) {
            // Not close preview window
            closeBase();
            LayoutEngine::GetEngine()->closeEpub(m_bookReader, [=](){
                bookViewCoreInitial();
                if (defaultSize != m_defaultSize && !defaultSize.isNull()) {
                    m_defaultSize = defaultSize;
                }
                m_epubPath = epubPath;
                LayoutEngine* engine = LayoutEngine::GetEngine();
                engine->openEpub(m_viewCore, m_epubPath, "", "", [=](BookReader* bookReader,int ecode) {
                    engineOpenBookFinish(bookReader, ecode);
                    engine->gotoChapterByFileName(bookReader, (m_epubPath + "|" + jumpHtmlFilePath).c_str());
                });
            });
            m_bookReader = 0;
		} else {
            // have close preview window and reopen
			m_epubPath = epubPath;
            m_defaultSize = defaultSize;
			LayoutEngine* engine = LayoutEngine::GetEngine();
			bookViewCoreInitial();
			engine->openEpub(m_viewCore, m_epubPath, "", "", [=](BookReader* bookReader, int ecode) {
				engineOpenBookFinish(bookReader, ecode);
			});
		}
	}
}

void PreviewEPUBWindow::gotoChapterByIndex(const QModelIndex index)
{
	if (!m_bookContents) { return; }
	if (!isVisible()) { return; }
    
    const QAbstractItemModel* absmodel = index.model();
    const QStandardItemModel* model = dynamic_cast<const QStandardItemModel *>(absmodel);
    QString url = model->itemFromIndex(index)->data(Qt::UserRole + 2).toString();
	// goto chapter
	LayoutEngine::GetEngine()->gotoChapterByFileName(m_bookReader, url);
}

void PreviewEPUBWindow::engineInitFinish() {
    if ( LayoutEngine::GetEngine()->isEngineReady() && !m_epubPath.empty() ) {
        LayoutEngine::GetEngine()->openEpub(m_viewCore, m_epubPath, "", "", [this](BookReader* bookReader,int ecode) {
            engineOpenBookFinish(bookReader, ecode);
        });
    }
}

void PreviewEPUBWindow::engineOpenBookFinish(BookReader* bookreader, int error)
{
	if (error != 0 || bookreader == 0) {
        std::stringstream str;
        str << error;
        showError(("Opne Epub failed" + str.str() + " " + m_epubPath).c_str());
        return;
	}
    if (m_bookReader) {
        closed();
        bookViewCoreInitial();
    }
    float ratio = QApplication::screens()[0]->devicePixelRatio() >= 2 ? 1 : 0.85;
    LayoutEngine* engine = LayoutEngine::GetEngine();
    m_bookReader = bookreader;
    m_viewCore->SetBookReader(bookreader);
    m_viewCore->SetPaintSize(m_defaultSize.width(), m_defaultSize.height());
    auto toc = engine->getContentList(m_bookReader);
    engine->setIsNightMode(m_isNightMode);
    engine->setFontScale(m_bookReader, ratio);
    engine->gotoFirstPage(m_bookReader);
    generateNavigatorTreeModel(toc);
}

void PreviewEPUBWindow::mousePressEvent(QMouseEvent *event) {
	if (event->button() == Qt::RightButton) {
		QMenu* menu = new QMenu(this);
        QLabel* label = new QLabel("Go to Html", 0);
        QWidgetAction *action = new QWidgetAction(0);
        action->setDefaultWidget(label);
		connect(action, SIGNAL(triggered()), this, SLOT(GoToHtml()));
		menu->addAction(action);
		menu->exec(event->globalPos());
		delete menu;
        return;
	}
    if (event->button() == Qt::LeftButton) {
        setFocus(Qt::MouseFocusReason);
        if (m_haveSelction) {
            LayoutEngine::GetEngine()->removeSelection(m_bookReader);
        }
        return;
    }
}

void PreviewEPUBWindow::mouseMoveEvent(QMouseEvent * event)
{
    int x = event->pos().x();
    int y = event->pos().y();
    LayoutEngine* engine = LayoutEngine::GetEngine();
    if (!m_selectionStart) {
        engine->mouseStartSelection(m_bookReader, x, y);
        m_selectionStart = true;
        m_haveSelction = true;
    } else {
        engine->mouseMoveSelection(m_bookReader, x, y);
    }
}

void PreviewEPUBWindow::mouseReleaseEvent(QMouseEvent * event)
{
    int x = event->pos().x();
    int y = event->pos().y();
    LayoutEngine* engine = LayoutEngine::GetEngine();
    if (m_selectionStart) {
        engine->mouseEndSelection(m_bookReader, x, y);
        m_selectionStart = false;
    } else {
        LayoutEngine::GetEngine()->mouseClick(m_bookReader, x, y);
    }
    engine->mouseRelease(m_bookReader, x, y);
}

void PreviewEPUBWindow::generateNavigatorTreeModel(QList<std::shared_ptr<BookContents>> contents)
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
	for (std::shared_ptr<BookContents>item : contents) {
		int level		= item->level;
		QString text	= item->text;
        
		int diff = level - lastLevel;
		Q_ASSERT(diff < 2);

		QStandardItem* content = new QStandardItem(text);
        content->setData(QVariant(item->ContentHRef), Qt::UserRole + 2);
        
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
    LayoutEngine::GetEngine()->closeEpub(m_bookReader, [](){});
    m_bookReader = 0;
    delete m_bookContents;
    delete m_viewCore;
    m_viewCore = 0;
    m_bookContents = 0;
}

void PreviewEPUBWindow::closeBase() {
    if ( !m_bookReader ) {
        return;
    }
    delete m_bookContents;
    delete m_viewCore;
    m_viewCore = 0;
    m_bookContents = 0;
}

void PreviewEPUBWindow::GoToHtml()
{
	int offset = LayoutEngine::GetEngine()->getCurrentPageOffset(m_bookReader);
	std::string chapterId = LayoutEngine::GetEngine()->getCurrentChapterId(m_bookReader);
	std::string filePath = LayoutEngine::GetEngine()->getChapterFileNameById(m_bookReader, chapterId);
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
        LayoutEngine::GetEngine()->setIsNightMode(isNightMode);
        LayoutEngine::GetEngine()->repaint(m_bookReader);
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
    });
}

void PreviewEPUBWindow::copySelectedTextToClipboard()
{
    if (!m_haveSelction) {
        return;
    }
    LayoutEngine::GetEngine()->getSelectedText(m_bookReader, [this](const std::string &htmlFile, const std::string text, int start, int end) {
		emit putTextIntoClipboard(QString(text.c_str()));
        LayoutEngine::GetEngine()->removeSelection(m_bookReader);
        m_haveSelction = false;
        m_selectionStart = false;
		update();
    });
}

void PreviewEPUBWindow::setClipboard(QString text)
{
	QApplication::clipboard()->setText(text);
}
