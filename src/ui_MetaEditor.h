/********************************************************************************
** Form generated from reading UI file 'MetaEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METAEDITOR_H
#define UI_METAEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_MetaEditor
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *addMetaButton;
    QPushButton *delButton;
    QPushButton *addPropButton;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *tbMoveUp;
    QToolButton *tbMoveDown;
    QTreeView *view;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MetaEditor)
    {
        if (MetaEditor->objectName().isEmpty())
            MetaEditor->setObjectName(QStringLiteral("MetaEditor"));
        MetaEditor->resize(751, 503);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MetaEditor->sizePolicy().hasHeightForWidth());
        MetaEditor->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(MetaEditor);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, -1, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        addMetaButton = new QPushButton(MetaEditor);
        addMetaButton->setObjectName(QStringLiteral("addMetaButton"));

        gridLayout->addWidget(addMetaButton, 1, 0, 1, 1);

        delButton = new QPushButton(MetaEditor);
        delButton->setObjectName(QStringLiteral("delButton"));

        gridLayout->addWidget(delButton, 3, 0, 1, 1);

        addPropButton = new QPushButton(MetaEditor);
        addPropButton->setObjectName(QStringLiteral("addPropButton"));

        gridLayout->addWidget(addPropButton, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tbMoveUp = new QToolButton(MetaEditor);
        tbMoveUp->setObjectName(QStringLiteral("tbMoveUp"));
        tbMoveUp->setArrowType(Qt::UpArrow);

        horizontalLayout_3->addWidget(tbMoveUp);

        tbMoveDown = new QToolButton(MetaEditor);
        tbMoveDown->setObjectName(QStringLiteral("tbMoveDown"));
        tbMoveDown->setArrowType(Qt::DownArrow);

        horizontalLayout_3->addWidget(tbMoveDown);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 1, 1, 1);

        view = new QTreeView(MetaEditor);
        view->setObjectName(QStringLiteral("view"));
        view->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(view->sizePolicy().hasHeightForWidth());
        view->setSizePolicy(sizePolicy1);
        view->setMinimumSize(QSize(600, 450));
        view->setSizeIncrement(QSize(0, 0));
        view->setAlternatingRowColors(true);
        view->setSelectionBehavior(QAbstractItemView::SelectItems);
        view->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        view->setAnimated(false);
        view->setAllColumnsShowFocus(true);

        gridLayout_3->addWidget(view, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(MetaEditor);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(MetaEditor);

        QMetaObject::connectSlotsByName(MetaEditor);
    } // setupUi

    void retranslateUi(QDialog *MetaEditor)
    {
        MetaEditor->setWindowTitle(QApplication::translate("MetaEditor", "MetaData Editor", 0));
#ifndef QT_NO_TOOLTIP
        addMetaButton->setToolTip(QApplication::translate("MetaEditor", "Add a new metadata element.", 0));
#endif // QT_NO_TOOLTIP
        addMetaButton->setText(QApplication::translate("MetaEditor", "Add Metadata", 0));
#ifndef QT_NO_TOOLTIP
        delButton->setToolTip(QApplication::translate("MetaEditor", "Remove a metadata element or property.", 0));
#endif // QT_NO_TOOLTIP
        delButton->setText(QApplication::translate("MetaEditor", "Remove", 0));
#ifndef QT_NO_TOOLTIP
        addPropButton->setToolTip(QApplication::translate("MetaEditor", "Add a new property or attribute to an existing metadata element.", 0));
#endif // QT_NO_TOOLTIP
        addPropButton->setText(QApplication::translate("MetaEditor", "Add Property", 0));
#ifndef QT_NO_TOOLTIP
        tbMoveUp->setToolTip(QApplication::translate("MetaEditor", "Move selected metadata element or property up.", 0));
#endif // QT_NO_TOOLTIP
        tbMoveUp->setText(QApplication::translate("MetaEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        tbMoveDown->setToolTip(QApplication::translate("MetaEditor", "Move selected metadata element or property down.", 0));
#endif // QT_NO_TOOLTIP
        tbMoveDown->setText(QApplication::translate("MetaEditor", "...", 0));
#ifndef QT_NO_TOOLTIP
        view->setToolTip(QApplication::translate("MetaEditor", "Double-click in cell to edit its value.  Minimum metadata consists of main language, title, and at least one creator.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        buttonBox->setToolTip(QApplication::translate("MetaEditor", "Use OK to commit your metdata changes to the epub, otherwise use Cancel.", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MetaEditor: public Ui_MetaEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METAEDITOR_H
