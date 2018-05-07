/********************************************************************************
** Form generated from reading UI file 'RenameTemplate.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAMETEMPLATE_H
#define UI_RENAMETEMPLATE_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RenameTemplate
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *renameTemplate;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RenameTemplate)
    {
        if (RenameTemplate->objectName().isEmpty())
            RenameTemplate->setObjectName(QStringLiteral("RenameTemplate"));
        RenameTemplate->resize(497, 87);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RenameTemplate->sizePolicy().hasHeightForWidth());
        RenameTemplate->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(RenameTemplate);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(RenameTemplate);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        renameTemplate = new QLineEdit(RenameTemplate);
        renameTemplate->setObjectName(QStringLiteral("renameTemplate"));

        horizontalLayout->addWidget(renameTemplate);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(RenameTemplate);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RenameTemplate);
        QObject::connect(buttonBox, SIGNAL(accepted()), RenameTemplate, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RenameTemplate, SLOT(reject()));

        QMetaObject::connectSlotsByName(RenameTemplate);
    } // setupUi

    void retranslateUi(QDialog *RenameTemplate)
    {
        RenameTemplate->setWindowTitle(QApplication::translate("RenameTemplate", "Rename Files", 0));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("RenameTemplate", "Enter the starting name to use for renaming all selected files, e.g.:\n"
"\n"
"    filename001\n"
"    filename08.xhtml\n"
"    .html\n"
"\n"
"All numbers at the END of the filename you enter will be replaced sequentially\n"
"starting at the number provided (default is 1 if no number is provided),  with\n"
"leading 0's added to match the number of digits used.\n"
"\n"
"If you provide a file extension it will be used for all files, otherwise the\n"
"current extensions will be kept.  If you just provide a file extension (e.g. .xhtml)\n"
"then only file extensions will be updated.  Be careful that any extension you use is \n"
"valid for all selected files.\n"
"", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("RenameTemplate", "Rename Files Starting At: ", 0));
        renameTemplate->setText(QApplication::translate("RenameTemplate", "Section0001", 0));
    } // retranslateUi

};

namespace Ui {
    class RenameTemplate: public Ui_RenameTemplate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENAMETEMPLATE_H
