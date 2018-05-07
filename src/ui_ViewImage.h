/********************************************************************************
** Form generated from reading UI file 'ViewImage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWIMAGE_H
#define UI_VIEWIMAGE_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ViewImage
{
public:
    QVBoxLayout *layout;
    QWebView *webView;

    void setupUi(QDialog *ViewImage)
    {
        if (ViewImage->objectName().isEmpty())
            ViewImage->setObjectName(QStringLiteral("ViewImage"));
        ViewImage->resize(600, 800);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ViewImage->sizePolicy().hasHeightForWidth());
        ViewImage->setSizePolicy(sizePolicy);
        layout = new QVBoxLayout(ViewImage);
        layout->setObjectName(QStringLiteral("layout"));
        webView = new QWebView(ViewImage);
        webView->setObjectName(QStringLiteral("webView"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(webView->sizePolicy().hasHeightForWidth());
        webView->setSizePolicy(sizePolicy1);
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        layout->addWidget(webView);


        retranslateUi(ViewImage);

        QMetaObject::connectSlotsByName(ViewImage);
    } // setupUi

    void retranslateUi(QDialog *ViewImage)
    {
        ViewImage->setWindowTitle(QApplication::translate("ViewImage", "View Image", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewImage: public Ui_ViewImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWIMAGE_H
