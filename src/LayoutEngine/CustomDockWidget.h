#pragma once
#include <QDockWidget>

class CustomDockWidget: public QDockWidget
{
	Q_OBJECT

public:
	CustomDockWidget();
protected:
	void closeEvent(QCloseEvent *);
signals:
	void DockCloseSig();
};

