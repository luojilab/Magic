/********************************************************************************
** Form generated from reading UI file 'PKeyboardShortcutsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PKEYBOARDSHORTCUTSWIDGET_H
#define UI_PKEYBOARDSHORTCUTSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KeyboardShortcutsWidget
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *filterEdit;
    QTreeWidget *commandList;
    QHBoxLayout *hboxLayout1;
    QPushButton *resetAllButton;
    QSpacerItem *spacerItem;
    QGroupBox *targetEditGroup;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout2;
    QLabel *targetEditLabel;
    QLineEdit *targetEdit;
    QPushButton *assignButton;
    QPushButton *removeButton;
    QLabel *infoLabel;

    void setupUi(QWidget *KeyboardShortcutsWidget)
    {
        if (KeyboardShortcutsWidget->objectName().isEmpty())
            KeyboardShortcutsWidget->setObjectName(QStringLiteral("KeyboardShortcutsWidget"));
        KeyboardShortcutsWidget->resize(568, 451);
        vboxLayout = new QVBoxLayout(KeyboardShortcutsWidget);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(6, 0, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label = new QLabel(KeyboardShortcutsWidget);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout->addWidget(label);

        filterEdit = new QLineEdit(KeyboardShortcutsWidget);
        filterEdit->setObjectName(QStringLiteral("filterEdit"));

        hboxLayout->addWidget(filterEdit);


        vboxLayout->addLayout(hboxLayout);

        commandList = new QTreeWidget(KeyboardShortcutsWidget);
        commandList->setObjectName(QStringLiteral("commandList"));
        commandList->setRootIsDecorated(false);
        commandList->setUniformRowHeights(true);
        commandList->setSortingEnabled(true);
        commandList->setColumnCount(3);

        vboxLayout->addWidget(commandList);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        resetAllButton = new QPushButton(KeyboardShortcutsWidget);
        resetAllButton->setObjectName(QStringLiteral("resetAllButton"));

        hboxLayout1->addWidget(resetAllButton);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout1);

        targetEditGroup = new QGroupBox(KeyboardShortcutsWidget);
        targetEditGroup->setObjectName(QStringLiteral("targetEditGroup"));
        vboxLayout1 = new QVBoxLayout(targetEditGroup);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        targetEditLabel = new QLabel(targetEditGroup);
        targetEditLabel->setObjectName(QStringLiteral("targetEditLabel"));

        hboxLayout2->addWidget(targetEditLabel);

        targetEdit = new QLineEdit(targetEditGroup);
        targetEdit->setObjectName(QStringLiteral("targetEdit"));

        hboxLayout2->addWidget(targetEdit);

        assignButton = new QPushButton(targetEditGroup);
        assignButton->setObjectName(QStringLiteral("assignButton"));
        assignButton->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(assignButton->sizePolicy().hasHeightForWidth());
        assignButton->setSizePolicy(sizePolicy);
        assignButton->setIconSize(QSize(16, 16));

        hboxLayout2->addWidget(assignButton);

        removeButton = new QPushButton(targetEditGroup);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setEnabled(false);

        hboxLayout2->addWidget(removeButton);


        vboxLayout1->addLayout(hboxLayout2);

        infoLabel = new QLabel(targetEditGroup);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));
        infoLabel->setTextFormat(Qt::RichText);

        vboxLayout1->addWidget(infoLabel);


        vboxLayout->addWidget(targetEditGroup);


        retranslateUi(KeyboardShortcutsWidget);

        QMetaObject::connectSlotsByName(KeyboardShortcutsWidget);
    } // setupUi

    void retranslateUi(QWidget *KeyboardShortcutsWidget)
    {
        KeyboardShortcutsWidget->setWindowTitle(QApplication::translate("KeyboardShortcutsWidget", "Keyboard Shortcuts", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("KeyboardShortcutsWidget", "List only the entries containing the text you enter.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("KeyboardShortcutsWidget", "Filter: ", 0));
        QTreeWidgetItem *___qtreewidgetitem = commandList->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("KeyboardShortcutsWidget", "Description", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("KeyboardShortcutsWidget", "Shortcut", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("KeyboardShortcutsWidget", "Name", 0));
#ifndef QT_NO_TOOLTIP
        resetAllButton->setToolTip(QApplication::translate("KeyboardShortcutsWidget", "Reset all to default", 0));
#endif // QT_NO_TOOLTIP
        resetAllButton->setText(QApplication::translate("KeyboardShortcutsWidget", "Reset All", 0));
        targetEditGroup->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        targetEditLabel->setToolTip(QApplication::translate("KeyboardShortcutsWidget", "Press the key combination you want to use.", 0));
#endif // QT_NO_TOOLTIP
        targetEditLabel->setText(QApplication::translate("KeyboardShortcutsWidget", "Shortcut:", 0));
#ifndef QT_NO_TOOLTIP
        targetEdit->setToolTip(QApplication::translate("KeyboardShortcutsWidget", "Press the key combination you want to use.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        assignButton->setToolTip(QApplication::translate("KeyboardShortcutsWidget", "Assign this keyboard shortcut, overriding any conflicting usages.", 0));
#endif // QT_NO_TOOLTIP
        assignButton->setText(QApplication::translate("KeyboardShortcutsWidget", "Assign", 0));
#ifndef QT_NO_TOOLTIP
        removeButton->setToolTip(QApplication::translate("KeyboardShortcutsWidget", "Remove this keyboard shortcut.", 0));
#endif // QT_NO_TOOLTIP
        removeButton->setText(QApplication::translate("KeyboardShortcutsWidget", "Remove", 0));
    } // retranslateUi

};

namespace Ui {
    class KeyboardShortcutsWidget: public Ui_KeyboardShortcutsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PKEYBOARDSHORTCUTSWIDGET_H
