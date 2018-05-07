/********************************************************************************
** Form generated from reading UI file 'AddSemantics.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSEMANTICS_H
#define UI_ADDSEMANTICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddSemantics
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QListWidget *lwProperties;
    QLabel *lbDescription;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddSemantics)
    {
        if (AddSemantics->objectName().isEmpty())
            AddSemantics->setObjectName(QStringLiteral("AddSemantics"));
        AddSemantics->resize(224, 700);
        verticalLayout = new QVBoxLayout(AddSemantics);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(AddSemantics);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(7);
        splitter->setChildrenCollapsible(false);
        lwProperties = new QListWidget(splitter);
        lwProperties->setObjectName(QStringLiteral("lwProperties"));
        lwProperties->setMinimumSize(QSize(200, 200));
        lwProperties->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lwProperties->setUniformItemSizes(true);
        splitter->addWidget(lwProperties);
        lbDescription = new QLabel(splitter);
        lbDescription->setObjectName(QStringLiteral("lbDescription"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbDescription->sizePolicy().hasHeightForWidth());
        lbDescription->setSizePolicy(sizePolicy);
        lbDescription->setMinimumSize(QSize(200, 150));
        lbDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbDescription->setWordWrap(true);
        splitter->addWidget(lbDescription);

        verticalLayout->addWidget(splitter);

        buttonBox = new QDialogButtonBox(AddSemantics);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddSemantics);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddSemantics, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddSemantics, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddSemantics);
    } // setupUi

    void retranslateUi(QDialog *AddSemantics)
    {
        AddSemantics->setWindowTitle(QApplication::translate("AddSemantics", "Add Semantic Property", 0));
        lbDescription->setText(QApplication::translate("AddSemantics", "Description of Semantic Properties", 0));
    } // retranslateUi

};

namespace Ui {
    class AddSemantics: public Ui_AddSemantics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSEMANTICS_H
