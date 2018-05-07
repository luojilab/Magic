/********************************************************************************
** Form generated from reading UI file 'ReportsCSSFilesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTSCSSFILESWIDGET_H
#define UI_REPORTSCSSFILESWIDGET_H

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

class Ui_CSSFilesWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leFilter;
    QTreeView *fileTree;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *CSSFilesWidget)
    {
        if (CSSFilesWidget->objectName().isEmpty())
            CSSFilesWidget->setObjectName(QStringLiteral("CSSFilesWidget"));
        CSSFilesWidget->resize(1000, 600);
        verticalLayout = new QVBoxLayout(CSSFilesWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(CSSFilesWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        leFilter = new QLineEdit(CSSFilesWidget);
        leFilter->setObjectName(QStringLiteral("leFilter"));

        horizontalLayout->addWidget(leFilter);


        verticalLayout->addLayout(horizontalLayout);

        fileTree = new QTreeView(CSSFilesWidget);
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

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        buttonBox = new QDialogButtonBox(CSSFilesWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(CSSFilesWidget);

        QMetaObject::connectSlotsByName(CSSFilesWidget);
    } // setupUi

    void retranslateUi(QWidget *CSSFilesWidget)
    {
        CSSFilesWidget->setWindowTitle(QApplication::translate("CSSFilesWidget", "CSS Files", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("CSSFilesWidget", "List only the file names which contain the text you enter.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("CSSFilesWidget", "Filter:", 0));
    } // retranslateUi

};

namespace Ui {
    class CSSFilesWidget: public Ui_CSSFilesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSCSSFILESWIDGET_H
