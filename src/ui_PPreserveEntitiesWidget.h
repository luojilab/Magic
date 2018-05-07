/********************************************************************************
** Form generated from reading UI file 'PPreserveEntitiesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PPRESERVEENTITIESWIDGET_H
#define UI_PPRESERVEENTITIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreserveEntitiesWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QListWidget *entityList;
    QVBoxLayout *verticalLayout;
    QPushButton *addEntities;
    QPushButton *removeEntity;
    QPushButton *removeAll;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PreserveEntitiesWidget)
    {
        if (PreserveEntitiesWidget->objectName().isEmpty())
            PreserveEntitiesWidget->setObjectName(QStringLiteral("PreserveEntitiesWidget"));
        PreserveEntitiesWidget->resize(574, 367);
        verticalLayout_2 = new QVBoxLayout(PreserveEntitiesWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 0, 0, 0);
        groupBox = new QGroupBox(PreserveEntitiesWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        entityList = new QListWidget(groupBox);
        entityList->setObjectName(QStringLiteral("entityList"));
        entityList->setSelectionMode(QAbstractItemView::ExtendedSelection);

        horizontalLayout->addWidget(entityList);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        addEntities = new QPushButton(groupBox);
        addEntities->setObjectName(QStringLiteral("addEntities"));

        verticalLayout->addWidget(addEntities);

        removeEntity = new QPushButton(groupBox);
        removeEntity->setObjectName(QStringLiteral("removeEntity"));

        verticalLayout->addWidget(removeEntity);

        removeAll = new QPushButton(groupBox);
        removeAll->setObjectName(QStringLiteral("removeAll"));

        verticalLayout->addWidget(removeAll);

        verticalSpacer = new QSpacerItem(10, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(PreserveEntitiesWidget);

        QMetaObject::connectSlotsByName(PreserveEntitiesWidget);
    } // setupUi

    void retranslateUi(QWidget *PreserveEntitiesWidget)
    {
        PreserveEntitiesWidget->setWindowTitle(QApplication::translate("PreserveEntitiesWidget", "Preserve Entities", 0));
        groupBox->setTitle(QApplication::translate("PreserveEntitiesWidget", "Entities to Preserve", 0));
#ifndef QT_NO_TOOLTIP
        addEntities->setToolTip(QApplication::translate("PreserveEntitiesWidget", "Enter or paste entities to add to the list.\n"
"Entities can be separated by lines, commas, or spaces.", 0));
#endif // QT_NO_TOOLTIP
        addEntities->setText(QApplication::translate("PreserveEntitiesWidget", "Add", 0));
        removeEntity->setText(QApplication::translate("PreserveEntitiesWidget", "Remove", 0));
        removeAll->setText(QApplication::translate("PreserveEntitiesWidget", "Remove All", 0));
    } // retranslateUi

};

namespace Ui {
    class PreserveEntitiesWidget: public Ui_PreserveEntitiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PPRESERVEENTITIESWIDGET_H
