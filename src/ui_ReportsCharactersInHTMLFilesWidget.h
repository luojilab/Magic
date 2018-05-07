/********************************************************************************
** Form generated from reading UI file 'ReportsCharactersInHTMLFilesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTSCHARACTERSINHTMLFILESWIDGET_H
#define UI_REPORTSCHARACTERSINHTMLFILESWIDGET_H

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

class Ui_CharactersInHTMLFilesWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Filter;
    QTreeView *fileTree;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Characters;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *CharactersInHTMLFilesWidget)
    {
        if (CharactersInHTMLFilesWidget->objectName().isEmpty())
            CharactersInHTMLFilesWidget->setObjectName(QStringLiteral("CharactersInHTMLFilesWidget"));
        CharactersInHTMLFilesWidget->resize(1000, 600);
        verticalLayout = new QVBoxLayout(CharactersInHTMLFilesWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(CharactersInHTMLFilesWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        Filter = new QLineEdit(CharactersInHTMLFilesWidget);
        Filter->setObjectName(QStringLiteral("Filter"));

        horizontalLayout->addWidget(Filter);


        verticalLayout->addLayout(horizontalLayout);

        fileTree = new QTreeView(CharactersInHTMLFilesWidget);
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
        label_2 = new QLabel(CharactersInHTMLFilesWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        Characters = new QLineEdit(CharactersInHTMLFilesWidget);
        Characters->setObjectName(QStringLiteral("Characters"));
        Characters->setReadOnly(true);

        horizontalLayout_2->addWidget(Characters);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(CharactersInHTMLFilesWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CharactersInHTMLFilesWidget);

        QMetaObject::connectSlotsByName(CharactersInHTMLFilesWidget);
    } // setupUi

    void retranslateUi(QWidget *CharactersInHTMLFilesWidget)
    {
        CharactersInHTMLFilesWidget->setWindowTitle(QApplication::translate("CharactersInHTMLFilesWidget", "Characters in HTML Files", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("CharactersInHTMLFilesWidget", "List only the file names which contain the text you enter.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("CharactersInHTMLFilesWidget", "Filter:", 0));
        label_2->setText(QApplication::translate("CharactersInHTMLFilesWidget", "Characters:", 0));
    } // retranslateUi

};

namespace Ui {
    class CharactersInHTMLFilesWidget: public Ui_CharactersInHTMLFilesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSCHARACTERSINHTMLFILESWIDGET_H
