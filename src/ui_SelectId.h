/********************************************************************************
** Form generated from reading UI file 'SelectId.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTID_H
#define UI_SELECTID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectId
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *id;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SelectId)
    {
        if (SelectId->objectName().isEmpty())
            SelectId->setObjectName(QStringLiteral("SelectId"));
        SelectId->resize(504, 100);
        verticalLayout = new QVBoxLayout(SelectId);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(SelectId);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        id = new QComboBox(SelectId);
        id->setObjectName(QStringLiteral("id"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(id->sizePolicy().hasHeightForWidth());
        id->setSizePolicy(sizePolicy);
        id->setEditable(true);

        horizontalLayout->addWidget(id);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SelectId);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SelectId);
        QObject::connect(buttonBox, SIGNAL(accepted()), SelectId, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SelectId, SLOT(reject()));

        QMetaObject::connectSlotsByName(SelectId);
    } // setupUi

    void retranslateUi(QDialog *SelectId)
    {
        SelectId->setWindowTitle(QApplication::translate("SelectId", "Insert ID ", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("SelectId", "Enter an ID name to use as a destination for hyperlinks, notes, and TOC entries.\n"
"\n"
"The dropdown box shows existing ID names in the current file.\n"
"\n"
"ID names must be unique and start with a letter.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("SelectId", "ID:", 0));
    } // retranslateUi

};

namespace Ui {
    class SelectId: public Ui_SelectId {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTID_H
