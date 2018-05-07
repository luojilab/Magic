/********************************************************************************
** Form generated from reading UI file 'PLanguageWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANGUAGEWIDGET_H
#define UI_PLANGUAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LanguageWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_ui;
    QComboBox *cbUILanguage;
    QLabel *label_metaeditor;
    QComboBox *cbMetadataLanguage;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *LanguageWidget)
    {
        if (LanguageWidget->objectName().isEmpty())
            LanguageWidget->setObjectName(QStringLiteral("LanguageWidget"));
        LanguageWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(LanguageWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_ui = new QLabel(LanguageWidget);
        label_ui->setObjectName(QStringLiteral("label_ui"));

        gridLayout->addWidget(label_ui, 0, 0, 1, 1);

        cbUILanguage = new QComboBox(LanguageWidget);
        cbUILanguage->setObjectName(QStringLiteral("cbUILanguage"));

        gridLayout->addWidget(cbUILanguage, 0, 1, 1, 1);

        label_metaeditor = new QLabel(LanguageWidget);
        label_metaeditor->setObjectName(QStringLiteral("label_metaeditor"));

        gridLayout->addWidget(label_metaeditor, 1, 0, 1, 1);

        cbMetadataLanguage = new QComboBox(LanguageWidget);
        cbMetadataLanguage->setObjectName(QStringLiteral("cbMetadataLanguage"));

        gridLayout->addWidget(cbMetadataLanguage, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(LanguageWidget);

        QMetaObject::connectSlotsByName(LanguageWidget);
    } // setupUi

    void retranslateUi(QWidget *LanguageWidget)
    {
        LanguageWidget->setWindowTitle(QApplication::translate("LanguageWidget", "Language", 0));
#ifndef QT_NO_TOOLTIP
        label_ui->setToolTip(QApplication::translate("LanguageWidget", "You must restart Sigil after changing the User Interface language.\n"
"\n"
"If a translation for specific word or phrase is not available it will be displayed in English.\n"
"\n"
"Use Preferences->Spellcheck Dictionaries to set the Spellcheck dictionary.", 0));
#endif // QT_NO_TOOLTIP
        label_ui->setText(QApplication::translate("LanguageWidget", "User Interface Language:", 0));
#ifndef QT_NO_TOOLTIP
        label_metaeditor->setToolTip(QApplication::translate("LanguageWidget", "Set the default language used by the Metadata Editor for new books.", 0));
#endif // QT_NO_TOOLTIP
        label_metaeditor->setText(QApplication::translate("LanguageWidget", "Default Language For Metadata:", 0));
    } // retranslateUi

};

namespace Ui {
    class LanguageWidget: public Ui_LanguageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANGUAGEWIDGET_H
