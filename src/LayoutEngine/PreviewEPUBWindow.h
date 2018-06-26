#ifndef __PreviewEPUBWindow__H
#define __PreviewEPUBWindow__H
#include <QWidget>
#include "LayoutEngin.h"
#include "BookReader.h"
#include <QDockWidget.h>

class QStandardItemModel;
class QStandardItem;
class BookViewCore;

class PreviewEPUBWindow : public QWidget, public LayoutEngineDelegate {

	Q_OBJECT
    
public:
	PreviewEPUBWindow(QWidget *parent, const std::string& bundlePath, const std::string& epubPath, const QSize& defaultSize);
	~PreviewEPUBWindow();
    // TODO default value
	void updateEngine(const std::string& bundlePath = "", const std::string& epubPath = "", const QSize& defaultSize = QSize(0, 0));
	QStandardItemModel *getBookContentList() { return m_bookContents; };

private:
	void engineInitFinish() override;
	void engineOpenBook(BookReader* bookModel, QList<BookContents *>list, int error) override;
    void enginUpdateAllViewPage() override;

	void engineOpenHTML(BookChapter * html, LAYOUT_ENGINE_OPEN_EPUB_STATUS error) override;
    void htmlImageRenderFinish(BookChapter *html, std::shared_ptr<QImage>& pic) override;

public slots:
	void gotoChapterByIndex(const QModelIndex);
	void changeBGColorNormal() { changeBGColor(0); };
	void changeBGColorYellow() { changeBGColor(1); };
	void changeBGColorGreen() { changeBGColor(2); };
	void changeBGColorNight() { changeBGColor(3, true); };

private:
	std::string m_epubPath;
	LayoutEngine * m_engine;
	BookReader* m_bookModel;
	QSize m_defaultSize;
	QStandardItemModel *m_bookContents;
	std::vector<QStandardItem *>m_bookItems;
    BookViewCore *m_viewCore{ NULL };
	std::map<int, std::string> m_supportBGColor {
		{ 0,"rgb(255,255,255)" },
		{ 1,"rgb(244,240,221)" },
		{ 2,"rgb(174,200,174)" },
		{ 3,"rgb(52,55,59);" }
	};
	bool m_isNightMode{ false };

private:
	void generateContentsModel();
	void changeBGColor(int color, bool isNightMode = false);

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
