/********************************************************************************
** Form generated from reading UI file 'FindReplace.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDREPLACE_H
#define UI_FINDREPLACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Misc/PasteTargetComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_FindReplace
{
public:
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QToolButton *close;
    QSpacerItem *verticalSpacer;
    QToolButton *advancedShowHide;
    QGridLayout *gridLayout;
    QLabel *findl;
    PasteTargetComboBox *cbFind;
    QToolButton *findNext;
    QToolButton *replaceFind;
    QLabel *replacel;
    PasteTargetComboBox *cbReplace;
    QToolButton *replaceCurrent;
    QToolButton *replaceAll;
    QLabel *optionsl;
    QHBoxLayout *advancedLayout;
    QCheckBox *chkRegexOptionDotAll;
    QCheckBox *chkRegexOptionMinimalMatch;
    QCheckBox *chkRegexOptionAutoTokenise;
    QCheckBox *chkOptionWrap;
    QSpacerItem *horizontalSpacerAdvanced;
    QToolButton *count;
    QLabel *model;
    QHBoxLayout *modeLayout;
    QComboBox *cbSearchMode;
    QComboBox *cbLookWhere;
    QComboBox *MarkedTextIndicator;
    QComboBox *cbSearchDirection;
    QSpacerItem *horizontalSpacer;
    QLabel *message;

    void setupUi(QWidget *FindReplace)
    {
        if (FindReplace->objectName().isEmpty())
            FindReplace->setObjectName(QStringLiteral("FindReplace"));
        FindReplace->resize(566, 93);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FindReplace->sizePolicy().hasHeightForWidth());
        FindReplace->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(FindReplace);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        frame = new QFrame(FindReplace);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        close = new QToolButton(frame);
        close->setObjectName(QStringLiteral("close"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(close->sizePolicy().hasHeightForWidth());
        close->setSizePolicy(sizePolicy1);
        close->setStyleSheet(QStringLiteral("border: 0px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/main/widget-close-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon);
        close->setIconSize(QSize(24, 24));
        close->setAutoRaise(false);
        close->setArrowType(Qt::NoArrow);

        verticalLayout->addWidget(close);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        advancedShowHide = new QToolButton(frame);
        advancedShowHide->setObjectName(QStringLiteral("advancedShowHide"));
        sizePolicy1.setHeightForWidth(advancedShowHide->sizePolicy().hasHeightForWidth());
        advancedShowHide->setSizePolicy(sizePolicy1);
        advancedShowHide->setStyleSheet(QStringLiteral("border: 0px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/main/chevron-down_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        advancedShowHide->setIcon(icon1);
        advancedShowHide->setIconSize(QSize(24, 24));
        advancedShowHide->setAutoRaise(false);
        advancedShowHide->setArrowType(Qt::NoArrow);

        verticalLayout->addWidget(advancedShowHide);


        horizontalLayout_3->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 1, 3);
        findl = new QLabel(frame);
        findl->setObjectName(QStringLiteral("findl"));
        findl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(findl, 0, 0, 1, 1);

        cbFind = new PasteTargetComboBox(frame);
        cbFind->setObjectName(QStringLiteral("cbFind"));
        cbFind->setEditable(true);
        cbFind->setMaxCount(25);
        cbFind->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        cbFind->setDuplicatesEnabled(false);

        gridLayout->addWidget(cbFind, 0, 1, 1, 1);

        findNext = new QToolButton(frame);
        findNext->setObjectName(QStringLiteral("findNext"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(findNext->sizePolicy().hasHeightForWidth());
        findNext->setSizePolicy(sizePolicy2);
        findNext->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(findNext, 0, 2, 1, 1);

        replaceFind = new QToolButton(frame);
        replaceFind->setObjectName(QStringLiteral("replaceFind"));
        sizePolicy2.setHeightForWidth(replaceFind->sizePolicy().hasHeightForWidth());
        replaceFind->setSizePolicy(sizePolicy2);
        replaceFind->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(replaceFind, 0, 3, 1, 1);

        replacel = new QLabel(frame);
        replacel->setObjectName(QStringLiteral("replacel"));
        replacel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(replacel, 1, 0, 1, 1);

        cbReplace = new PasteTargetComboBox(frame);
        cbReplace->setObjectName(QStringLiteral("cbReplace"));
        cbReplace->setEditable(true);
        cbReplace->setMaxCount(25);
        cbReplace->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        cbReplace->setDuplicatesEnabled(false);

        gridLayout->addWidget(cbReplace, 1, 1, 1, 1);

        replaceCurrent = new QToolButton(frame);
        replaceCurrent->setObjectName(QStringLiteral("replaceCurrent"));
        sizePolicy2.setHeightForWidth(replaceCurrent->sizePolicy().hasHeightForWidth());
        replaceCurrent->setSizePolicy(sizePolicy2);
        replaceCurrent->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(replaceCurrent, 1, 2, 1, 1);

        replaceAll = new QToolButton(frame);
        replaceAll->setObjectName(QStringLiteral("replaceAll"));
        sizePolicy2.setHeightForWidth(replaceAll->sizePolicy().hasHeightForWidth());
        replaceAll->setSizePolicy(sizePolicy2);
        replaceAll->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(replaceAll, 1, 3, 1, 1);

        optionsl = new QLabel(frame);
        optionsl->setObjectName(QStringLiteral("optionsl"));
        optionsl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(optionsl, 2, 0, 1, 1);

        advancedLayout = new QHBoxLayout();
        advancedLayout->setObjectName(QStringLiteral("advancedLayout"));
        chkRegexOptionDotAll = new QCheckBox(frame);
        chkRegexOptionDotAll->setObjectName(QStringLiteral("chkRegexOptionDotAll"));
        chkRegexOptionDotAll->setStyleSheet(QStringLiteral(""));

        advancedLayout->addWidget(chkRegexOptionDotAll);

        chkRegexOptionMinimalMatch = new QCheckBox(frame);
        chkRegexOptionMinimalMatch->setObjectName(QStringLiteral("chkRegexOptionMinimalMatch"));
        chkRegexOptionMinimalMatch->setStyleSheet(QStringLiteral(""));

        advancedLayout->addWidget(chkRegexOptionMinimalMatch);

        chkRegexOptionAutoTokenise = new QCheckBox(frame);
        chkRegexOptionAutoTokenise->setObjectName(QStringLiteral("chkRegexOptionAutoTokenise"));
        chkRegexOptionAutoTokenise->setStyleSheet(QStringLiteral(""));

        advancedLayout->addWidget(chkRegexOptionAutoTokenise);

        chkOptionWrap = new QCheckBox(frame);
        chkOptionWrap->setObjectName(QStringLiteral("chkOptionWrap"));

        advancedLayout->addWidget(chkOptionWrap);

        horizontalSpacerAdvanced = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        advancedLayout->addItem(horizontalSpacerAdvanced);


        gridLayout->addLayout(advancedLayout, 2, 1, 1, 1);

        count = new QToolButton(frame);
        count->setObjectName(QStringLiteral("count"));
        sizePolicy2.setHeightForWidth(count->sizePolicy().hasHeightForWidth());
        count->setSizePolicy(sizePolicy2);
        count->setMinimumSize(QSize(0, 22));
        count->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(count, 2, 3, 1, 1);

        model = new QLabel(frame);
        model->setObjectName(QStringLiteral("model"));
        model->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(model, 3, 0, 1, 1);

        modeLayout = new QHBoxLayout();
        modeLayout->setObjectName(QStringLiteral("modeLayout"));
        cbSearchMode = new QComboBox(frame);
        cbSearchMode->setObjectName(QStringLiteral("cbSearchMode"));

        modeLayout->addWidget(cbSearchMode);

        cbLookWhere = new QComboBox(frame);
        cbLookWhere->setObjectName(QStringLiteral("cbLookWhere"));

        modeLayout->addWidget(cbLookWhere);

        MarkedTextIndicator = new QComboBox(frame);
        MarkedTextIndicator->setObjectName(QStringLiteral("MarkedTextIndicator"));

        modeLayout->addWidget(MarkedTextIndicator);

        cbSearchDirection = new QComboBox(frame);
        cbSearchDirection->setObjectName(QStringLiteral("cbSearchDirection"));

        modeLayout->addWidget(cbSearchDirection);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        modeLayout->addItem(horizontalSpacer);

        message = new QLabel(frame);
        message->setObjectName(QStringLiteral("message"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        message->setFont(font);

        modeLayout->addWidget(message);


        gridLayout->addLayout(modeLayout, 3, 1, 1, 4);

        gridLayout->setColumnStretch(1, 1);

        horizontalLayout_3->addLayout(gridLayout);


        horizontalLayout_2->addWidget(frame);

        QWidget::setTabOrder(cbFind, cbReplace);
        QWidget::setTabOrder(cbReplace, chkRegexOptionDotAll);
        QWidget::setTabOrder(chkRegexOptionDotAll, chkRegexOptionMinimalMatch);
        QWidget::setTabOrder(chkRegexOptionMinimalMatch, chkRegexOptionAutoTokenise);
        QWidget::setTabOrder(chkRegexOptionAutoTokenise, cbSearchMode);
        QWidget::setTabOrder(cbSearchMode, cbLookWhere);
        QWidget::setTabOrder(cbLookWhere, cbSearchDirection);
        QWidget::setTabOrder(cbSearchDirection, findNext);
        QWidget::setTabOrder(findNext, replaceFind);
        QWidget::setTabOrder(replaceFind, replaceCurrent);
        QWidget::setTabOrder(replaceCurrent, replaceAll);
        QWidget::setTabOrder(replaceAll, count);
        QWidget::setTabOrder(count, close);

        retranslateUi(FindReplace);

        QMetaObject::connectSlotsByName(FindReplace);
    } // setupUi

    void retranslateUi(QWidget *FindReplace)
    {
        FindReplace->setWindowTitle(QApplication::translate("FindReplace", "Find & Replace", 0));
#ifndef QT_NO_TOOLTIP
        close->setToolTip(QApplication::translate("FindReplace", "Hide Find and Replace", 0));
#endif // QT_NO_TOOLTIP
        close->setText(QApplication::translate("FindReplace", "...", 0));
#ifndef QT_NO_TOOLTIP
        advancedShowHide->setToolTip(QApplication::translate("FindReplace", "Show/Hide Advanced Options", 0));
#endif // QT_NO_TOOLTIP
        advancedShowHide->setText(QApplication::translate("FindReplace", "...", 0));
        findl->setText(QApplication::translate("FindReplace", "Find:", 0));
#ifndef QT_NO_TOOLTIP
        findNext->setToolTip(QApplication::translate("FindReplace", "Find next match.", 0));
#endif // QT_NO_TOOLTIP
        findNext->setText(QApplication::translate("FindReplace", "Find", 0));
#ifndef QT_NO_TOOLTIP
        replaceFind->setToolTip(QApplication::translate("FindReplace", "Replace highlighted match (if any),\n"
"then find the Next match in Code View.", 0));
#endif // QT_NO_TOOLTIP
        replaceFind->setText(QApplication::translate("FindReplace", "Replace/Find", 0));
        replacel->setText(QApplication::translate("FindReplace", "Replace:", 0));
#ifndef QT_NO_TOOLTIP
        replaceCurrent->setToolTip(QApplication::translate("FindReplace", "Replace highlighted match (if any) in Code View.", 0));
#endif // QT_NO_TOOLTIP
        replaceCurrent->setText(QApplication::translate("FindReplace", "Replace", 0));
#ifndef QT_NO_TOOLTIP
        replaceAll->setToolTip(QApplication::translate("FindReplace", "Replace all matches in Code View.", 0));
#endif // QT_NO_TOOLTIP
        replaceAll->setText(QApplication::translate("FindReplace", "Replace All", 0));
        optionsl->setText(QApplication::translate("FindReplace", "Options:", 0));
#ifndef QT_NO_TOOLTIP
        chkRegexOptionDotAll->setToolTip(QApplication::translate("FindReplace", "For Regex searches, prefix your search with (?s).", 0));
#endif // QT_NO_TOOLTIP
        chkRegexOptionDotAll->setText(QApplication::translate("FindReplace", "DotAll", 0));
#ifndef QT_NO_TOOLTIP
        chkRegexOptionMinimalMatch->setToolTip(QApplication::translate("FindReplace", "For Regex searches, prefix your search with (?U).", 0));
#endif // QT_NO_TOOLTIP
        chkRegexOptionMinimalMatch->setText(QApplication::translate("FindReplace", "Minimal Match", 0));
#ifndef QT_NO_TOOLTIP
        chkRegexOptionAutoTokenise->setToolTip(QApplication::translate("FindReplace", "For Regex searches, tokenise/escape selection when opening Find.", 0));
#endif // QT_NO_TOOLTIP
        chkRegexOptionAutoTokenise->setText(QApplication::translate("FindReplace", "Auto-Tokenise", 0));
#ifndef QT_NO_TOOLTIP
        chkOptionWrap->setToolTip(QApplication::translate("FindReplace", "Search from current position to end of the \n"
"current file or book, and then wrap to the\n"
"other end to continue searching.", 0));
#endif // QT_NO_TOOLTIP
        chkOptionWrap->setText(QApplication::translate("FindReplace", "Wrap", 0));
#ifndef QT_NO_TOOLTIP
        count->setToolTip(QApplication::translate("FindReplace", "Count all matches in Code View.", 0));
#endif // QT_NO_TOOLTIP
        count->setText(QApplication::translate("FindReplace", "Count All", 0));
        model->setText(QApplication::translate("FindReplace", "Mode:", 0));
        message->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FindReplace: public Ui_FindReplace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDREPLACE_H
