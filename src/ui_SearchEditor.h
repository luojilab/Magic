/********************************************************************************
** Form generated from reading UI file 'SearchEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHEDITOR_H
#define UI_SEARCHEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "MiscEditors/SearchEditorTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_SearchEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *Filter;
    QLineEdit *FilterText;
    QHBoxLayout *horizontalLayout_2;
    SearchEditorTreeView *SearchEditorTree;
    QVBoxLayout *verticalLayout;
    QPushButton *LoadSearch;
    QSpacerItem *verticalSpacer_5;
    QPushButton *Find;
    QPushButton *ReplaceCurrent;
    QSpacerItem *verticalSpacer_2;
    QPushButton *Replace;
    QPushButton *ReplaceAll;
    QSpacerItem *verticalSpacer_3;
    QPushButton *CountAll;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *MoveUp;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *MoveLeft;
    QSpacerItem *horizontalSpacer;
    QToolButton *MoveRight;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *MoveDown;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Message;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SearchEditor)
    {
        if (SearchEditor->objectName().isEmpty())
            SearchEditor->setObjectName(QStringLiteral("SearchEditor"));
        SearchEditor->resize(644, 578);
        verticalLayout_2 = new QVBoxLayout(SearchEditor);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Filter = new QComboBox(SearchEditor);
        Filter->setObjectName(QStringLiteral("Filter"));

        horizontalLayout_5->addWidget(Filter);

        FilterText = new QLineEdit(SearchEditor);
        FilterText->setObjectName(QStringLiteral("FilterText"));

        horizontalLayout_5->addWidget(FilterText);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        SearchEditorTree = new SearchEditorTreeView(SearchEditor);
        SearchEditorTree->setObjectName(QStringLiteral("SearchEditorTree"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(SearchEditorTree->sizePolicy().hasHeightForWidth());
        SearchEditorTree->setSizePolicy(sizePolicy);
        SearchEditorTree->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        SearchEditorTree->setUniformRowHeights(true);

        horizontalLayout_2->addWidget(SearchEditorTree);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        LoadSearch = new QPushButton(SearchEditor);
        LoadSearch->setObjectName(QStringLiteral("LoadSearch"));

        verticalLayout->addWidget(LoadSearch);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        Find = new QPushButton(SearchEditor);
        Find->setObjectName(QStringLiteral("Find"));

        verticalLayout->addWidget(Find);

        ReplaceCurrent = new QPushButton(SearchEditor);
        ReplaceCurrent->setObjectName(QStringLiteral("ReplaceCurrent"));

        verticalLayout->addWidget(ReplaceCurrent);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        Replace = new QPushButton(SearchEditor);
        Replace->setObjectName(QStringLiteral("Replace"));

        verticalLayout->addWidget(Replace);

        ReplaceAll = new QPushButton(SearchEditor);
        ReplaceAll->setObjectName(QStringLiteral("ReplaceAll"));

        verticalLayout->addWidget(ReplaceAll);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        CountAll = new QPushButton(SearchEditor);
        CountAll->setObjectName(QStringLiteral("CountAll"));

        verticalLayout->addWidget(CountAll);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        MoveUp = new QToolButton(SearchEditor);
        MoveUp->setObjectName(QStringLiteral("MoveUp"));
        MoveUp->setArrowType(Qt::UpArrow);

        horizontalLayout_6->addWidget(MoveUp);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        MoveLeft = new QToolButton(SearchEditor);
        MoveLeft->setObjectName(QStringLiteral("MoveLeft"));
        MoveLeft->setArrowType(Qt::LeftArrow);

        horizontalLayout->addWidget(MoveLeft);

        horizontalSpacer = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        MoveRight = new QToolButton(SearchEditor);
        MoveRight->setObjectName(QStringLiteral("MoveRight"));
        MoveRight->setArrowType(Qt::RightArrow);

        horizontalLayout->addWidget(MoveRight);

        horizontalSpacer_3 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        MoveDown = new QToolButton(SearchEditor);
        MoveDown->setObjectName(QStringLiteral("MoveDown"));
        MoveDown->setArrowType(Qt::DownArrow);

        horizontalLayout_4->addWidget(MoveDown);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));

        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Message = new QLabel(SearchEditor);
        Message->setObjectName(QStringLiteral("Message"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Message->setFont(font);

        horizontalLayout_3->addWidget(Message);

        buttonBox = new QDialogButtonBox(SearchEditor);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        horizontalLayout_3->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(SearchEditor);

        QMetaObject::connectSlotsByName(SearchEditor);
    } // setupUi

    void retranslateUi(QDialog *SearchEditor)
    {
        SearchEditor->setWindowTitle(QApplication::translate("SearchEditor", "Saved Searches", 0));
        Filter->clear();
        Filter->insertItems(0, QStringList()
         << QApplication::translate("SearchEditor", "Filter Name:", 0)
         << QApplication::translate("SearchEditor", "Filter All:", 0)
        );
#ifndef QT_NO_TOOLTIP
        FilterText->setToolTip(QApplication::translate("SearchEditor", "List only the entries containing the text you enter.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LoadSearch->setToolTip(QApplication::translate("SearchEditor", "Load the selected entry into the Find & Replace window.", 0));
#endif // QT_NO_TOOLTIP
        LoadSearch->setText(QApplication::translate("SearchEditor", "Load Search", 0));
#ifndef QT_NO_TOOLTIP
        Find->setToolTip(QApplication::translate("SearchEditor", "Run Find using the selected entry.\n"
"If a group is selected, find the first entry in the list, \n"
"then if not found look for the second entry in the list, etc.", 0));
#endif // QT_NO_TOOLTIP
        Find->setText(QApplication::translate("SearchEditor", "Find", 0));
#ifndef QT_NO_TOOLTIP
        ReplaceCurrent->setToolTip(QApplication::translate("SearchEditor", "Run Replace using the selected entry.\n"
"If a group is selected, loop through each entry\n"
"and stop at the first successful replace.", 0));
#endif // QT_NO_TOOLTIP
        ReplaceCurrent->setText(QApplication::translate("SearchEditor", "Replace", 0));
#ifndef QT_NO_TOOLTIP
        Replace->setToolTip(QApplication::translate("SearchEditor", "Run Replace/Find using the selected entry.\n"
"If a group is selected, loop through each entry\n"
"and stop at the first successful replace/find.", 0));
#endif // QT_NO_TOOLTIP
        Replace->setText(QApplication::translate("SearchEditor", "Replace/Find", 0));
#ifndef QT_NO_TOOLTIP
        ReplaceAll->setToolTip(QApplication::translate("SearchEditor", "Run Replace All for the selected entries in the order selected.\n"
"Select a group to replace all entries in the group in order.", 0));
#endif // QT_NO_TOOLTIP
        ReplaceAll->setText(QApplication::translate("SearchEditor", "Replace All", 0));
#ifndef QT_NO_TOOLTIP
        CountAll->setToolTip(QApplication::translate("SearchEditor", "Run Count All for the selected entries in the order selected,\n"
"including entries in selected groups.", 0));
#endif // QT_NO_TOOLTIP
        CountAll->setText(QApplication::translate("SearchEditor", "Count All", 0));
#ifndef QT_NO_TOOLTIP
        MoveUp->setToolTip(QApplication::translate("SearchEditor", "Move an entry up one level in the same group.", 0));
#endif // QT_NO_TOOLTIP
        MoveUp->setText(QApplication::translate("SearchEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        MoveLeft->setToolTip(QApplication::translate("SearchEditor", "Move an entry to the level of its parent.", 0));
#endif // QT_NO_TOOLTIP
        MoveLeft->setText(QApplication::translate("SearchEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        MoveRight->setToolTip(QApplication::translate("SearchEditor", "You must select an item immediately under a group to move it into the group.", 0));
#endif // QT_NO_TOOLTIP
        MoveRight->setText(QApplication::translate("SearchEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        MoveDown->setToolTip(QApplication::translate("SearchEditor", "Move an entry down one level in the same group.", 0));
#endif // QT_NO_TOOLTIP
        MoveDown->setText(QApplication::translate("SearchEditor", "...", 0));
        Message->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonBox->setToolTip(QApplication::translate("SearchEditor", "Click Apply to load Find & Replace with the selected search.  Click OK to load your search, save your data, and close.", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class SearchEditor: public Ui_SearchEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHEDITOR_H
