/********************************************************************************
** Form generated from reading UI file 'EditTOC.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTOC_H
#define UI_EDITTOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditTOC
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTreeView *TOCTree;
    QVBoxLayout *verticalLayout_2;
    QPushButton *AddEntryAbove;
    QPushButton *AddEntryBelow;
    QPushButton *DeleteEntry;
    QPushButton *SelectTarget;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *MoveLeft;
    QVBoxLayout *verticalLayout_3;
    QToolButton *MoveUp;
    QToolButton *MoveDown;
    QToolButton *MoveRight;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditTOC)
    {
        if (EditTOC->objectName().isEmpty())
            EditTOC->setObjectName(QStringLiteral("EditTOC"));
        EditTOC->resize(611, 445);
        verticalLayout = new QVBoxLayout(EditTOC);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        TOCTree = new QTreeView(EditTOC);
        TOCTree->setObjectName(QStringLiteral("TOCTree"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(TOCTree->sizePolicy().hasHeightForWidth());
        TOCTree->setSizePolicy(sizePolicy);
        TOCTree->setTabKeyNavigation(false);
        TOCTree->setProperty("showDropIndicator", QVariant(false));
        TOCTree->setDragEnabled(false);
        TOCTree->setAlternatingRowColors(true);
        TOCTree->setIndentation(15);
        TOCTree->setUniformRowHeights(true);

        horizontalLayout->addWidget(TOCTree);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        AddEntryAbove = new QPushButton(EditTOC);
        AddEntryAbove->setObjectName(QStringLiteral("AddEntryAbove"));

        verticalLayout_2->addWidget(AddEntryAbove);

        AddEntryBelow = new QPushButton(EditTOC);
        AddEntryBelow->setObjectName(QStringLiteral("AddEntryBelow"));

        verticalLayout_2->addWidget(AddEntryBelow);

        DeleteEntry = new QPushButton(EditTOC);
        DeleteEntry->setObjectName(QStringLiteral("DeleteEntry"));

        verticalLayout_2->addWidget(DeleteEntry);

        SelectTarget = new QPushButton(EditTOC);
        SelectTarget->setObjectName(QStringLiteral("SelectTarget"));

        verticalLayout_2->addWidget(SelectTarget);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        MoveLeft = new QToolButton(EditTOC);
        MoveLeft->setObjectName(QStringLiteral("MoveLeft"));
        MoveLeft->setArrowType(Qt::LeftArrow);

        horizontalLayout_2->addWidget(MoveLeft);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        MoveUp = new QToolButton(EditTOC);
        MoveUp->setObjectName(QStringLiteral("MoveUp"));
        MoveUp->setArrowType(Qt::UpArrow);

        verticalLayout_3->addWidget(MoveUp);

        MoveDown = new QToolButton(EditTOC);
        MoveDown->setObjectName(QStringLiteral("MoveDown"));
        MoveDown->setArrowType(Qt::DownArrow);

        verticalLayout_3->addWidget(MoveDown);


        horizontalLayout_2->addLayout(verticalLayout_3);

        MoveRight = new QToolButton(EditTOC);
        MoveRight->setObjectName(QStringLiteral("MoveRight"));
        MoveRight->setArrowType(Qt::RightArrow);

        horizontalLayout_2->addWidget(MoveRight);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(EditTOC);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EditTOC);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditTOC, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditTOC, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditTOC);
    } // setupUi

    void retranslateUi(QDialog *EditTOC)
    {
        EditTOC->setWindowTitle(QApplication::translate("EditTOC", "Edit Table Of Contents", 0));
#ifndef QT_NO_TOOLTIP
        AddEntryAbove->setToolTip(QApplication::translate("EditTOC", "Insert a blank entry above the currently selected entry.", 0));
#endif // QT_NO_TOOLTIP
        AddEntryAbove->setText(QApplication::translate("EditTOC", "Add Above", 0));
#ifndef QT_NO_TOOLTIP
        AddEntryBelow->setToolTip(QApplication::translate("EditTOC", "Add a blank entry below the currently selected entry.", 0));
#endif // QT_NO_TOOLTIP
        AddEntryBelow->setText(QApplication::translate("EditTOC", "Add Below", 0));
#ifndef QT_NO_TOOLTIP
        DeleteEntry->setToolTip(QApplication::translate("EditTOC", "Delete the selected TOC entry", 0));
#endif // QT_NO_TOOLTIP
        DeleteEntry->setText(QApplication::translate("EditTOC", "Delete", 0));
#ifndef QT_NO_TOOLTIP
        SelectTarget->setToolTip(QApplication::translate("EditTOC", "Set the destination of the TOC entry from a list of valid targets in the book.", 0));
#endif // QT_NO_TOOLTIP
        SelectTarget->setText(QApplication::translate("EditTOC", "Select Target", 0));
#ifndef QT_NO_TOOLTIP
        MoveLeft->setToolTip(QApplication::translate("EditTOC", "Decrease the heading level of the selected entry.\n"
"You can also use the left arrow key.", 0));
#endif // QT_NO_TOOLTIP
        MoveLeft->setText(QString());
        MoveUp->setText(QApplication::translate("EditTOC", "...", 0));
        MoveDown->setText(QApplication::translate("EditTOC", "...", 0));
#ifndef QT_NO_TOOLTIP
        MoveRight->setToolTip(QApplication::translate("EditTOC", "Increase the heading level of the selected entry.\n"
"You can also use the right arrow key.", 0));
#endif // QT_NO_TOOLTIP
        MoveRight->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EditTOC: public Ui_EditTOC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTOC_H
