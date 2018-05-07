/********************************************************************************
** Form generated from reading UI file 'DeleteFiles.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEFILES_H
#define UI_DELETEFILES_H

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

class Ui_DeleteFiles
{
public:
    QVBoxLayout *character_box;
    QVBoxLayout *verticalLayout;
    QTableView *Table;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DeleteFiles)
    {
        if (DeleteFiles->objectName().isEmpty())
            DeleteFiles->setObjectName(QStringLiteral("DeleteFiles"));
        DeleteFiles->resize(376, 457);
        character_box = new QVBoxLayout(DeleteFiles);
        character_box->setObjectName(QStringLiteral("character_box"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Table = new QTableView(DeleteFiles);
        Table->setObjectName(QStringLiteral("Table"));

        verticalLayout->addWidget(Table);


        character_box->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(DeleteFiles);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        character_box->addWidget(buttonBox);


        retranslateUi(DeleteFiles);
        QObject::connect(buttonBox, SIGNAL(rejected()), DeleteFiles, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), DeleteFiles, SLOT(accept()));

        QMetaObject::connectSlotsByName(DeleteFiles);
    } // setupUi

    void retranslateUi(QDialog *DeleteFiles)
    {
        DeleteFiles->setWindowTitle(QApplication::translate("DeleteFiles", "Delete Files", 0));
    } // retranslateUi

};

namespace Ui {
    class DeleteFiles: public Ui_DeleteFiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEFILES_H
