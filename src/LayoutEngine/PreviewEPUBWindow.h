#ifndef __PreviewEPUBWindow__H
#define __PreviewEPUBWindow__H
#include <QWidget>
#include "LayoutEngin.h"
#include "BookReader.h"
#include <QDockWidget.h>

class QStandardItemModel;
class QStandardItem;

namespace future_core {
    class HTMLReader;
    class BookViewQt;
}

class PreviewEPUBWindow : public QWidget, public LayoutEngineDelegate {

	Q_OBJECT
    
public:
	PreviewEPUBWindow(QWidget *parent, const std::string& bundlePath, const std::string& epubPath, const QSize& defaultSize);
	~PreviewEPUBWindow();
	void updateEngine(const std::string& bundlePath = "", const std::string& epubPath = "", const QSize& defaultSize = QSize(0, 0));
	QStandardItemModel *getBookContentList() { return m_bookContents; };

private:
	void engineInitFinish() override;
	void engineOpenBook(BookReader* bookModel, QList<BookContents *>list, int error) override;
    void enginUpdateAllViewPage() override;
	void engineOpenHTML(HTMLReader* html, LAYOUT_ENGINE_OPEN_EPUB_STATUS error) override;

public slots:
	void gotoChapterByIndex(const QModelIndex);
	void changeBGColorNormal() { changeBGColor(0); };
	void changeBGColorYellow() { changeBGColor(1); };
	void changeBGColorGreen() { changeBGColor(2); };
	void changeBGColorNight() { changeBGColor(3, true); };

private:
	std::string m_epubPath;
	LayoutEngine * m_engine;
	BookReader* m_bookReader;
	QSize m_defaultSize;
    QStandardItemModel *m_bookContents{ NULL };
	std::vector<QStandardItem *>m_bookItems;
    future_core::BookViewQt *m_viewCore{ NULL };
	std::map<int, std::string> m_supportBGColor {
		{ 0,"rgb(255,255,255)" },
		{ 1,"rgb(244,240,221)" },
		{ 2,"rgb(174,200,174)" },
		{ 3,"rgb(52,55,59);" }
	};
	bool m_isNightMode{ false };
	bool m_canChangeTOC{ true };

private:
	void generateContentsModel();
	void changeBGColor(int color, bool isNightMode = false);
    void bookViewCoreInitial();

private slots:
    // TODO renaming
	void doDraw();
	void closed();
	void GoToHtml();
    void showError(const QString&);

signals:
	void bookContentReady();
	void gotoHtmlSourceCode(const std::string& htmlName, size_t offsite);

protected:
    void paintEvent(QPaintEvent *) override;
    void mousePressEvent(QMouseEvent * event) override;
	void keyPressEvent(QKeyEvent *) override;
	void resizeEvent(QResizeEvent * event) override;
	void closeEvent(QCloseEvent * event) override;
};
#endif // !__PreviewEPUBWindow_H
