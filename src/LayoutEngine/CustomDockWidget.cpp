#include "CustomDockWidget.h"

CustomDockWidget::CustomDockWidget():QDockWidget()
{
}

void CustomDockWidget::closeEvent(QCloseEvent *)
{
	emit DockCloseSig();
}
