/********************************************************************************
** Form generated from reading UI file 'HeadingSelector.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEADINGSELECTOR_H
#define UI_HEADINGSELECTOR_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HeadingSelector
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTreeView *tvTOCDisplay;
    QVBoxLayout *verticalLayout_2;
    QPushButton *rename;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *left;
    QToolButton *right;
    QSpacerItem *verticalSpacer;
    QCheckBox *cbTOCItemsOnly;
    QComboBox *cbTOCSetHeadingLevel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HeadingSelector)
    {
        if (HeadingSelector->objectName().isEmpty())
            HeadingSelector->setObjectName(QStringLiteral("HeadingSelector"));
        HeadingSelector->resize(611, 445);
        verticalLayout = new QVBoxLayout(HeadingSelector);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tvTOCDisplay = new QTreeView(HeadingSelector);
        tvTOCDisplay->setObjectName(QStringLiteral("tvTOCDisplay"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(tvTOCDisplay->sizePolicy().hasHeightForWidth());
        tvTOCDisplay->setSizePolicy(sizePolicy);
        tvTOCDisplay->setTabKeyNavigation(false);
        tvTOCDisplay->setProperty("showDropIndicator", QVariant(false));
        tvTOCDisplay->setDragEnabled(false);
        tvTOCDisplay->setAlternatingRowColors(true);
        tvTOCDisplay->setIndentation(15);
        tvTOCDisplay->setUniformRowHeights(true);

        horizontalLayout->addWidget(tvTOCDisplay);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        rename = new QPushButton(HeadingSelector);
        rename->setObjectName(QStringLiteral("rename"));

        verticalLayout_2->addWidget(rename);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        left = new QToolButton(HeadingSelector);
        left->setObjectName(QStringLiteral("left"));
        left->setArrowType(Qt::LeftArrow);

        horizontalLayout_2->addWidget(left);

        right = new QToolButton(HeadingSelector);
        right->setObjectName(QStringLiteral("right"));
        right->setArrowType(Qt::RightArrow);

        horizontalLayout_2->addWidget(right);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        cbTOCItemsOnly = new QCheckBox(HeadingSelector);
        cbTOCItemsOnly->setObjectName(QStringLiteral("cbTOCItemsOnly"));
        cbTOCItemsOnly->setChecked(true);

        verticalLayout->addWidget(cbTOCItemsOnly);

        cbTOCSetHeadingLevel = new QComboBox(HeadingSelector);
        cbTOCSetHeadingLevel->setObjectName(QStringLiteral("cbTOCSetHeadingLevel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cbTOCSetHeadingLevel->sizePolicy().hasHeightForWidth());
        cbTOCSetHeadingLevel->setSizePolicy(sizePolicy1);
        cbTOCSetHeadingLevel->setFocusPolicy(Qt::ClickFocus);
        cbTOCSetHeadingLevel->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        verticalLayout->addWidget(cbTOCSetHeadingLevel);

        buttonBox = new QDialogButtonBox(HeadingSelector);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(HeadingSelector);
        QObject::connect(buttonBox, SIGNAL(accepted()), HeadingSelector, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HeadingSelector, SLOT(reject()));

        QMetaObject::connectSlotsByName(HeadingSelector);
    } // setupUi

    void retranslateUi(QDialog *HeadingSelector)
    {
        HeadingSelector->setWindowTitle(QApplication::translate("HeadingSelector", "Generate Table Of Contents", 0));
#ifndef QT_NO_TOOLTIP
        rename->setToolTip(QApplication::translate("HeadingSelector", "Change the name of the entry in the TOC.\n"
"The heading's title attribute will be updated in the document.", 0));
#endif // QT_NO_TOOLTIP
        rename->setText(QApplication::translate("HeadingSelector", "Rename", 0));
#ifndef QT_NO_TOOLTIP
        left->setToolTip(QApplication::translate("HeadingSelector", "Decrease the heading level of the selected entry by 1.\n"
"The heading's tag will be updated in the document.\n"
"You can also use the left arrow key.", 0));
#endif // QT_NO_TOOLTIP
        left->setText(QString());
#ifndef QT_NO_TOOLTIP
        right->setToolTip(QApplication::translate("HeadingSelector", "Increase the heading level of the selected entry by 1.\n"
"The heading's tag will be updated in the document.\n"
"You can also use the right arrow key.", 0));
#endif // QT_NO_TOOLTIP
        right->setText(QString());
#ifndef QT_NO_TOOLTIP
        cbTOCItemsOnly->setToolTip(QApplication::translate("HeadingSelector", "Only display the items that will be added to the Table Of Contents.\n"
"Check or uncheck an entry to determine if it will be added to the TOC.", 0));
#endif // QT_NO_TOOLTIP
        cbTOCItemsOnly->setText(QApplication::translate("HeadingSelector", "Show TOC items only", 0));
#ifndef QT_NO_TOOLTIP
        cbTOCSetHeadingLevel->setToolTip(QApplication::translate("HeadingSelector", "Quickly mark which headings are included in the TOC.\n"
"You can then check or uncheck individual headings in the list above.", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class HeadingSelector: public Ui_HeadingSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEADINGSELECTOR_H
