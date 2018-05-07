/********************************************************************************
** Form generated from reading UI file 'PGeneralSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PGENERALSETTINGSWIDGET_H
#define UI_PGENERALSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeneralSettingsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout2;
    QRadioButton *EpubVersion2;
    QRadioButton *EpubVersion3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QCheckBox *MendOnOpen;
    QCheckBox *MendOnSave;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QCheckBox *AllowRemote;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayoutcss2;
    QRadioButton *Epub2css20;
    QRadioButton *Epub2css21;
    QRadioButton *Epub2css30;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayoutcss3;
    QRadioButton *Epub3css20;
    QRadioButton *Epub3css21;
    QRadioButton *Epub3css30;
    QGroupBox *groupBoxClipLimit;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *clipLimitSpin;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *autoButton;
    QPushButton *browseButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GeneralSettingsWidget)
    {
        if (GeneralSettingsWidget->objectName().isEmpty())
            GeneralSettingsWidget->setObjectName(QStringLiteral("GeneralSettingsWidget"));
        GeneralSettingsWidget->resize(652, 598);
        verticalLayout = new QVBoxLayout(GeneralSettingsWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(GeneralSettingsWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout2 = new QVBoxLayout(groupBox);
        verticalLayout2->setObjectName(QStringLiteral("verticalLayout2"));
        EpubVersion2 = new QRadioButton(groupBox);
        EpubVersion2->setObjectName(QStringLiteral("EpubVersion2"));
        EpubVersion2->setChecked(true);

        verticalLayout2->addWidget(EpubVersion2);

        EpubVersion3 = new QRadioButton(groupBox);
        EpubVersion3->setObjectName(QStringLiteral("EpubVersion3"));
        EpubVersion3->setChecked(false);

        verticalLayout2->addWidget(EpubVersion3);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(GeneralSettingsWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        MendOnOpen = new QCheckBox(groupBox_2);
        MendOnOpen->setObjectName(QStringLiteral("MendOnOpen"));

        gridLayout->addWidget(MendOnOpen, 0, 0, 1, 1);

        MendOnSave = new QCheckBox(groupBox_2);
        MendOnSave->setObjectName(QStringLiteral("MendOnSave"));

        gridLayout->addWidget(MendOnSave, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(GeneralSettingsWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        AllowRemote = new QCheckBox(groupBox_3);
        AllowRemote->setObjectName(QStringLiteral("AllowRemote"));
        AllowRemote->setChecked(false);

        gridLayout_3->addWidget(AllowRemote, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(GeneralSettingsWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        groupBox_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        horizontalLayoutcss2 = new QHBoxLayout(groupBox_4);
        horizontalLayoutcss2->setObjectName(QStringLiteral("horizontalLayoutcss2"));
        Epub2css20 = new QRadioButton(groupBox_4);
        Epub2css20->setObjectName(QStringLiteral("Epub2css20"));

        horizontalLayoutcss2->addWidget(Epub2css20);

        Epub2css21 = new QRadioButton(groupBox_4);
        Epub2css21->setObjectName(QStringLiteral("Epub2css21"));
        Epub2css21->setChecked(true);

        horizontalLayoutcss2->addWidget(Epub2css21);

        Epub2css30 = new QRadioButton(groupBox_4);
        Epub2css30->setObjectName(QStringLiteral("Epub2css30"));
        Epub2css30->setChecked(false);

        horizontalLayoutcss2->addWidget(Epub2css30);


        verticalLayout->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(GeneralSettingsWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        groupBox_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        horizontalLayoutcss3 = new QHBoxLayout(groupBox_5);
        horizontalLayoutcss3->setObjectName(QStringLiteral("horizontalLayoutcss3"));
        Epub3css20 = new QRadioButton(groupBox_5);
        Epub3css20->setObjectName(QStringLiteral("Epub3css20"));

        horizontalLayoutcss3->addWidget(Epub3css20);

        Epub3css21 = new QRadioButton(groupBox_5);
        Epub3css21->setObjectName(QStringLiteral("Epub3css21"));
        Epub3css21->setChecked(false);

        horizontalLayoutcss3->addWidget(Epub3css21);

        Epub3css30 = new QRadioButton(groupBox_5);
        Epub3css30->setObjectName(QStringLiteral("Epub3css30"));
        Epub3css30->setChecked(true);

        horizontalLayoutcss3->addWidget(Epub3css30);


        verticalLayout->addWidget(groupBox_5);

        groupBoxClipLimit = new QGroupBox(GeneralSettingsWidget);
        groupBoxClipLimit->setObjectName(QStringLiteral("groupBoxClipLimit"));
        horizontalLayout_2 = new QHBoxLayout(groupBoxClipLimit);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        clipLimitSpin = new QSpinBox(groupBoxClipLimit);
        clipLimitSpin->setObjectName(QStringLiteral("clipLimitSpin"));
        clipLimitSpin->setMaximumSize(QSize(16777215, 16777215));
        clipLimitSpin->setMinimum(0);
        clipLimitSpin->setMaximum(20);
        clipLimitSpin->setValue(20);

        horizontalLayout_2->addWidget(clipLimitSpin);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(groupBoxClipLimit);

        groupBox_6 = new QGroupBox(GeneralSettingsWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_2 = new QGridLayout(groupBox_6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(groupBox_6);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        autoButton = new QPushButton(groupBox_6);
        autoButton->setObjectName(QStringLiteral("autoButton"));

        horizontalLayout->addWidget(autoButton);

        browseButton = new QPushButton(groupBox_6);
        browseButton->setObjectName(QStringLiteral("browseButton"));

        horizontalLayout->addWidget(browseButton);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_6);

        verticalSpacer = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(GeneralSettingsWidget);

        QMetaObject::connectSlotsByName(GeneralSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *GeneralSettingsWidget)
    {
        GeneralSettingsWidget->setWindowTitle(QApplication::translate("GeneralSettingsWidget", "General Settings", 0));
#ifndef QT_NO_TOOLTIP
        groupBox->setToolTip(QApplication::translate("GeneralSettingsWidget", "Choose which version of Epub to use\n"
"when creating new or empty Epubs in Sigil.", 0));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("GeneralSettingsWidget", "Create New or Empty Epubs as:", 0));
#ifndef QT_NO_TOOLTIP
        EpubVersion2->setToolTip(QApplication::translate("GeneralSettingsWidget", "Epub Version 2.", 0));
#endif // QT_NO_TOOLTIP
        EpubVersion2->setText(QApplication::translate("GeneralSettingsWidget", "Version 2", 0));
#ifndef QT_NO_TOOLTIP
        EpubVersion3->setToolTip(QApplication::translate("GeneralSettingsWidget", "Epub Version 3.", 0));
#endif // QT_NO_TOOLTIP
        EpubVersion3->setText(QApplication::translate("GeneralSettingsWidget", "Version 3", 0));
#ifndef QT_NO_TOOLTIP
        groupBox_2->setToolTip(QApplication::translate("GeneralSettingsWidget", "Choose when your HTML code is automatically \n"
"mended.", 0));
#endif // QT_NO_TOOLTIP
        groupBox_2->setTitle(QApplication::translate("GeneralSettingsWidget", "Mend XHTML Source Code On:", 0));
#ifndef QT_NO_TOOLTIP
        MendOnOpen->setToolTip(QApplication::translate("GeneralSettingsWidget", "Mend when opening an Epub or HTML file, \n"
"and when switching from Book View to Code View.", 0));
#endif // QT_NO_TOOLTIP
        MendOnOpen->setText(QApplication::translate("GeneralSettingsWidget", "Open", 0));
#ifndef QT_NO_TOOLTIP
        MendOnSave->setToolTip(QApplication::translate("GeneralSettingsWidget", "Mend when saving an Epub.", 0));
#endif // QT_NO_TOOLTIP
        MendOnSave->setText(QApplication::translate("GeneralSettingsWidget", "Save", 0));
#ifndef QT_NO_TOOLTIP
        groupBox_3->setToolTip(QApplication::translate("GeneralSettingsWidget", "Determine if Epubs are allowed to access non-multimedia remote resources.", 0));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("GeneralSettingsWidget", " Control Access by Epubs to non-multimedia remote resources.", 0));
#ifndef QT_NO_TOOLTIP
        AllowRemote->setToolTip(QApplication::translate("GeneralSettingsWidget", "Check to allow Epubs to access non-multimedia remote resources.", 0));
#endif // QT_NO_TOOLTIP
        AllowRemote->setText(QApplication::translate("GeneralSettingsWidget", "Epubs may access all remote resources types.", 0));
#ifndef QT_NO_TOOLTIP
        groupBox_4->setToolTip(QApplication::translate("GeneralSettingsWidget", "What CSS level to specify for W3C stylesheet validation tool (EPUB2)", 0));
#endif // QT_NO_TOOLTIP
        groupBox_4->setTitle(QApplication::translate("GeneralSettingsWidget", "EPUB2 W3C Stylesheet Validation Level:", 0));
#ifndef QT_NO_TOOLTIP
        Epub2css20->setToolTip(QApplication::translate("GeneralSettingsWidget", "W3C stylesheet validator will use CSS level 2 for EPUB2", 0));
#endif // QT_NO_TOOLTIP
        Epub2css20->setText(QApplication::translate("GeneralSettingsWidget", "CSS Level 2", 0));
#ifndef QT_NO_TOOLTIP
        Epub2css21->setToolTip(QApplication::translate("GeneralSettingsWidget", "W3C stylesheet validator will use CSS level 2.1 for EPUB2", 0));
#endif // QT_NO_TOOLTIP
        Epub2css21->setText(QApplication::translate("GeneralSettingsWidget", "CSS Level 2.1", 0));
#ifndef QT_NO_TOOLTIP
        Epub2css30->setToolTip(QApplication::translate("GeneralSettingsWidget", "W3C stylesheet validator will use CSS level 3 for EPUB2", 0));
#endif // QT_NO_TOOLTIP
        Epub2css30->setText(QApplication::translate("GeneralSettingsWidget", "CSS Level 3", 0));
#ifndef QT_NO_TOOLTIP
        groupBox_5->setToolTip(QApplication::translate("GeneralSettingsWidget", "What CSS Level to specify for W3C stylesheet validation tool (EPUB3)", 0));
#endif // QT_NO_TOOLTIP
        groupBox_5->setTitle(QApplication::translate("GeneralSettingsWidget", "EPUB3 W3C Stylesheet Validation Level:", 0));
#ifndef QT_NO_TOOLTIP
        Epub3css20->setToolTip(QApplication::translate("GeneralSettingsWidget", "W3C stylesheet validator will use CSS level 2 for EPUB3", 0));
#endif // QT_NO_TOOLTIP
        Epub3css20->setText(QApplication::translate("GeneralSettingsWidget", "CSS Level 2", 0));
#ifndef QT_NO_TOOLTIP
        Epub3css21->setToolTip(QApplication::translate("GeneralSettingsWidget", "W3C stylesheet validator will use CSS level 2.1 for EPUB3", 0));
#endif // QT_NO_TOOLTIP
        Epub3css21->setText(QApplication::translate("GeneralSettingsWidget", "CSS Level 2.1", 0));
#ifndef QT_NO_TOOLTIP
        Epub3css30->setToolTip(QApplication::translate("GeneralSettingsWidget", "W3C stylesheet validator will use CSS level 3 for EPUB3", 0));
#endif // QT_NO_TOOLTIP
        Epub3css30->setText(QApplication::translate("GeneralSettingsWidget", "CSS Level 3", 0));
        groupBoxClipLimit->setTitle(QApplication::translate("GeneralSettingsWidget", "Number of clipboard history items to save between sessions (0 disables):", 0));
#ifndef QT_NO_TOOLTIP
        clipLimitSpin->setToolTip(QApplication::translate("GeneralSettingsWidget", "Use to limit (or disable) clipboard history saving between sessions", 0));
#endif // QT_NO_TOOLTIP
        groupBox_6->setTitle(QApplication::translate("GeneralSettingsWidget", "Set Folder where temporary files should be created", 0));
        autoButton->setText(QApplication::translate("GeneralSettingsWidget", "Auto", 0));
        browseButton->setText(QApplication::translate("GeneralSettingsWidget", "Browse", 0));
    } // retranslateUi

};

namespace Ui {
    class GeneralSettingsWidget: public Ui_GeneralSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PGENERALSETTINGSWIDGET_H
