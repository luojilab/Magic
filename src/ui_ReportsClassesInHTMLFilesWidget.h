/********************************************************************************
** Form generated from reading UI file 'ReportsClassesInHTMLFilesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTSCLASSESINHTMLFILESWIDGET_H
#define UI_REPORTSCLASSESINHTMLFILESWIDGET_H

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

class Ui_ClassesInHTMLFilesWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Filter;
    QTreeView *fileTree;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *ClassesInHTMLFilesWidget)
    {
        if (ClassesInHTMLFilesWidget->objectName().isEmpty())
            ClassesInHTMLFilesWidget->setObjectName(QStringLiteral("ClassesInHTMLFilesWidget"));
        ClassesInHTMLFilesWidget->resize(1000, 600);
        verticalLayout = new QVBoxLayout(ClassesInHTMLFilesWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ClassesInHTMLFilesWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        Filter = new QLineEdit(ClassesInHTMLFilesWidget);
        Filter->setObjectName(QStringLiteral("Filter"));

        horizontalLayout->addWidget(Filter);


        verticalLayout->addLayout(horizontalLayout);

        fileTree = new QTreeView(ClassesInHTMLFilesWidget);
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

        buttonBox = new QDialogButtonBox(ClassesInHTMLFilesWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ClassesInHTMLFilesWidget);

        QMetaObject::connectSlotsByName(ClassesInHTMLFilesWidget);
    } // setupUi

    void retranslateUi(QWidget *ClassesInHTMLFilesWidget)
    {
        ClassesInHTMLFilesWidget->setWindowTitle(QApplication::translate("ClassesInHTMLFilesWidget", "Style Classes in HTML Files", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("ClassesInHTMLFilesWidget", "List only the file names which contain the text you enter.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("ClassesInHTMLFilesWidget", "Filter:", 0));
    } // retranslateUi

};

namespace Ui {
    class ClassesInHTMLFilesWidget: public Ui_ClassesInHTMLFilesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSCLASSESINHTMLFILESWIDGET_H
