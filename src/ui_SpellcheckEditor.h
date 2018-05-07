/********************************************************************************
** Form generated from reading UI file 'SpellcheckEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPELLCHECKEDITOR_H
#define UI_SPELLCHECKEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SpellcheckEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *FilterText;
    QHBoxLayout *horizontalLayout_2;
    QTreeView *SpellcheckEditorTree;
    QVBoxLayout *verticalLayout;
    QPushButton *Ignore;
    QSpacerItem *verticalSpacer_2;
    QPushButton *Add;
    QComboBox *Dictionaries;
    QSpacerItem *verticalSpacer_3;
    QPushButton *ChangeAll;
    QComboBox *cbChangeAll;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QCheckBox *ShowAllWords;
    QCheckBox *CaseInsensitiveSort;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Refresh;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SpellcheckEditor)
    {
        if (SpellcheckEditor->objectName().isEmpty())
            SpellcheckEditor->setObjectName(QStringLiteral("SpellcheckEditor"));
        SpellcheckEditor->resize(600, 600);
        verticalLayout_2 = new QVBoxLayout(SpellcheckEditor);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(SpellcheckEditor);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        FilterText = new QLineEdit(SpellcheckEditor);
        FilterText->setObjectName(QStringLiteral("FilterText"));

        horizontalLayout_5->addWidget(FilterText);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        SpellcheckEditorTree = new QTreeView(SpellcheckEditor);
        SpellcheckEditorTree->setObjectName(QStringLiteral("SpellcheckEditorTree"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(SpellcheckEditorTree->sizePolicy().hasHeightForWidth());
        SpellcheckEditorTree->setSizePolicy(sizePolicy);
        SpellcheckEditorTree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        SpellcheckEditorTree->setUniformRowHeights(true);

        horizontalLayout_2->addWidget(SpellcheckEditorTree);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Ignore = new QPushButton(SpellcheckEditor);
        Ignore->setObjectName(QStringLiteral("Ignore"));

        verticalLayout->addWidget(Ignore);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        Add = new QPushButton(SpellcheckEditor);
        Add->setObjectName(QStringLiteral("Add"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(Add);

        Dictionaries = new QComboBox(SpellcheckEditor);
        Dictionaries->setObjectName(QStringLiteral("Dictionaries"));
        sizePolicy1.setHeightForWidth(Dictionaries->sizePolicy().hasHeightForWidth());
        Dictionaries->setSizePolicy(sizePolicy1);
        Dictionaries->setMaximumSize(QSize(150, 16777215));

        verticalLayout->addWidget(Dictionaries);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        ChangeAll = new QPushButton(SpellcheckEditor);
        ChangeAll->setObjectName(QStringLiteral("ChangeAll"));

        verticalLayout->addWidget(ChangeAll);

        cbChangeAll = new QComboBox(SpellcheckEditor);
        cbChangeAll->setObjectName(QStringLiteral("cbChangeAll"));
        cbChangeAll->setEditable(true);
        cbChangeAll->setMaxCount(25);
        cbChangeAll->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        cbChangeAll->setDuplicatesEnabled(false);

        verticalLayout->addWidget(cbChangeAll);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ShowAllWords = new QCheckBox(SpellcheckEditor);
        ShowAllWords->setObjectName(QStringLiteral("ShowAllWords"));

        horizontalLayout->addWidget(ShowAllWords);

        CaseInsensitiveSort = new QCheckBox(SpellcheckEditor);
        CaseInsensitiveSort->setObjectName(QStringLiteral("CaseInsensitiveSort"));

        horizontalLayout->addWidget(CaseInsensitiveSort);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Refresh = new QPushButton(SpellcheckEditor);
        Refresh->setObjectName(QStringLiteral("Refresh"));

        horizontalLayout_4->addWidget(Refresh);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        buttonBox = new QDialogButtonBox(SpellcheckEditor);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(SpellcheckEditor);
        QObject::connect(buttonBox, SIGNAL(accepted()), SpellcheckEditor, SLOT(accept()));

        QMetaObject::connectSlotsByName(SpellcheckEditor);
    } // setupUi

    void retranslateUi(QDialog *SpellcheckEditor)
    {
        SpellcheckEditor->setWindowTitle(QApplication::translate("SpellcheckEditor", "Spellcheck", 0));
        label->setText(QApplication::translate("SpellcheckEditor", "Filter:", 0));
#ifndef QT_NO_TOOLTIP
        FilterText->setToolTip(QApplication::translate("SpellcheckEditor", "List only the entries containing the text you enter.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Ignore->setToolTip(QApplication::translate("SpellcheckEditor", "Ignore the selected words until Sigil\n"
"is restarted or a new book is opened.", 0));
#endif // QT_NO_TOOLTIP
        Ignore->setText(QApplication::translate("SpellcheckEditor", "Ignore", 0));
#ifndef QT_NO_TOOLTIP
        Add->setToolTip(QApplication::translate("SpellcheckEditor", "Add the selected words to the\n"
"dictionary selected below.", 0));
#endif // QT_NO_TOOLTIP
        Add->setText(QApplication::translate("SpellcheckEditor", "Add To Dictionary:", 0));
#ifndef QT_NO_TOOLTIP
        ChangeAll->setToolTip(QApplication::translate("SpellcheckEditor", "Change all occurrences of the selected word  in\n"
"HTML files to the word you select or type below.\n"
"The selected word does not have to be misspelled.", 0));
#endif // QT_NO_TOOLTIP
        ChangeAll->setText(QApplication::translate("SpellcheckEditor", "Change Selected Word To:", 0));
        ShowAllWords->setText(QApplication::translate("SpellcheckEditor", "Show All Words", 0));
#ifndef QT_NO_TOOLTIP
        CaseInsensitiveSort->setToolTip(QApplication::translate("SpellcheckEditor", "Sort words as AaBbCc instead of ABCabc.", 0));
#endif // QT_NO_TOOLTIP
        CaseInsensitiveSort->setText(QApplication::translate("SpellcheckEditor", "Case-Insensitive Sort", 0));
#ifndef QT_NO_TOOLTIP
        Refresh->setToolTip(QApplication::translate("SpellcheckEditor", "Re-check the HTML files for misspelled words.\n"
"Use if you edit any HTML files while Spellcheck is open.", 0));
#endif // QT_NO_TOOLTIP
        Refresh->setText(QApplication::translate("SpellcheckEditor", "Refresh", 0));
#ifndef QT_NO_TOOLTIP
        buttonBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class SpellcheckEditor: public Ui_SpellcheckEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPELLCHECKEDITOR_H
