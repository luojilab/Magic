/********************************************************************************
** Form generated from reading UI file 'AddMetadata.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMETADATA_H
#define UI_ADDMETADATA_H

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

class Ui_AddMetadata
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QListWidget *lwProperties;
    QLabel *lbDescription;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddMetadata)
    {
        if (AddMetadata->objectName().isEmpty())
            AddMetadata->setObjectName(QStringLiteral("AddMetadata"));
        AddMetadata->resize(600, 600);
        verticalLayout = new QVBoxLayout(AddMetadata);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(AddMetadata);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(7);
        splitter->setChildrenCollapsible(false);
        lwProperties = new QListWidget(splitter);
        lwProperties->setObjectName(QStringLiteral("lwProperties"));
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
        lbDescription->setMinimumSize(QSize(600, 100));
        lbDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbDescription->setWordWrap(true);
        splitter->addWidget(lbDescription);

        verticalLayout->addWidget(splitter);

        buttonBox = new QDialogButtonBox(AddMetadata);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddMetadata);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddMetadata, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddMetadata, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddMetadata);
    } // setupUi

    void retranslateUi(QDialog *AddMetadata)
    {
        AddMetadata->setWindowTitle(QApplication::translate("AddMetadata", "Add metadata property", 0));
        lbDescription->setText(QApplication::translate("AddMetadata", "Metadata description", 0));
    } // retranslateUi

};

namespace Ui {
    class AddMetadata: public Ui_AddMetadata {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMETADATA_H
