/********************************************************************************
** Form generated from reading UI file 'OpenWithName.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENWITHNAME_H
#define UI_OPENWITHNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OpenWithName
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLineEdit *MenuName;
    QLabel *label_filename;
    QLabel *label_menu;
    QLabel *Filename;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OpenWithName)
    {
        if (OpenWithName->objectName().isEmpty())
            OpenWithName->setObjectName(QStringLiteral("OpenWithName"));
        OpenWithName->resize(504, 132);
        verticalLayout = new QVBoxLayout(OpenWithName);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(OpenWithName);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        MenuName = new QLineEdit(OpenWithName);
        MenuName->setObjectName(QStringLiteral("MenuName"));

        gridLayout->addWidget(MenuName, 1, 1, 1, 1);

        label_filename = new QLabel(OpenWithName);
        label_filename->setObjectName(QStringLiteral("label_filename"));

        gridLayout->addWidget(label_filename, 0, 0, 1, 1);

        label_menu = new QLabel(OpenWithName);
        label_menu->setObjectName(QStringLiteral("label_menu"));

        gridLayout->addWidget(label_menu, 1, 0, 1, 1);

        Filename = new QLabel(OpenWithName);
        Filename->setObjectName(QStringLiteral("Filename"));

        gridLayout->addWidget(Filename, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(OpenWithName);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OpenWithName);
        QObject::connect(buttonBox, SIGNAL(accepted()), OpenWithName, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OpenWithName, SLOT(reject()));

        QMetaObject::connectSlotsByName(OpenWithName);
    } // setupUi

    void retranslateUi(QDialog *OpenWithName)
    {
        OpenWithName->setWindowTitle(QApplication::translate("OpenWithName", "Open With Application Name", 0));
        label->setText(QApplication::translate("OpenWithName", "Enter the name to display in the Open With menu for this application:", 0));
        label_filename->setText(QApplication::translate("OpenWithName", "Filename:", 0));
        label_menu->setText(QApplication::translate("OpenWithName", "Menu Name:", 0));
        Filename->setText(QApplication::translate("OpenWithName", "No File", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenWithName: public Ui_OpenWithName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENWITHNAME_H
