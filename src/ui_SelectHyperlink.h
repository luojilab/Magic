/********************************************************************************
** Form generated from reading UI file 'SelectHyperlink.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTHYPERLINK_H
#define UI_SELECTHYPERLINK_H

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
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectHyperlink
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *filter;
    QTreeView *list;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *href;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SelectHyperlink)
    {
        if (SelectHyperlink->objectName().isEmpty())
            SelectHyperlink->setObjectName(QStringLiteral("SelectHyperlink"));
        SelectHyperlink->resize(549, 468);
        verticalLayout = new QVBoxLayout(SelectHyperlink);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(SelectHyperlink);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        filter = new QLineEdit(SelectHyperlink);
        filter->setObjectName(QStringLiteral("filter"));

        horizontalLayout->addWidget(filter);


        verticalLayout->addLayout(horizontalLayout);

        list = new QTreeView(SelectHyperlink);
        list->setObjectName(QStringLiteral("list"));

        verticalLayout->addWidget(list);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(SelectHyperlink);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        href = new QLineEdit(SelectHyperlink);
        href->setObjectName(QStringLiteral("href"));

        horizontalLayout_2->addWidget(href);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(SelectHyperlink);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SelectHyperlink);
        QObject::connect(buttonBox, SIGNAL(accepted()), SelectHyperlink, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SelectHyperlink, SLOT(reject()));

        QMetaObject::connectSlotsByName(SelectHyperlink);
    } // setupUi

    void retranslateUi(QDialog *SelectHyperlink)
    {
        SelectHyperlink->setWindowTitle(QApplication::translate("SelectHyperlink", "Select Target", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("SelectHyperlink", "List only the entries that match the text you enter.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("SelectHyperlink", "Filter:", 0));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("SelectHyperlink", "Enter the target URL for this hyperlink.  You can select or \n"
"double click on existing destinations in your book from the list above.", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("SelectHyperlink", "Target:", 0));
    } // retranslateUi

};

namespace Ui {
    class SelectHyperlink: public Ui_SelectHyperlink {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTHYPERLINK_H
