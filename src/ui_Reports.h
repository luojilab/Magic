/********************************************************************************
** Form generated from reading UI file 'Reports.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTS_H
#define UI_REPORTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Reports
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QListWidget *availableWidgets;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Refresh;
    QStackedWidget *pWidget;

    void setupUi(QDialog *Reports)
    {
        if (Reports->objectName().isEmpty())
            Reports->setObjectName(QStringLiteral("Reports"));
        Reports->resize(1000, 600);
        verticalLayout = new QVBoxLayout(Reports);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        availableWidgets = new QListWidget(Reports);
        availableWidgets->setObjectName(QStringLiteral("availableWidgets"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(200);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(availableWidgets->sizePolicy().hasHeightForWidth());
        availableWidgets->setSizePolicy(sizePolicy);
        availableWidgets->setMaximumSize(QSize(200, 16777215));
        availableWidgets->setBaseSize(QSize(0, 0));
        availableWidgets->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(availableWidgets);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Refresh = new QPushButton(Reports);
        Refresh->setObjectName(QStringLiteral("Refresh"));

        horizontalLayout_2->addWidget(Refresh);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);

        pWidget = new QStackedWidget(Reports);
        pWidget->setObjectName(QStringLiteral("pWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pWidget->sizePolicy().hasHeightForWidth());
        pWidget->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pWidget);

        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Reports);

        QMetaObject::connectSlotsByName(Reports);
    } // setupUi

    void retranslateUi(QDialog *Reports)
    {
        Reports->setWindowTitle(QApplication::translate("Reports", "Reports", 0));
        Refresh->setText(QApplication::translate("Reports", "Refresh", 0));
    } // retranslateUi

};

namespace Ui {
    class Reports: public Ui_Reports {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTS_H
