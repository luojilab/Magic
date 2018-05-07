/********************************************************************************
** Form generated from reading UI file 'IndexEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDEXEDITOR_H
#define UI_INDEXEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "MiscEditors/IndexEditorTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_IndexEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *FilterText;
    QHBoxLayout *horizontalLayout_2;
    IndexEditorTreeView *IndexEditorTree;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QPushButton *AddEntry;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *IndexEditor)
    {
        if (IndexEditor->objectName().isEmpty())
            IndexEditor->setObjectName(QStringLiteral("IndexEditor"));
        IndexEditor->resize(800, 440);
        verticalLayout_2 = new QVBoxLayout(IndexEditor);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(IndexEditor);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        FilterText = new QLineEdit(IndexEditor);
        FilterText->setObjectName(QStringLiteral("FilterText"));

        horizontalLayout_5->addWidget(FilterText);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        IndexEditorTree = new IndexEditorTreeView(IndexEditor);
        IndexEditorTree->setObjectName(QStringLiteral("IndexEditorTree"));
        IndexEditorTree->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        IndexEditorTree->setUniformRowHeights(true);

        horizontalLayout_2->addWidget(IndexEditorTree);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));

        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        AddEntry = new QPushButton(IndexEditor);
        AddEntry->setObjectName(QStringLiteral("AddEntry"));

        verticalLayout->addWidget(AddEntry);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        buttonBox = new QDialogButtonBox(IndexEditor);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        horizontalLayout_3->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(IndexEditor);

        QMetaObject::connectSlotsByName(IndexEditor);
    } // setupUi

    void retranslateUi(QDialog *IndexEditor)
    {
        IndexEditor->setWindowTitle(QApplication::translate("IndexEditor", "Index Editor", 0));
        label->setText(QApplication::translate("IndexEditor", "Filter:", 0));
#ifndef QT_NO_TOOLTIP
        FilterText->setToolTip(QApplication::translate("IndexEditor", "List only the entries containing the text you enter.", 0));
#endif // QT_NO_TOOLTIP
        AddEntry->setText(QApplication::translate("IndexEditor", "Add Entry", 0));
#ifndef QT_NO_TOOLTIP
        buttonBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class IndexEditor: public Ui_IndexEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDEXEDITOR_H
