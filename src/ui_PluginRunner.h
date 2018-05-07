/********************************************************************************
** Form generated from reading UI file 'PluginRunner.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINRUNNER_H
#define UI_PLUGINRUNNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PluginRunner
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *nameLbl;
    QPushButton *startButton;
    QPushButton *cancelButton;
    QTextEdit *textEdit;
    QPushButton *showButton;
    QPushButton *okButton;
    QProgressBar *progressBar;
    QLabel *statusLbl;

    void setupUi(QDialog *PluginRunner)
    {
        if (PluginRunner->objectName().isEmpty())
            PluginRunner->setObjectName(QStringLiteral("PluginRunner"));
        PluginRunner->resize(789, 550);
        verticalLayout = new QVBoxLayout(PluginRunner);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(PluginRunner);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        nameLbl = new QLabel(PluginRunner);
        nameLbl->setObjectName(QStringLiteral("nameLbl"));

        gridLayout->addWidget(nameLbl, 0, 1, 1, 1);

        startButton = new QPushButton(PluginRunner);
        startButton->setObjectName(QStringLiteral("startButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(startButton, 0, 2, 1, 1);

        cancelButton = new QPushButton(PluginRunner);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        sizePolicy1.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(cancelButton, 0, 3, 1, 1);

        textEdit = new QTextEdit(PluginRunner);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy2);
        textEdit->setReadOnly(true);
        textEdit->setHtml(QLatin1String("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>"));
        textEdit->setAcceptRichText(true);
        textEdit->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(textEdit, 4, 0, 1, 4);

        showButton = new QPushButton(PluginRunner);
        showButton->setObjectName(QStringLiteral("showButton"));
        sizePolicy1.setHeightForWidth(showButton->sizePolicy().hasHeightForWidth());
        showButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(showButton, 5, 2, 1, 1);

        okButton = new QPushButton(PluginRunner);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 5, 3, 1, 1);

        progressBar = new QProgressBar(PluginRunner);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy3);
        progressBar->setMaximum(0);
        progressBar->setValue(-1);
        progressBar->setTextVisible(false);

        gridLayout->addWidget(progressBar, 1, 0, 1, 1);

        statusLbl = new QLabel(PluginRunner);
        statusLbl->setObjectName(QStringLiteral("statusLbl"));

        gridLayout->addWidget(statusLbl, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(PluginRunner);

        QMetaObject::connectSlotsByName(PluginRunner);
    } // setupUi

    void retranslateUi(QDialog *PluginRunner)
    {
        PluginRunner->setWindowTitle(QApplication::translate("PluginRunner", "Plugin Runner", 0));
        label->setText(QApplication::translate("PluginRunner", "Plugin:", 0));
        nameLbl->setText(QString());
        startButton->setText(QApplication::translate("PluginRunner", "Start", 0));
        cancelButton->setText(QApplication::translate("PluginRunner", "Cancel", 0));
        textEdit->setPlaceholderText(QApplication::translate("PluginRunner", "Message", 0));
        showButton->setText(QApplication::translate("PluginRunner", "Details...", 0));
        okButton->setText(QApplication::translate("PluginRunner", "OK", 0));
        statusLbl->setText(QApplication::translate("PluginRunner", "Status: ", 0));
    } // retranslateUi

};

namespace Ui {
    class PluginRunner: public Ui_PluginRunner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINRUNNER_H
