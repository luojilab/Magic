/********************************************************************************
** Form generated from reading UI file 'SelectIndexTitle.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTINDEXTITLE_H
#define UI_SELECTINDEXTITLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectIndexTitle
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *title;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MarkForIndex)
    {
        if (MarkForIndex->objectName().isEmpty())
            MarkForIndex->setObjectName(QStringLiteral("MarkForIndex"));
        MarkForIndex->resize(504, 109);
        verticalLayout = new QVBoxLayout(MarkForIndex);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(MarkForIndex);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        title = new QLineEdit(MarkForIndex);
        title->setObjectName(QStringLiteral("title"));

        horizontalLayout->addWidget(title);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(MarkForIndex);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(MarkForIndex);
        QObject::connect(buttonBox, SIGNAL(accepted()), MarkForIndex, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MarkForIndex, SLOT(reject()));

        QMetaObject::connectSlotsByName(MarkForIndex);
    } // setupUi

    void retranslateUi(QDialog *MarkForIndex)
    {
        MarkForIndex->setWindowTitle(QApplication::translate("SelectIndexTitle", "Mark For Index", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("SelectIndexTitle", "Enter the index entry to create for the selected text.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("SelectIndexTitle", "Index Entry:", 0));
    } // retranslateUi

};

namespace Ui {
    class SelectIndexTitle: public Ui_SelectIndexTitle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTINDEXTITLE_H
