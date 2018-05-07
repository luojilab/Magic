/********************************************************************************
** Form generated from reading UI file 'PPluginWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PPLUGINWIDGET_H
#define UI_PPLUGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QComboBox *comboBox_2;
    QComboBox *comboBox;
    QLabel *label_2;
    QTableWidget *pluginTable;
    QLabel *enginePy3;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout1;
    QPushButton *Py3Auto;
    QPushButton *Py3Set;
    QLineEdit *editPathPy3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QPushButton *addButton;
    QPushButton *removeAllButton;
    QPushButton *removeButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *lblPath;
    QCheckBox *chkUseBundled;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;

    void setupUi(QWidget *PluginWidget)
    {
        if (PluginWidget->objectName().isEmpty())
            PluginWidget->setObjectName(QStringLiteral("PluginWidget"));
        PluginWidget->resize(681, 398);
        verticalLayout = new QVBoxLayout(PluginWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBox_2 = new QComboBox(PluginWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 13, 2, 1, 1);

        comboBox = new QComboBox(PluginWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 12, 2, 1, 1);

        label_2 = new QLabel(PluginWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 12, 0, 1, 1);

        pluginTable = new QTableWidget(PluginWidget);
        if (pluginTable->columnCount() < 5)
            pluginTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        pluginTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        pluginTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        pluginTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        pluginTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        pluginTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        pluginTable->setObjectName(QStringLiteral("pluginTable"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(pluginTable->sizePolicy().hasHeightForWidth());
        pluginTable->setSizePolicy(sizePolicy);
        pluginTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        pluginTable->setAlternatingRowColors(true);
        pluginTable->setSelectionMode(QAbstractItemView::SingleSelection);
        pluginTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        pluginTable->setWordWrap(true);
        pluginTable->setCornerButtonEnabled(true);
        pluginTable->horizontalHeader()->setCascadingSectionResizes(true);
        pluginTable->horizontalHeader()->setHighlightSections(false);
        pluginTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        pluginTable->verticalHeader()->setVisible(false);
        pluginTable->verticalHeader()->setCascadingSectionResizes(true);

        gridLayout->addWidget(pluginTable, 6, 0, 6, 3);

        enginePy3 = new QLabel(PluginWidget);
        enginePy3->setObjectName(QStringLiteral("enginePy3"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(enginePy3->sizePolicy().hasHeightForWidth());
        enginePy3->setSizePolicy(sizePolicy1);
        enginePy3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(enginePy3, 2, 0, 1, 1);

        line_2 = new QFrame(PluginWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 3, 0, 1, 4);

        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setSpacing(6);
        horizontalLayout1->setObjectName(QStringLiteral("horizontalLayout1"));
        Py3Auto = new QPushButton(PluginWidget);
        Py3Auto->setObjectName(QStringLiteral("Py3Auto"));

        horizontalLayout1->addWidget(Py3Auto);

        Py3Set = new QPushButton(PluginWidget);
        Py3Set->setObjectName(QStringLiteral("Py3Set"));

        horizontalLayout1->addWidget(Py3Set);


        gridLayout->addLayout(horizontalLayout1, 2, 3, 1, 1);

        editPathPy3 = new QLineEdit(PluginWidget);
        editPathPy3->setObjectName(QStringLiteral("editPathPy3"));

        gridLayout->addWidget(editPathPy3, 2, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        gridLayout->addLayout(horizontalLayout, 1, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 3, 1, 1);

        label = new QLabel(PluginWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        addButton = new QPushButton(PluginWidget);
        addButton->setObjectName(QStringLiteral("addButton"));

        gridLayout->addWidget(addButton, 7, 3, 1, 1);

        removeAllButton = new QPushButton(PluginWidget);
        removeAllButton->setObjectName(QStringLiteral("removeAllButton"));

        gridLayout->addWidget(removeAllButton, 9, 3, 1, 1);

        removeButton = new QPushButton(PluginWidget);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        gridLayout->addWidget(removeButton, 8, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 10, 3, 1, 1);

        lblPath = new QLabel(PluginWidget);
        lblPath->setObjectName(QStringLiteral("lblPath"));
        lblPath->setMaximumSize(QSize(417, 16777215));

        gridLayout->addWidget(lblPath, 0, 2, 1, 1);

        chkUseBundled = new QCheckBox(PluginWidget);
        chkUseBundled->setObjectName(QStringLiteral("chkUseBundled"));
        chkUseBundled->setEnabled(false);

        gridLayout->addWidget(chkUseBundled, 0, 3, 1, 1);

        label_3 = new QLabel(PluginWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 13, 0, 1, 1);

        label_4 = new QLabel(PluginWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 14, 0, 1, 1);

        label_5 = new QLabel(PluginWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 15, 0, 1, 1);

        label_6 = new QLabel(PluginWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 16, 0, 1, 1);

        comboBox_3 = new QComboBox(PluginWidget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 14, 2, 1, 1);

        comboBox_4 = new QComboBox(PluginWidget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        gridLayout->addWidget(comboBox_4, 15, 2, 1, 1);

        comboBox_5 = new QComboBox(PluginWidget);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        gridLayout->addWidget(comboBox_5, 16, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(PluginWidget);

        QMetaObject::connectSlotsByName(PluginWidget);
    } // setupUi

    void retranslateUi(QWidget *PluginWidget)
    {
        PluginWidget->setWindowTitle(QApplication::translate("PluginWidget", "Plugins", 0));
        label_2->setText(QApplication::translate("PluginWidget", "Assign as Plugin 1", 0));
        QTableWidgetItem *___qtablewidgetitem = pluginTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PluginWidget", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = pluginTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PluginWidget", "Version", 0));
        QTableWidgetItem *___qtablewidgetitem2 = pluginTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PluginWidget", "Author", 0));
        QTableWidgetItem *___qtablewidgetitem3 = pluginTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PluginWidget", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem4 = pluginTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("PluginWidget", "Interpreter", 0));
        enginePy3->setText(QApplication::translate("PluginWidget", "\342\211\245Python3.4:", 0));
        Py3Auto->setText(QApplication::translate("PluginWidget", "Auto", 0));
        Py3Set->setText(QApplication::translate("PluginWidget", "Set", 0));
        editPathPy3->setText(QString());
        label->setText(QApplication::translate("PluginWidget", "Plugins", 0));
        addButton->setText(QApplication::translate("PluginWidget", "Add Plugin", 0));
        removeAllButton->setText(QApplication::translate("PluginWidget", "Remove All", 0));
        removeButton->setText(QApplication::translate("PluginWidget", "Remove Plugin", 0));
        lblPath->setText(QApplication::translate("PluginWidget", "Path to Interpreter Executable", 0));
#ifndef QT_NO_TOOLTIP
        chkUseBundled->setToolTip(QApplication::translate("PluginWidget", "Should the bundled Python interpreter be used if present?", 0));
#endif // QT_NO_TOOLTIP
        chkUseBundled->setText(QApplication::translate("PluginWidget", "Use Bundled Python", 0));
        label_3->setText(QApplication::translate("PluginWidget", "Assign as Plugin 2", 0));
        label_4->setText(QApplication::translate("PluginWidget", "Assign as Plugin 3", 0));
        label_5->setText(QApplication::translate("PluginWidget", "Assign as Plugin 4", 0));
        label_6->setText(QApplication::translate("PluginWidget", "Assign as Plugin 5", 0));
    } // retranslateUi

};

namespace Ui {
    class PluginWidget: public Ui_PluginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PPLUGINWIDGET_H
