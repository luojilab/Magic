#pragma once
#include <QWidget>
#include "LayoutEngin.h"
#include <QDockWidget>
#include <memory>

namespace future_core {
    class HTMLReader;
    class HTMLViewQt;
}

class PreviewHTMLWindow : public QDockWidget
{
	Q_OBJECT

public:
	PreviewHTMLWindow(QWidget* parent, const std::string htmlPath, const QSize& standardSize);
	~PreviewHTMLWindow();
	void reloadHTML(std::string htmlPath, bool reload, const QSize& standardSize);
	void updateCurrentPage(const QString& contentTexts);
	void updateForOffset(unsigned int);
	void cleanTempFile();

protected:
	void engineInitFinish();
    void engineOpenHTMLFinish(HTMLReader* html, int error);

	void paintEvent(QPaintEvent *) override;
	void resizeEvent(QResizeEvent * event) override;
	void mousePressEvent(QMouseEvent *) override;
	void closeEvent(QCloseEvent *) override;
    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;
	void keyPressEvent(QKeyEvent *) override;


signals:
	void mapbackToHtml(unsigned int);

public slots:
	void bgColorToNormal() { bgColorChange(0); };
	void bgColorToYellow() { bgColorChange(1); };
	void bgColorToGreen() { bgColorChange(2); };
	void bgColorToNight() { bgColorChange(3, true); };
	void bgColorChange(int idx, bool isNightMode = false);
    
private slots:
	void closed();
	void gobackToHTMLOffset();

private:
	std::string m_htmlPath{ "" };
	std::string m_innerHtmlPath{ "" };
	QSize m_standardSize;
    unsigned int m_currentPageIndex{ 0 };
	bool m_isNightMode{ false };
    future_core::HTMLReader* m_htmlReader{ NULL };
    future_core::HTMLViewQt* m_viewCore{ NULL };

private:
	void cleanResource();
	void refreshView() const;
	std::string tempFilePath(const std::string& fileName);
	std::map<int, std::string> m_supportBGColor {
		{0,"rgb(255,255,255)"},
		{1,"rgb(244,240,221)"},
		{2,"rgb(174,200,174)"},
		{3,"rgb(52,55,59);"}
	};
	const int m_supportedBGColorCnt = m_supportBGColor.size();
    
private:
    void initialCoreView();
};
