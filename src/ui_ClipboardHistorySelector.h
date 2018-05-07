/********************************************************************************
** Form generated from reading UI file 'ClipboardHistorySelector.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIPBOARDHISTORYSELECTOR_H
#define UI_CLIPBOARDHISTORYSELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClipboardHistorySelector
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *recentLabel;
    QTableWidget *clipboardItemsTable;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ClipboardHistorySelector)
    {
        if (ClipboardHistorySelector->objectName().isEmpty())
            ClipboardHistorySelector->setObjectName(QStringLiteral("ClipboardHistorySelector"));
        ClipboardHistorySelector->resize(300, 453);
        verticalLayout_2 = new QVBoxLayout(ClipboardHistorySelector);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        recentLabel = new QLabel(ClipboardHistorySelector);
        recentLabel->setObjectName(QStringLiteral("recentLabel"));

        verticalLayout_2->addWidget(recentLabel);

        clipboardItemsTable = new QTableWidget(ClipboardHistorySelector);
        if (clipboardItemsTable->columnCount() < 2)
            clipboardItemsTable->setColumnCount(2);
        clipboardItemsTable->setObjectName(QStringLiteral("clipboardItemsTable"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(8);
        clipboardItemsTable->setFont(font);
        clipboardItemsTable->setSelectionMode(QAbstractItemView::SingleSelection);
        clipboardItemsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        clipboardItemsTable->setColumnCount(2);
        clipboardItemsTable->horizontalHeader()->setVisible(false);
        clipboardItemsTable->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(clipboardItemsTable);

        buttonBox = new QDialogButtonBox(ClipboardHistorySelector);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Abort|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(ClipboardHistorySelector);
        QObject::connect(buttonBox, SIGNAL(accepted()), ClipboardHistorySelector, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ClipboardHistorySelector, SLOT(reject()));

        QMetaObject::connectSlotsByName(ClipboardHistorySelector);
    } // setupUi

    void retranslateUi(QDialog *ClipboardHistorySelector)
    {
        ClipboardHistorySelector->setWindowTitle(QApplication::translate("ClipboardHistorySelector", "Select Text to Paste", 0));
        recentLabel->setText(QApplication::translate("ClipboardHistorySelector", "Recent clipboards:", 0));
#ifndef QT_NO_TOOLTIP
        buttonBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class ClipboardHistorySelector: public Ui_ClipboardHistorySelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIPBOARDHISTORYSELECTOR_H
