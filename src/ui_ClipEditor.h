/********************************************************************************
** Form generated from reading UI file 'ClipEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIPEDITOR_H
#define UI_CLIPEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "MiscEditors/ClipEditorTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_ClipEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *Filter;
    QLineEdit *FilterText;
    QHBoxLayout *horizontalLayout_2;
    ClipEditorTreeView *ClipEditorTree;
    QVBoxLayout *verticalLayout_3;
    QPushButton *PasteClip;
    QSpacerItem *verticalSpacer_2;
    QPushButton *AddEntry;
    QPushButton *AddGroup;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QToolButton *MoveUp;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *MoveLeft;
    QSpacerItem *horizontalSpacer;
    QToolButton *MoveRight;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *MoveDown;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ClipEditor)
    {
        if (ClipEditor->objectName().isEmpty())
            ClipEditor->setObjectName(QStringLiteral("ClipEditor"));
        ClipEditor->resize(800, 440);
        verticalLayout_2 = new QVBoxLayout(ClipEditor);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Filter = new QComboBox(ClipEditor);
        Filter->setObjectName(QStringLiteral("Filter"));

        horizontalLayout_5->addWidget(Filter);

        FilterText = new QLineEdit(ClipEditor);
        FilterText->setObjectName(QStringLiteral("FilterText"));

        horizontalLayout_5->addWidget(FilterText);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ClipEditorTree = new ClipEditorTreeView(ClipEditor);
        ClipEditorTree->setObjectName(QStringLiteral("ClipEditorTree"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(ClipEditorTree->sizePolicy().hasHeightForWidth());
        ClipEditorTree->setSizePolicy(sizePolicy);
        ClipEditorTree->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        ClipEditorTree->setUniformRowHeights(true);

        horizontalLayout_2->addWidget(ClipEditorTree);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        PasteClip = new QPushButton(ClipEditor);
        PasteClip->setObjectName(QStringLiteral("PasteClip"));

        verticalLayout_3->addWidget(PasteClip);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        AddEntry = new QPushButton(ClipEditor);
        AddEntry->setObjectName(QStringLiteral("AddEntry"));

        verticalLayout_3->addWidget(AddEntry);

        AddGroup = new QPushButton(ClipEditor);
        AddGroup->setObjectName(QStringLiteral("AddGroup"));

        verticalLayout_3->addWidget(AddGroup);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        MoveUp = new QToolButton(ClipEditor);
        MoveUp->setObjectName(QStringLiteral("MoveUp"));
        MoveUp->setArrowType(Qt::UpArrow);

        horizontalLayout_7->addWidget(MoveUp);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        MoveLeft = new QToolButton(ClipEditor);
        MoveLeft->setObjectName(QStringLiteral("MoveLeft"));
        MoveLeft->setArrowType(Qt::LeftArrow);

        horizontalLayout_6->addWidget(MoveLeft);

        horizontalSpacer = new QSpacerItem(15, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        MoveRight = new QToolButton(ClipEditor);
        MoveRight->setObjectName(QStringLiteral("MoveRight"));
        MoveRight->setArrowType(Qt::RightArrow);

        horizontalLayout_6->addWidget(MoveRight);

        horizontalSpacer_3 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        MoveDown = new QToolButton(ClipEditor);
        MoveDown->setObjectName(QStringLiteral("MoveDown"));
        MoveDown->setArrowType(Qt::DownArrow);

        horizontalLayout_4->addWidget(MoveDown);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        buttonBox = new QDialogButtonBox(ClipEditor);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setEnabled(true);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        horizontalLayout_3->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(ClipEditor);

        QMetaObject::connectSlotsByName(ClipEditor);
    } // setupUi

    void retranslateUi(QDialog *ClipEditor)
    {
        ClipEditor->setWindowTitle(QApplication::translate("ClipEditor", "Clip Editor", 0));
        Filter->clear();
        Filter->insertItems(0, QStringList()
         << QApplication::translate("ClipEditor", "Filter Name:", 0)
         << QApplication::translate("ClipEditor", "Filter All:", 0)
        );
#ifndef QT_NO_TOOLTIP
        FilterText->setToolTip(QApplication::translate("ClipEditor", "List only the entries containing the text you enter.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        PasteClip->setToolTip(QApplication::translate("ClipEditor", "Paste the selected entry into the active window.", 0));
#endif // QT_NO_TOOLTIP
        PasteClip->setText(QApplication::translate("ClipEditor", "Paste Clip", 0));
        AddEntry->setText(QApplication::translate("ClipEditor", "Add Entry", 0));
        AddGroup->setText(QApplication::translate("ClipEditor", "Add Group", 0));
#ifndef QT_NO_TOOLTIP
        MoveUp->setToolTip(QApplication::translate("ClipEditor", "Move an entry up one entry in the same group.", 0));
#endif // QT_NO_TOOLTIP
        MoveUp->setText(QApplication::translate("ClipEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        MoveLeft->setToolTip(QApplication::translate("ClipEditor", "Move an entry to the level of its parent.", 0));
#endif // QT_NO_TOOLTIP
        MoveLeft->setText(QApplication::translate("ClipEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        MoveRight->setToolTip(QApplication::translate("ClipEditor", "You must select an item immediately under a group to move it into the group.", 0));
#endif // QT_NO_TOOLTIP
        MoveRight->setText(QApplication::translate("ClipEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        MoveDown->setToolTip(QApplication::translate("ClipEditor", "Move an entry down one in the group.", 0));
#endif // QT_NO_TOOLTIP
        MoveDown->setText(QApplication::translate("ClipEditor", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class ClipEditor: public Ui_ClipEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIPEDITOR_H
