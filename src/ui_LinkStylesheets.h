/********************************************************************************
** Form generated from reading UI file 'LinkStylesheets.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKSTYLESHEETS_H
#define UI_LINKSTYLESHEETS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LinkStylesheets
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTreeView *StylesheetsView;
    QVBoxLayout *verticalLayout_2;
    QToolButton *MoveUp;
    QToolButton *MoveDown;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LinkStylesheets)
    {
        if (LinkStylesheets->objectName().isEmpty())
            LinkStylesheets->setObjectName(QStringLiteral("LinkStylesheets"));
        LinkStylesheets->resize(408, 328);
        verticalLayout = new QVBoxLayout(LinkStylesheets);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        StylesheetsView = new QTreeView(LinkStylesheets);
        StylesheetsView->setObjectName(QStringLiteral("StylesheetsView"));
        StylesheetsView->setProperty("showDropIndicator", QVariant(false));
        StylesheetsView->setDragEnabled(false);
        StylesheetsView->setAlternatingRowColors(true);
        StylesheetsView->setSelectionMode(QAbstractItemView::SingleSelection);
        StylesheetsView->setUniformRowHeights(true);

        horizontalLayout->addWidget(StylesheetsView);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        MoveUp = new QToolButton(LinkStylesheets);
        MoveUp->setObjectName(QStringLiteral("MoveUp"));
        MoveUp->setArrowType(Qt::UpArrow);

        verticalLayout_2->addWidget(MoveUp);

        MoveDown = new QToolButton(LinkStylesheets);
        MoveDown->setObjectName(QStringLiteral("MoveDown"));
        MoveDown->setArrowType(Qt::DownArrow);

        verticalLayout_2->addWidget(MoveDown);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(LinkStylesheets);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LinkStylesheets);
        QObject::connect(buttonBox, SIGNAL(accepted()), LinkStylesheets, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LinkStylesheets, SLOT(reject()));

        QMetaObject::connectSlotsByName(LinkStylesheets);
    } // setupUi

    void retranslateUi(QDialog *LinkStylesheets)
    {
        LinkStylesheets->setWindowTitle(QApplication::translate("LinkStylesheets", "Link StyleSheets", 0));
#ifndef QT_NO_TOOLTIP
        MoveUp->setToolTip(QApplication::translate("LinkStylesheets", "Move the selected stylesheets up in priority.\n"
"\n"
"Stylesheets that are listed first take precedence over later stylesheets.", 0));
#endif // QT_NO_TOOLTIP
        MoveUp->setText(QApplication::translate("LinkStylesheets", "Up", 0));
#ifndef QT_NO_TOOLTIP
        MoveDown->setToolTip(QApplication::translate("LinkStylesheets", "Move the selected stylesheets down in priority.", 0));
#endif // QT_NO_TOOLTIP
        MoveDown->setText(QApplication::translate("LinkStylesheets", "Down", 0));
    } // retranslateUi

};

namespace Ui {
    class LinkStylesheets: public Ui_LinkStylesheets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKSTYLESHEETS_H
