/********************************************************************************
** Form generated from reading UI file 'SelectFiles.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTFILES_H
#define UI_SELECTFILES_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectFiles
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QListWidget *FileTypes;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Filter;
    QPushButton *InsertFromDisk;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *splitter;
    QTreeView *imageTree;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *avLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QToolButton *ThumbnailDecrease;
    QToolButton *ThumbnailIncrease;
    QSpacerItem *horizontalSpacer;
    QLabel *Details;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SelectFiles)
    {
        if (SelectFiles->objectName().isEmpty())
            SelectFiles->setObjectName(QStringLiteral("SelectFiles"));
        SelectFiles->resize(800, 600);
        verticalLayout = new QVBoxLayout(SelectFiles);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        FileTypes = new QListWidget(SelectFiles);
        FileTypes->setObjectName(QStringLiteral("FileTypes"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FileTypes->sizePolicy().hasHeightForWidth());
        FileTypes->setSizePolicy(sizePolicy);
        FileTypes->setMaximumSize(QSize(100, 16777215));

        verticalLayout_3->addWidget(FileTypes);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(SelectFiles);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        Filter = new QLineEdit(SelectFiles);
        Filter->setObjectName(QStringLiteral("Filter"));

        horizontalLayout->addWidget(Filter);

        InsertFromDisk = new QPushButton(SelectFiles);
        InsertFromDisk->setObjectName(QStringLiteral("InsertFromDisk"));

        horizontalLayout->addWidget(InsertFromDisk);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        splitter = new QSplitter(SelectFiles);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(10);
        splitter->setChildrenCollapsible(false);
        imageTree = new QTreeView(splitter);
        imageTree->setObjectName(QStringLiteral("imageTree"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(imageTree->sizePolicy().hasHeightForWidth());
        imageTree->setSizePolicy(sizePolicy2);
        imageTree->setMaximumSize(QSize(500, 16777215));
        imageTree->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        imageTree->setProperty("showDropIndicator", QVariant(false));
        imageTree->setAlternatingRowColors(true);
        imageTree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        imageTree->setSortingEnabled(false);
        splitter->addWidget(imageTree);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        avLayout = new QVBoxLayout(verticalLayoutWidget);
        avLayout->setObjectName(QStringLiteral("avLayout"));
        avLayout->setContentsMargins(0, 0, 0, 0);
        splitter->addWidget(verticalLayoutWidget);

        horizontalLayout_3->addWidget(splitter);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(SelectFiles);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        ThumbnailDecrease = new QToolButton(SelectFiles);
        ThumbnailDecrease->setObjectName(QStringLiteral("ThumbnailDecrease"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/main/list-remove_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        ThumbnailDecrease->setIcon(icon);

        horizontalLayout_2->addWidget(ThumbnailDecrease);

        ThumbnailIncrease = new QToolButton(SelectFiles);
        ThumbnailIncrease->setObjectName(QStringLiteral("ThumbnailIncrease"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/main/list-add_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        ThumbnailIncrease->setIcon(icon1);

        horizontalLayout_2->addWidget(ThumbnailIncrease);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        Details = new QLabel(SelectFiles);
        Details->setObjectName(QStringLiteral("Details"));
        Details->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(Details);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(SelectFiles);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SelectFiles);
        QObject::connect(buttonBox, SIGNAL(accepted()), SelectFiles, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SelectFiles, SLOT(reject()));

        QMetaObject::connectSlotsByName(SelectFiles);
    } // setupUi

    void retranslateUi(QDialog *SelectFiles)
    {
        SelectFiles->setWindowTitle(QApplication::translate("SelectFiles", "Insert File", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("SelectFiles", "List only the file names which contain the text you enter.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("SelectFiles", "Filter:", 0));
#ifndef QT_NO_TOOLTIP
        InsertFromDisk->setToolTip(QApplication::translate("SelectFiles", "Choose which image, video, or audio files from your computer to add to\n"
"your book and automatically insert into your document.", 0));
#endif // QT_NO_TOOLTIP
        InsertFromDisk->setText(QApplication::translate("SelectFiles", "Other Files...", 0));
        label_2->setText(QApplication::translate("SelectFiles", "Thumbnail size:", 0));
        Details->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SelectFiles: public Ui_SelectFiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTFILES_H
