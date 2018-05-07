/********************************************************************************
** Form generated from reading UI file 'ReportsHTMLFilesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTSHTMLFILESWIDGET_H
#define UI_REPORTSHTMLFILESWIDGET_H

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

class Ui_HTMLFilesWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leFilter;
    QTreeView *fileTree;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *HTMLFilesWidget)
    {
        if (HTMLFilesWidget->objectName().isEmpty())
            HTMLFilesWidget->setObjectName(QStringLiteral("HTMLFilesWidget"));
        HTMLFilesWidget->resize(1000, 600);
        verticalLayout = new QVBoxLayout(HTMLFilesWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(HTMLFilesWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        leFilter = new QLineEdit(HTMLFilesWidget);
        leFilter->setObjectName(QStringLiteral("leFilter"));

        horizontalLayout->addWidget(leFilter);


        verticalLayout->addLayout(horizontalLayout);

        fileTree = new QTreeView(HTMLFilesWidget);
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

        buttonBox = new QDialogButtonBox(HTMLFilesWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(HTMLFilesWidget);

        QMetaObject::connectSlotsByName(HTMLFilesWidget);
    } // setupUi

    void retranslateUi(QWidget *HTMLFilesWidget)
    {
        HTMLFilesWidget->setWindowTitle(QApplication::translate("HTMLFilesWidget", "HTML Files", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("HTMLFilesWidget", "List only the file names which contain the text you enter.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("HTMLFilesWidget", "Filter:", 0));
    } // retranslateUi

};

namespace Ui {
    class HTMLFilesWidget: public Ui_HTMLFilesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSHTMLFILESWIDGET_H
