/********************************************************************************
** Form generated from reading UI file 'About.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *logo;
    QLabel *subtitle;
    QTabWidget *tabWidget;
    QWidget *generalTab;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *lbHomepage;
    QLabel *lbHomepageDisplay;
    QLabel *lbVersion;
    QLabel *lbVersionDisplay;
    QLabel *lbLoadedQt;
    QLabel *lbLoadedQtDisplay;
    QLabel *lbLicenseDisplay;
    QLabel *lbBuildTime;
    QLabel *lbBuildTimeDisplay;
    QLabel *lbLicense;
    QWidget *authorsTab;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *creditsDisplay;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(332, 309);
        verticalLayout = new QVBoxLayout(About);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        logo = new QLabel(About);
        logo->setObjectName(QStringLiteral("logo"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setMaximumSize(QSize(16777215, 80));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/about/Sigil_logo.png")));
        logo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(logo);

        subtitle = new QLabel(About);
        subtitle->setObjectName(QStringLiteral("subtitle"));
        subtitle->setMinimumSize(QSize(0, 32));
        QFont font;
        font.setPointSize(14);
        subtitle->setFont(font);
        subtitle->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(subtitle);

        tabWidget = new QTabWidget(About);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        generalTab = new QWidget();
        generalTab->setObjectName(QStringLiteral("generalTab"));
        verticalLayout_2 = new QVBoxLayout(generalTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        lbHomepage = new QLabel(generalTab);
        lbHomepage->setObjectName(QStringLiteral("lbHomepage"));
        QFont font1;
        font1.setPointSize(10);
        lbHomepage->setFont(font1);

        gridLayout->addWidget(lbHomepage, 0, 0, 1, 1);

        lbHomepageDisplay = new QLabel(generalTab);
        lbHomepageDisplay->setObjectName(QStringLiteral("lbHomepageDisplay"));
        lbHomepageDisplay->setFont(font1);
        lbHomepageDisplay->setText(QStringLiteral("<a href=\"http://code.google.com/p/sigil/\">http://code.google.com/p/sigil/</a>"));
        lbHomepageDisplay->setTextFormat(Qt::AutoText);
        lbHomepageDisplay->setIndent(5);
        lbHomepageDisplay->setOpenExternalLinks(true);
        lbHomepageDisplay->setTextInteractionFlags(Qt::TextBrowserInteraction);

        gridLayout->addWidget(lbHomepageDisplay, 0, 1, 1, 1);

        lbVersion = new QLabel(generalTab);
        lbVersion->setObjectName(QStringLiteral("lbVersion"));
        lbVersion->setFont(font1);

        gridLayout->addWidget(lbVersion, 2, 0, 1, 1);

        lbVersionDisplay = new QLabel(generalTab);
        lbVersionDisplay->setObjectName(QStringLiteral("lbVersionDisplay"));
        lbVersionDisplay->setFont(font1);
        lbVersionDisplay->setText(QStringLiteral("VERSION HERE"));
        lbVersionDisplay->setIndent(5);

        gridLayout->addWidget(lbVersionDisplay, 2, 1, 1, 1);

        lbLoadedQt = new QLabel(generalTab);
        lbLoadedQt->setObjectName(QStringLiteral("lbLoadedQt"));
        lbLoadedQt->setFont(font1);

        gridLayout->addWidget(lbLoadedQt, 3, 0, 1, 1);

        lbLoadedQtDisplay = new QLabel(generalTab);
        lbLoadedQtDisplay->setObjectName(QStringLiteral("lbLoadedQtDisplay"));
        lbLoadedQtDisplay->setFont(font1);
        lbLoadedQtDisplay->setCursor(QCursor(Qt::ArrowCursor));
        lbLoadedQtDisplay->setText(QStringLiteral("LOADED QT VERSION HERE"));
        lbLoadedQtDisplay->setIndent(5);

        gridLayout->addWidget(lbLoadedQtDisplay, 3, 1, 1, 1);

        lbLicenseDisplay = new QLabel(generalTab);
        lbLicenseDisplay->setObjectName(QStringLiteral("lbLicenseDisplay"));
        lbLicenseDisplay->setFont(font1);
        lbLicenseDisplay->setIndent(5);
        lbLicenseDisplay->setOpenExternalLinks(true);

        gridLayout->addWidget(lbLicenseDisplay, 1, 1, 1, 1);

        lbBuildTime = new QLabel(generalTab);
        lbBuildTime->setObjectName(QStringLiteral("lbBuildTime"));
        lbBuildTime->setFont(font1);

        gridLayout->addWidget(lbBuildTime, 4, 0, 1, 1);

        lbBuildTimeDisplay = new QLabel(generalTab);
        lbBuildTimeDisplay->setObjectName(QStringLiteral("lbBuildTimeDisplay"));
        lbBuildTimeDisplay->setFont(font1);
        lbBuildTimeDisplay->setText(QStringLiteral("BUILD TIME HERE"));
        lbBuildTimeDisplay->setIndent(5);

        gridLayout->addWidget(lbBuildTimeDisplay, 4, 1, 1, 1);

        lbLicense = new QLabel(generalTab);
        lbLicense->setObjectName(QStringLiteral("lbLicense"));
        lbLicense->setFont(font1);

        gridLayout->addWidget(lbLicense, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        tabWidget->addTab(generalTab, QString());
        authorsTab = new QWidget();
        authorsTab->setObjectName(QStringLiteral("authorsTab"));
        verticalLayout_3 = new QVBoxLayout(authorsTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        creditsDisplay = new QTextEdit(authorsTab);
        creditsDisplay->setObjectName(QStringLiteral("creditsDisplay"));

        verticalLayout_3->addWidget(creditsDisplay);

        tabWidget->addTab(authorsTab, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(About);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(About);
        QObject::connect(buttonBox, SIGNAL(accepted()), About, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), About, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "About", 0));
        logo->setText(QString());
        subtitle->setText(QApplication::translate("About", "The EPUB Editor", 0));
        lbHomepage->setText(QApplication::translate("About", "Homepage:", 0));
        lbVersion->setText(QApplication::translate("About", "Version:", 0));
        lbLoadedQt->setText(QApplication::translate("About", "Loaded Qt:", 0));
        lbLicenseDisplay->setText(QApplication::translate("About", "<a href=\"http://www.gnu.org/licenses/gpl-3.0-standalone.html\">GNU General Public License v3</a>", 0));
        lbBuildTime->setText(QApplication::translate("About", "Build time:", 0));
        lbLicense->setText(QApplication::translate("About", "License:", 0));
        tabWidget->setTabText(tabWidget->indexOf(generalTab), QApplication::translate("About", "General", 0));
        tabWidget->setTabText(tabWidget->indexOf(authorsTab), QApplication::translate("About", "Authors", 0));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
