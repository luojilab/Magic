/********************************************************************************
** Form generated from reading UI file 'PSpellCheckWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PSPELLCHECKWIDGET_H
#define UI_PSPELLCHECKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpellCheckWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *dict_label;
    QComboBox *dictionaries;
    QSpacerItem *horizontalSpacer;
    QCheckBox *HighlightMisspelled;
    QCheckBox *CheckNumbers;
    QSpacerItem *verticalSpacer_4;
    QFrame *line;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *addUserDict;
    QPushButton *renameUserDict;
    QPushButton *copyUserDict;
    QPushButton *removeUserDict;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QTableView *userDictList;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QListWidget *userWordList;
    QVBoxLayout *verticalLayout;
    QPushButton *addUserWords;
    QPushButton *editWord;
    QPushButton *removeWord;
    QPushButton *removeAll;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLabel *defaultUserDictionary;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *SpellCheckWidget)
    {
        if (SpellCheckWidget->objectName().isEmpty())
            SpellCheckWidget->setObjectName(QStringLiteral("SpellCheckWidget"));
        SpellCheckWidget->resize(574, 367);
        verticalLayout_2 = new QVBoxLayout(SpellCheckWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        dict_label = new QLabel(SpellCheckWidget);
        dict_label->setObjectName(QStringLiteral("dict_label"));

        horizontalLayout_5->addWidget(dict_label);

        dictionaries = new QComboBox(SpellCheckWidget);
        dictionaries->setObjectName(QStringLiteral("dictionaries"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dictionaries->sizePolicy().hasHeightForWidth());
        dictionaries->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(dictionaries);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        HighlightMisspelled = new QCheckBox(SpellCheckWidget);
        HighlightMisspelled->setObjectName(QStringLiteral("HighlightMisspelled"));

        horizontalLayout_5->addWidget(HighlightMisspelled);

        CheckNumbers = new QCheckBox(SpellCheckWidget);
        CheckNumbers->setObjectName(QStringLiteral("CheckNumbers"));

        horizontalLayout_5->addWidget(CheckNumbers);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer_4);

        line = new QFrame(SpellCheckWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox_2 = new QGroupBox(SpellCheckWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        addUserDict = new QPushButton(groupBox_2);
        addUserDict->setObjectName(QStringLiteral("addUserDict"));

        verticalLayout_3->addWidget(addUserDict);

        renameUserDict = new QPushButton(groupBox_2);
        renameUserDict->setObjectName(QStringLiteral("renameUserDict"));

        verticalLayout_3->addWidget(renameUserDict);

        copyUserDict = new QPushButton(groupBox_2);
        copyUserDict->setObjectName(QStringLiteral("copyUserDict"));

        verticalLayout_3->addWidget(copyUserDict);

        removeUserDict = new QPushButton(groupBox_2);
        removeUserDict->setObjectName(QStringLiteral("removeUserDict"));

        verticalLayout_3->addWidget(removeUserDict);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_4->addLayout(verticalLayout_3);

        userDictList = new QTableView(groupBox_2);
        userDictList->setObjectName(QStringLiteral("userDictList"));

        horizontalLayout_4->addWidget(userDictList);


        horizontalLayout_3->addWidget(groupBox_2);

        groupBox = new QGroupBox(SpellCheckWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        userWordList = new QListWidget(groupBox);
        userWordList->setObjectName(QStringLiteral("userWordList"));
        userWordList->setSelectionMode(QAbstractItemView::ExtendedSelection);

        horizontalLayout->addWidget(userWordList);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        addUserWords = new QPushButton(groupBox);
        addUserWords->setObjectName(QStringLiteral("addUserWords"));

        verticalLayout->addWidget(addUserWords);

        editWord = new QPushButton(groupBox);
        editWord->setObjectName(QStringLiteral("editWord"));

        verticalLayout->addWidget(editWord);

        removeWord = new QPushButton(groupBox);
        removeWord->setObjectName(QStringLiteral("removeWord"));

        verticalLayout->addWidget(removeWord);

        removeAll = new QPushButton(groupBox);
        removeAll->setObjectName(QStringLiteral("removeAll"));

        verticalLayout->addWidget(removeAll);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_3->addWidget(groupBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(SpellCheckWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        defaultUserDictionary = new QLabel(SpellCheckWidget);
        defaultUserDictionary->setObjectName(QStringLiteral("defaultUserDictionary"));

        horizontalLayout_6->addWidget(defaultUserDictionary);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_6);


        retranslateUi(SpellCheckWidget);

        QMetaObject::connectSlotsByName(SpellCheckWidget);
    } // setupUi

    void retranslateUi(QWidget *SpellCheckWidget)
    {
        SpellCheckWidget->setWindowTitle(QApplication::translate("SpellCheckWidget", "Spellcheck Dictionaries", 0));
        dict_label->setText(QApplication::translate("SpellCheckWidget", "Dictionary:", 0));
#ifndef QT_NO_TOOLTIP
        HighlightMisspelled->setToolTip(QApplication::translate("SpellCheckWidget", "Highlight misspelled words in Code View.", 0));
#endif // QT_NO_TOOLTIP
        HighlightMisspelled->setText(QApplication::translate("SpellCheckWidget", "Highlight Misspelled Words", 0));
#ifndef QT_NO_TOOLTIP
        CheckNumbers->setToolTip(QApplication::translate("SpellCheckWidget", "Check words with numbers in them.", 0));
#endif // QT_NO_TOOLTIP
        CheckNumbers->setText(QApplication::translate("SpellCheckWidget", "Check Numbers", 0));
#ifndef QT_NO_TOOLTIP
        groupBox_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        groupBox_2->setTitle(QApplication::translate("SpellCheckWidget", "User Dictionaries", 0));
        addUserDict->setText(QApplication::translate("SpellCheckWidget", "Add", 0));
        renameUserDict->setText(QApplication::translate("SpellCheckWidget", "Rename", 0));
        copyUserDict->setText(QApplication::translate("SpellCheckWidget", "Copy", 0));
        removeUserDict->setText(QApplication::translate("SpellCheckWidget", "Remove", 0));
#ifndef QT_NO_TOOLTIP
        removeUserDict->setToolTip(QApplication::translate("SpellCheckWidget", "Remove the selected dictionary.\n"
"\n"
"You cannot remove the last dictionary.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        userDictList->setToolTip(QApplication::translate("SpellCheckWidget", "Mark which dictionaries are enabled for\n"
"spell checking.\n"
"\n"
"Select a dictionary to display its words,\n"
"and to make it the default dictionary.", 0));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("SpellCheckWidget", "User Dictionary Word List", 0));
#ifndef QT_NO_TOOLTIP
        addUserWords->setToolTip(QApplication::translate("SpellCheckWidget", "Enter or paste words to add to the dictionary.\n"
"Words can be separated by lines, commas, or spaces.", 0));
#endif // QT_NO_TOOLTIP
        addUserWords->setText(QApplication::translate("SpellCheckWidget", "Add", 0));
        editWord->setText(QApplication::translate("SpellCheckWidget", "Edit", 0));
        removeWord->setText(QApplication::translate("SpellCheckWidget", "Remove", 0));
        removeAll->setText(QApplication::translate("SpellCheckWidget", "Remove All", 0));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("SpellCheckWidget", "The default dictionary is used when you add words to the\n"
"default dictionary or use the shortcuts for Add Misspelled Words.", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("SpellCheckWidget", "Default Dictionary:", 0));
        defaultUserDictionary->setText(QApplication::translate("SpellCheckWidget", "none", 0));
    } // retranslateUi

};

namespace Ui {
    class SpellCheckWidget: public Ui_SpellCheckWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PSPELLCHECKWIDGET_H
