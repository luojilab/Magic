/********************************************************************************
** Form generated from reading UI file 'ReportsStylesInCSSFilesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTSSTYLESINCSSFILESWIDGET_H
#define UI_REPORTSSTYLESINCSSFILESWIDGET_H

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

class Ui_StylesInCSSFilesWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Filter;
    QTreeView *fileTree;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *StylesInCSSFilesWidget)
    {
        if (StylesInCSSFilesWidget->objectName().isEmpty())
            StylesInCSSFilesWidget->setObjectName(QStringLiteral("StylesInCSSFilesWidget"));
        StylesInCSSFilesWidget->resize(1000, 600);
        verticalLayout = new QVBoxLayout(StylesInCSSFilesWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(StylesInCSSFilesWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        Filter = new QLineEdit(StylesInCSSFilesWidget);
        Filter->setObjectName(QStringLiteral("Filter"));

        horizontalLayout->addWidget(Filter);


        verticalLayout->addLayout(horizontalLayout);

        fileTree = new QTreeView(StylesInCSSFilesWidget);
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

        buttonBox = new QDialogButtonBox(StylesInCSSFilesWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(StylesInCSSFilesWidget);

        QMetaObject::connectSlotsByName(StylesInCSSFilesWidget);
    } // setupUi

    void retranslateUi(QWidget *StylesInCSSFilesWidget)
    {
        StylesInCSSFilesWidget->setWindowTitle(QApplication::translate("StylesInCSSFilesWidget", "Style Classes in CSS Files", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("StylesInCSSFilesWidget", "List only the file names which contain the text you enter.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("StylesInCSSFilesWidget", "Filter:", 0));
    } // retranslateUi

};

namespace Ui {
    class StylesInCSSFilesWidget: public Ui_StylesInCSSFilesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSSTYLESINCSSFILESWIDGET_H
