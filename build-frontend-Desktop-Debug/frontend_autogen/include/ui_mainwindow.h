/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionopen;
    QAction *actionsave;
    QAction *actiondocs;
    QAction *actioncolor_scheme;
    QWidget *centralwidget;
    QLabel *label1;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pu1;
    QPushButton *pushButton_3;
    QPushButton *pu2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menufile;
    QMenu *menuView;
    QMenu *menuHelp;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        MainWindow->setMinimumSize(QSize(1920, 1000));
        MainWindow->setMaximumSize(QSize(1920, 1080));
        QFont font;
        font.setFamily(QString::fromUtf8("Space Mono"));
        font.setPointSize(16);
        MainWindow->setFont(font);
        MainWindow->setMouseTracking(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:#f1956e\n"
"}\n"
"QPushButton{\n"
"\n"
"  border: none;\n"
"  color: white;\n"
"  padding: 15px 32px;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  display: inline-block;\n"
"  font-size: 16px;\n"
"  margin: 4px 2px;\n"
"  cursor: pointer;\n"
"  background-color:  qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.370968 rgba(110, 14, 178, 255), stop:1 rgba(5, 32, 132, 255)); \n"
"  color: #F8EFB6; \n"
"  border: 2px solid #D77067;\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"\n"
"QMenuBar {\n"
"background-color: #D77067;\n"
"border: 1px solid #1c0b4a;\n"
"\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"color :#48283D ;\n"
"margin-top:3px;\n"
"margin-bottom:3px;\n"
"spacing: 3px;\n"
"padding: 0px 10px 1px;\n"
"background:#D09C8E;\n"
"border-radius: 3px;\n"
"border: 2px solid #D77067;\n"
"}\n"
"\n"
"QMenuBar::item:hover {\n"
"background: blue;\n"
"color:red;\n"
"}\n"
"QLabel#label1 {\n"
"border: 2px solid rgb(3, 3, 70);\n"
"}\n"
"QLabel#label {\n"
"color:rgb(31, 4, 70);\n"
""
                        "}\n"
"QLabel#label_2{\n"
"color:rgb(31, 4, 70);\n"
"}\n"
"QLabel#label_3{\n"
"color:rgb(31, 4, 70);\n"
"}"));
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/open1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionopen->setIcon(icon);
        actionsave = new QAction(MainWindow);
        actionsave->setObjectName(QString::fromUtf8("actionsave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/assets/dw1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionsave->setIcon(icon1);
        actiondocs = new QAction(MainWindow);
        actiondocs->setObjectName(QString::fromUtf8("actiondocs"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/assets/docs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiondocs->setIcon(icon2);
        actioncolor_scheme = new QAction(MainWindow);
        actioncolor_scheme->setObjectName(QString::fromUtf8("actioncolor_scheme"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        label1 = new QLabel(centralwidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(20, 60, 1001, 651));
        label1->setCursor(QCursor(Qt::ForbiddenCursor));
        label1->setScaledContents(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1090, 230, 261, 341));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pu1 = new QPushButton(layoutWidget);
        pu1->setObjectName(QString::fromUtf8("pu1"));
        pu1->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(pu1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pu2 = new QPushButton(layoutWidget);
        pu2->setObjectName(QString::fromUtf8("pu2"));
        pu2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(pu2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1180, 680, 181, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Fira Sans Condensed ExtraBold"));
        font1.setPointSize(27);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        label->setFont(font1);
        label->setCursor(QCursor(Qt::ForbiddenCursor));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1330, 680, 57, 15));
        QFont font2;
        font2.setPointSize(14);
        label_2->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1210, 720, 151, 21));
        QFont font3;
        font3.setPointSize(7);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 28));
        menufile = new QMenu(menubar);
        menufile->setObjectName(QString::fromUtf8("menufile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menufile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menufile->addSeparator();
        menufile->addAction(actionopen);
        menufile->addAction(actionsave);
        menuView->addAction(actioncolor_scheme);
        menuHelp->addAction(actiondocs);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "IMG ++", nullptr));
        actionopen->setText(QCoreApplication::translate("MainWindow", "Open Image", nullptr));
        actionsave->setText(QCoreApplication::translate("MainWindow", "Save Image", nullptr));
        actiondocs->setText(QCoreApplication::translate("MainWindow", "docs", nullptr));
        actioncolor_scheme->setText(QCoreApplication::translate("MainWindow", "color-scheme", nullptr));
        label1->setText(QString());
        pu1->setText(QCoreApplication::translate("MainWindow", "\342\206\250 Flip Vertically", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\342\206\270 Resize", nullptr));
        pu2->setText(QCoreApplication::translate("MainWindow", "\342\207\206 Flip Vertically", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "  \342\232\222  IMG++", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\302\251", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Image-Editing Logistics", nullptr));
        menufile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
