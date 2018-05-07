/********************************************************************************
** Form generated from reading UI file 'DeleteStyles.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETESTYLES_H
#define UI_DELETESTYLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DeleteStyles
{
public:
    QVBoxLayout *character_box;
    QVBoxLayout *verticalLayout;
    QTableView *Table;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DeleteStyles)
    {
        if (DeleteStyles->objectName().isEmpty())
            DeleteStyles->setObjectName(QStringLiteral("DeleteStyles"));
        DeleteStyles->resize(376, 457);
        character_box = new QVBoxLayout(DeleteStyles);
        character_box->setObjectName(QStringLiteral("character_box"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Table = new QTableView(DeleteStyles);
        Table->setObjectName(QStringLiteral("Table"));

        verticalLayout->addWidget(Table);


        character_box->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(DeleteStyles);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        character_box->addWidget(buttonBox);


        retranslateUi(DeleteStyles);
        QObject::connect(buttonBox, SIGNAL(rejected()), DeleteStyles, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), DeleteStyles, SLOT(accept()));

        QMetaObject::connectSlotsByName(DeleteStyles);
    } // setupUi

    void retranslateUi(QDialog *DeleteStyles)
    {
        DeleteStyles->setWindowTitle(QApplication::translate("DeleteStyles", "Delete Styles", 0));
    } // retranslateUi

};

namespace Ui {
    class DeleteStyles: public Ui_DeleteStyles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETESTYLES_H
