/********************************************************************************
** Form generated from reading UI file 'PAppearanceWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAPPEARANCEWIDGET_H
#define UI_PAPPEARANCEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppearanceWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabAppearance;
    QWidget *fontsTab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBoxBookView;
    QVBoxLayout *verticalLayoutBV;
    QLabel *labelWarning;
    QHBoxLayout *horizontalLayoutBV;
    QGridLayout *gridLayoutBV;
    QLabel *labelBookViewFontSize;
    QSpacerItem *horizontalSpacerBV;
    QSpinBox *bookViewFontSizeSpin;
    QLabel *labelBookViewFontStandard;
    QFontComboBox *cbBookViewFontStandard;
    QLabel *labelBookViewFontSerif;
    QFontComboBox *cbBookViewFontSerif;
    QLabel *labelBookViewFontSansSerif;
    QFontComboBox *cbBookViewFontSansSerif;
    QSpacerItem *horizontalSpacerBV2;
    QSpacerItem *verticalSpacerViews;
    QGroupBox *groupBoxCodeView;
    QVBoxLayout *verticalLayoutCV;
    QHBoxLayout *horizontalLayoutCV;
    QGridLayout *gridLayoutCV;
    QLabel *labelColors;
    QLabel *labelCodeViewFontSize;
    QSpacerItem *horizontalSpacerCSS;
    QSpinBox *codeViewFontSizeSpin;
    QLabel *labelCodeViewFont;
    QFontComboBox *cbCodeViewFont;
    QListWidget *codeViewColorsList;
    QPushButton *customColorButton;
    QSpacerItem *verticalSpacerSC;
    QGroupBox *groupBoxSpecialCharacter;
    QHBoxLayout *horizontalLayoutSC;
    QGridLayout *gridLayoutSC;
    QLabel *labelSpecialCharacterFontSize;
    QSpacerItem *horizontalSpacerSC;
    QSpinBox *specialCharacterFontSizeSpin;
    QLabel *labelSpecialCharacterFont;
    QFontComboBox *cbSpecialCharacterFont;
    QSpacerItem *horizontalSpacerSC2;
    QSpacerItem *verticalSpacer;
    QWidget *menusTab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxIconSize;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelIconSize;
    QSlider *iconSizeSlider;
    QSpacerItem *verticalSpacerTab;
    QSpacerItem *verticalSpacerReset;
    QHBoxLayout *horizontalLayoutReset;
    QPushButton *resetAllButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *AppearanceWidget)
    {
        if (AppearanceWidget->objectName().isEmpty())
            AppearanceWidget->setObjectName(QStringLiteral("AppearanceWidget"));
        AppearanceWidget->resize(425, 512);
        verticalLayout = new QVBoxLayout(AppearanceWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabAppearance = new QTabWidget(AppearanceWidget);
        tabAppearance->setObjectName(QStringLiteral("tabAppearance"));
        fontsTab = new QWidget();
        fontsTab->setObjectName(QStringLiteral("fontsTab"));
        verticalLayout_2 = new QVBoxLayout(fontsTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBoxBookView = new QGroupBox(fontsTab);
        groupBoxBookView->setObjectName(QStringLiteral("groupBoxBookView"));
        verticalLayoutBV = new QVBoxLayout(groupBoxBookView);
        verticalLayoutBV->setObjectName(QStringLiteral("verticalLayoutBV"));
        labelWarning = new QLabel(groupBoxBookView);
        labelWarning->setObjectName(QStringLiteral("labelWarning"));
        labelWarning->setWordWrap(true);

        verticalLayoutBV->addWidget(labelWarning);

        horizontalLayoutBV = new QHBoxLayout();
        horizontalLayoutBV->setObjectName(QStringLiteral("horizontalLayoutBV"));
        gridLayoutBV = new QGridLayout();
        gridLayoutBV->setObjectName(QStringLiteral("gridLayoutBV"));
        labelBookViewFontSize = new QLabel(groupBoxBookView);
        labelBookViewFontSize->setObjectName(QStringLiteral("labelBookViewFontSize"));
        labelBookViewFontSize->setMinimumSize(QSize(80, 0));

        gridLayoutBV->addWidget(labelBookViewFontSize, 0, 0, 1, 1);

        horizontalSpacerBV = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayoutBV->addItem(horizontalSpacerBV, 0, 3, 1, 1);

        bookViewFontSizeSpin = new QSpinBox(groupBoxBookView);
        bookViewFontSizeSpin->setObjectName(QStringLiteral("bookViewFontSizeSpin"));
        bookViewFontSizeSpin->setMinimum(6);
        bookViewFontSizeSpin->setMaximum(99);

        gridLayoutBV->addWidget(bookViewFontSizeSpin, 0, 2, 1, 1);

        labelBookViewFontStandard = new QLabel(groupBoxBookView);
        labelBookViewFontStandard->setObjectName(QStringLiteral("labelBookViewFontStandard"));

        gridLayoutBV->addWidget(labelBookViewFontStandard, 1, 0, 1, 1);

        cbBookViewFontStandard = new QFontComboBox(groupBoxBookView);
        cbBookViewFontStandard->setObjectName(QStringLiteral("cbBookViewFontStandard"));

        gridLayoutBV->addWidget(cbBookViewFontStandard, 1, 2, 1, 2);

        labelBookViewFontSerif = new QLabel(groupBoxBookView);
        labelBookViewFontSerif->setObjectName(QStringLiteral("labelBookViewFontSerif"));

        gridLayoutBV->addWidget(labelBookViewFontSerif, 2, 0, 1, 1);

        cbBookViewFontSerif = new QFontComboBox(groupBoxBookView);
        cbBookViewFontSerif->setObjectName(QStringLiteral("cbBookViewFontSerif"));

        gridLayoutBV->addWidget(cbBookViewFontSerif, 2, 2, 1, 2);

        labelBookViewFontSansSerif = new QLabel(groupBoxBookView);
        labelBookViewFontSansSerif->setObjectName(QStringLiteral("labelBookViewFontSansSerif"));

        gridLayoutBV->addWidget(labelBookViewFontSansSerif, 3, 0, 1, 1);

        cbBookViewFontSansSerif = new QFontComboBox(groupBoxBookView);
        cbBookViewFontSansSerif->setObjectName(QStringLiteral("cbBookViewFontSansSerif"));

        gridLayoutBV->addWidget(cbBookViewFontSansSerif, 3, 2, 1, 2);


        horizontalLayoutBV->addLayout(gridLayoutBV);

        horizontalSpacerBV2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutBV->addItem(horizontalSpacerBV2);


        verticalLayoutBV->addLayout(horizontalLayoutBV);


        verticalLayout_2->addWidget(groupBoxBookView);

        verticalSpacerViews = new QSpacerItem(0, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacerViews);

        groupBoxCodeView = new QGroupBox(fontsTab);
        groupBoxCodeView->setObjectName(QStringLiteral("groupBoxCodeView"));
        verticalLayoutCV = new QVBoxLayout(groupBoxCodeView);
        verticalLayoutCV->setObjectName(QStringLiteral("verticalLayoutCV"));
        horizontalLayoutCV = new QHBoxLayout();
        horizontalLayoutCV->setObjectName(QStringLiteral("horizontalLayoutCV"));
        gridLayoutCV = new QGridLayout();
        gridLayoutCV->setObjectName(QStringLiteral("gridLayoutCV"));
        labelColors = new QLabel(groupBoxCodeView);
        labelColors->setObjectName(QStringLiteral("labelColors"));

        gridLayoutCV->addWidget(labelColors, 0, 3, 1, 1);

        labelCodeViewFontSize = new QLabel(groupBoxCodeView);
        labelCodeViewFontSize->setObjectName(QStringLiteral("labelCodeViewFontSize"));
        labelCodeViewFontSize->setMinimumSize(QSize(80, 0));

        gridLayoutCV->addWidget(labelCodeViewFontSize, 0, 0, 1, 1);

        horizontalSpacerCSS = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayoutCV->addItem(horizontalSpacerCSS, 0, 2, 1, 1);

        codeViewFontSizeSpin = new QSpinBox(groupBoxCodeView);
        codeViewFontSizeSpin->setObjectName(QStringLiteral("codeViewFontSizeSpin"));
        codeViewFontSizeSpin->setMinimum(6);

        gridLayoutCV->addWidget(codeViewFontSizeSpin, 0, 1, 1, 1);

        labelCodeViewFont = new QLabel(groupBoxCodeView);
        labelCodeViewFont->setObjectName(QStringLiteral("labelCodeViewFont"));

        gridLayoutCV->addWidget(labelCodeViewFont, 1, 0, 1, 1);

        cbCodeViewFont = new QFontComboBox(groupBoxCodeView);
        cbCodeViewFont->setObjectName(QStringLiteral("cbCodeViewFont"));
        cbCodeViewFont->setFontFilters(QFontComboBox::MonospacedFonts);

        gridLayoutCV->addWidget(cbCodeViewFont, 1, 1, 1, 2);

        codeViewColorsList = new QListWidget(groupBoxCodeView);
        codeViewColorsList->setObjectName(QStringLiteral("codeViewColorsList"));
        codeViewColorsList->setMaximumSize(QSize(220, 90));

        gridLayoutCV->addWidget(codeViewColorsList, 1, 3, 2, 2);

        customColorButton = new QPushButton(groupBoxCodeView);
        customColorButton->setObjectName(QStringLiteral("customColorButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(customColorButton->sizePolicy().hasHeightForWidth());
        customColorButton->setSizePolicy(sizePolicy);
        customColorButton->setMinimumSize(QSize(90, 0));

        gridLayoutCV->addWidget(customColorButton, 0, 4, 1, 1);


        horizontalLayoutCV->addLayout(gridLayoutCV);


        verticalLayoutCV->addLayout(horizontalLayoutCV);


        verticalLayout_2->addWidget(groupBoxCodeView);

        verticalSpacerSC = new QSpacerItem(0, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacerSC);

        groupBoxSpecialCharacter = new QGroupBox(fontsTab);
        groupBoxSpecialCharacter->setObjectName(QStringLiteral("groupBoxSpecialCharacter"));
        horizontalLayoutSC = new QHBoxLayout(groupBoxSpecialCharacter);
        horizontalLayoutSC->setObjectName(QStringLiteral("horizontalLayoutSC"));
        gridLayoutSC = new QGridLayout();
        gridLayoutSC->setObjectName(QStringLiteral("gridLayoutSC"));
        labelSpecialCharacterFontSize = new QLabel(groupBoxSpecialCharacter);
        labelSpecialCharacterFontSize->setObjectName(QStringLiteral("labelSpecialCharacterFontSize"));
        labelSpecialCharacterFontSize->setMinimumSize(QSize(80, 0));

        gridLayoutSC->addWidget(labelSpecialCharacterFontSize, 0, 0, 1, 1);

        horizontalSpacerSC = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayoutSC->addItem(horizontalSpacerSC, 0, 3, 1, 1);

        specialCharacterFontSizeSpin = new QSpinBox(groupBoxSpecialCharacter);
        specialCharacterFontSizeSpin->setObjectName(QStringLiteral("specialCharacterFontSizeSpin"));
        specialCharacterFontSizeSpin->setMinimum(6);
        specialCharacterFontSizeSpin->setMaximum(99);

        gridLayoutSC->addWidget(specialCharacterFontSizeSpin, 0, 2, 1, 1);

        labelSpecialCharacterFont = new QLabel(groupBoxSpecialCharacter);
        labelSpecialCharacterFont->setObjectName(QStringLiteral("labelSpecialCharacterFont"));

        gridLayoutSC->addWidget(labelSpecialCharacterFont, 1, 0, 1, 1);

        cbSpecialCharacterFont = new QFontComboBox(groupBoxSpecialCharacter);
        cbSpecialCharacterFont->setObjectName(QStringLiteral("cbSpecialCharacterFont"));

        gridLayoutSC->addWidget(cbSpecialCharacterFont, 1, 2, 1, 2);


        horizontalLayoutSC->addLayout(gridLayoutSC);

        horizontalSpacerSC2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutSC->addItem(horizontalSpacerSC2);


        verticalLayout_2->addWidget(groupBoxSpecialCharacter);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabAppearance->addTab(fontsTab, QString());
        menusTab = new QWidget();
        menusTab->setObjectName(QStringLiteral("menusTab"));
        verticalLayout_3 = new QVBoxLayout(menusTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBoxIconSize = new QGroupBox(menusTab);
        groupBoxIconSize->setObjectName(QStringLiteral("groupBoxIconSize"));
        verticalLayout_4 = new QVBoxLayout(groupBoxIconSize);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        labelIconSize = new QLabel(groupBoxIconSize);
        labelIconSize->setObjectName(QStringLiteral("labelIconSize"));
        labelIconSize->setWordWrap(true);

        verticalLayout_4->addWidget(labelIconSize);

        iconSizeSlider = new QSlider(groupBoxIconSize);
        iconSizeSlider->setObjectName(QStringLiteral("iconSizeSlider"));
        iconSizeSlider->setMinimum(10);
        iconSizeSlider->setMaximum(30);
        iconSizeSlider->setValue(18);
        iconSizeSlider->setSliderPosition(18);
        iconSizeSlider->setOrientation(Qt::Horizontal);
        iconSizeSlider->setTickPosition(QSlider::TicksBothSides);
        iconSizeSlider->setTickInterval(1);

        verticalLayout_4->addWidget(iconSizeSlider);


        verticalLayout_3->addWidget(groupBoxIconSize);

        verticalSpacerTab = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacerTab);

        tabAppearance->addTab(menusTab, QString());

        verticalLayout->addWidget(tabAppearance);

        verticalSpacerReset = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacerReset);

        horizontalLayoutReset = new QHBoxLayout();
        horizontalLayoutReset->setObjectName(QStringLiteral("horizontalLayoutReset"));
        resetAllButton = new QPushButton(AppearanceWidget);
        resetAllButton->setObjectName(QStringLiteral("resetAllButton"));
        sizePolicy.setHeightForWidth(resetAllButton->sizePolicy().hasHeightForWidth());
        resetAllButton->setSizePolicy(sizePolicy);

        horizontalLayoutReset->addWidget(resetAllButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutReset->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayoutReset);


        retranslateUi(AppearanceWidget);

        tabAppearance->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AppearanceWidget);
    } // setupUi

    void retranslateUi(QWidget *AppearanceWidget)
    {
        AppearanceWidget->setWindowTitle(QApplication::translate("AppearanceWidget", "Appearance", 0));
        groupBoxBookView->setTitle(QApplication::translate("AppearanceWidget", "Book View / Preview:", 0));
#ifndef QT_NO_TOOLTIP
        labelWarning->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        labelWarning->setText(QApplication::translate("AppearanceWidget", "If no font is specified in the CSS for your page, the following font will be used to display within Sigil. These fonts will not be used in your actual ebook.", 0));
#ifndef QT_NO_TOOLTIP
        labelBookViewFontSize->setToolTip(QApplication::translate("AppearanceWidget", "Default font size to be used for Book View and Preview\n"
"if no font-size specified in your CSS", 0));
#endif // QT_NO_TOOLTIP
        labelBookViewFontSize->setText(QApplication::translate("AppearanceWidget", "Font Size:", 0));
#ifndef QT_NO_TOOLTIP
        labelBookViewFontStandard->setToolTip(QApplication::translate("AppearanceWidget", "Default font family to be used for Book View and Preview\n"
"if no font-family specified in your CSS", 0));
#endif // QT_NO_TOOLTIP
        labelBookViewFontStandard->setText(QApplication::translate("AppearanceWidget", "Standard Font:", 0));
#ifndef QT_NO_TOOLTIP
        labelBookViewFontSerif->setToolTip(QApplication::translate("AppearanceWidget", "Default font family to be used for Book View and Preview\n"
"if a serif font-family specified in your CSS", 0));
#endif // QT_NO_TOOLTIP
        labelBookViewFontSerif->setText(QApplication::translate("AppearanceWidget", "Serif Font:", 0));
#ifndef QT_NO_TOOLTIP
        labelBookViewFontSansSerif->setToolTip(QApplication::translate("AppearanceWidget", "Default font family to be used for Book View and Preview\n"
"if a sans-serif font-family specified in your CSS", 0));
#endif // QT_NO_TOOLTIP
        labelBookViewFontSansSerif->setText(QApplication::translate("AppearanceWidget", "Sans-Serif Font:", 0));
        groupBoxCodeView->setTitle(QApplication::translate("AppearanceWidget", "CSS / Code View:", 0));
        labelColors->setText(QApplication::translate("AppearanceWidget", "Item Colors:", 0));
#ifndef QT_NO_TOOLTIP
        labelCodeViewFontSize->setToolTip(QApplication::translate("AppearanceWidget", "Font size to be used for text in Code View.", 0));
#endif // QT_NO_TOOLTIP
        labelCodeViewFontSize->setText(QApplication::translate("AppearanceWidget", "Font Size:", 0));
#ifndef QT_NO_TOOLTIP
        labelCodeViewFont->setToolTip(QApplication::translate("AppearanceWidget", "Font family to be used for text in Code View.", 0));
#endif // QT_NO_TOOLTIP
        labelCodeViewFont->setText(QApplication::translate("AppearanceWidget", "Standard Font:", 0));
#ifndef QT_NO_TOOLTIP
        customColorButton->setToolTip(QApplication::translate("AppearanceWidget", "Select an alternative color for this display item", 0));
#endif // QT_NO_TOOLTIP
        customColorButton->setText(QApplication::translate("AppearanceWidget", "Custom Color...", 0));
        groupBoxSpecialCharacter->setTitle(QApplication::translate("AppearanceWidget", "Insert Special Characters:", 0));
#ifndef QT_NO_TOOLTIP
        labelSpecialCharacterFontSize->setToolTip(QApplication::translate("AppearanceWidget", "Font size to be used for Insert Special Characters window", 0));
#endif // QT_NO_TOOLTIP
        labelSpecialCharacterFontSize->setText(QApplication::translate("AppearanceWidget", "Font Size:", 0));
#ifndef QT_NO_TOOLTIP
        labelSpecialCharacterFont->setToolTip(QApplication::translate("AppearanceWidget", "Font family to be used for Insert Special Characters window", 0));
#endif // QT_NO_TOOLTIP
        labelSpecialCharacterFont->setText(QApplication::translate("AppearanceWidget", "Standard Font:", 0));
        tabAppearance->setTabText(tabAppearance->indexOf(fontsTab), QApplication::translate("AppearanceWidget", "Fonts / Colors", 0));
        groupBoxIconSize->setTitle(QApplication::translate("AppearanceWidget", "Main Menu Icon Size", 0));
        labelIconSize->setText(QApplication::translate("AppearanceWidget", "Adjust the size of the icons in the main menu.", 0));
        tabAppearance->setTabText(tabAppearance->indexOf(menusTab), QApplication::translate("AppearanceWidget", "Menus", 0));
#ifndef QT_NO_TOOLTIP
        resetAllButton->setToolTip(QApplication::translate("AppearanceWidget", "Reset all fonts and colors to the default values", 0));
#endif // QT_NO_TOOLTIP
        resetAllButton->setText(QApplication::translate("AppearanceWidget", "Reset All", 0));
    } // retranslateUi

};

namespace Ui {
    class AppearanceWidget: public Ui_AppearanceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAPPEARANCEWIDGET_H
