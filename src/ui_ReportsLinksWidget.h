/********************************************************************************
** Form generated from reading UI file 'ReportsLinksWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTSLINKSWIDGET_H
#define UI_REPORTSLINKSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LinksWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leFilter;
    QTreeView *fileTree;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *LinksWidget)
    {
        if (LinksWidget->objectName().isEmpty())
            LinksWidget->setObjectName(QStringLiteral("LinksWidget"));
        LinksWidget->resize(1000, 600);
        verticalLayout = new QVBoxLayout(LinksWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(LinksWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        leFilter = new QLineEdit(LinksWidget);
        leFilter->setObjectName(QStringLiteral("leFilter"));

        horizontalLayout->addWidget(leFilter);


        verticalLayout->addLayout(horizontalLayout);

        fileTree = new QTreeView(LinksWidget);
        fileTree->setObjectName(QStringLiteral("fileTree"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileTree->sizePolicy().hasHeightForWidth());
        fileTree->setSizePolicy(sizePolicy);
        fileTree->setProperty("showDropIndicator", QVariant(false));
        fileTree->setAlternatingRowColors(true);
        fileTree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        fileTree->setUniformRowHeights(false);
        fileTree->setSortingEnabled(true);

        verticalLayout->addWidget(fileTree);

        buttonBox = new QDialogButtonBox(LinksWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LinksWidget);

        QMetaObject::connectSlotsByName(LinksWidget);
    } // setupUi

    void retranslateUi(QWidget *LinksWidget)
    {
        LinksWidget->setWindowTitle(QApplication::translate("LinksWidget", "Links", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("LinksWidget", "List only the file names which contain the text you enter.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("LinksWidget", "Filter:", 0));
    } // retranslateUi

};

namespace Ui {
    class LinksWidget: public Ui_LinksWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSLINKSWIDGET_H
