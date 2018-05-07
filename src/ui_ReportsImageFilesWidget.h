/********************************************************************************
** Form generated from reading UI file 'ReportsImageFilesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTSIMAGEFILESWIDGET_H
#define UI_REPORTSIMAGEFILESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageFilesWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leFilter;
    QTreeView *fileTree;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QToolButton *ThumbnailDecrease;
    QToolButton *ThumbnailIncrease;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *ImageFilesWidget)
    {
        if (ImageFilesWidget->objectName().isEmpty())
            ImageFilesWidget->setObjectName(QStringLiteral("ImageFilesWidget"));
        ImageFilesWidget->resize(1000, 600);
        verticalLayout = new QVBoxLayout(ImageFilesWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ImageFilesWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        leFilter = new QLineEdit(ImageFilesWidget);
        leFilter->setObjectName(QStringLiteral("leFilter"));

        horizontalLayout->addWidget(leFilter);


        verticalLayout->addLayout(horizontalLayout);

        fileTree = new QTreeView(ImageFilesWidget);
        fileTree->setObjectName(QStringLiteral("fileTree"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileTree->sizePolicy().hasHeightForWidth());
        fileTree->setSizePolicy(sizePolicy);
        fileTree->setProperty("showDropIndicator", QVariant(false));
        fileTree->setAlternatingRowColors(true);
        fileTree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        fileTree->setUniformRowHeights(false);
        fileTree->setSortingEnabled(true);

        verticalLayout->addWidget(fileTree);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(ImageFilesWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        ThumbnailDecrease = new QToolButton(ImageFilesWidget);
        ThumbnailDecrease->setObjectName(QStringLiteral("ThumbnailDecrease"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/main/list-remove_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        ThumbnailDecrease->setIcon(icon);

        horizontalLayout_2->addWidget(ThumbnailDecrease);

        ThumbnailIncrease = new QToolButton(ImageFilesWidget);
        ThumbnailIncrease->setObjectName(QStringLiteral("ThumbnailIncrease"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/main/list-add_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        ThumbnailIncrease->setIcon(icon1);

        horizontalLayout_2->addWidget(ThumbnailIncrease);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(ImageFilesWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ImageFilesWidget);

        QMetaObject::connectSlotsByName(ImageFilesWidget);
    } // setupUi

    void retranslateUi(QWidget *ImageFilesWidget)
    {
        ImageFilesWidget->setWindowTitle(QApplication::translate("ImageFilesWidget", "Image Files", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("ImageFilesWidget", "List only the file names which contain the text you enter.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("ImageFilesWidget", "Filter:", 0));
        label_2->setText(QApplication::translate("ImageFilesWidget", "Thumbnail size:", 0));
    } // retranslateUi

};

namespace Ui {
    class ImageFilesWidget: public Ui_ImageFilesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSIMAGEFILESWIDGET_H
