/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <qvideowidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *openfile;
    QAction *exit;
    QWidget *centralwidget;
    QVideoWidget *videowidget;
    QSlider *horizontalSlider;
    QPushButton *bigbtn;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *gobtn;
    QPushButton *playbtn;
    QPushButton *backbtn;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(889, 625);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setDockNestingEnabled(false);
        openfile = new QAction(MainWindow);
        openfile->setObjectName(QString::fromUtf8("openfile"));
        exit = new QAction(MainWindow);
        exit->setObjectName(QString::fromUtf8("exit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        videowidget = new QVideoWidget(centralwidget);
        videowidget->setObjectName(QString::fromUtf8("videowidget"));
        videowidget->setGeometry(QRect(10, 0, 881, 401));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(180, 420, 611, 41));
        horizontalSlider->setOrientation(Qt::Horizontal);
        bigbtn = new QPushButton(centralwidget);
        bigbtn->setObjectName(QString::fromUtf8("bigbtn"));
        bigbtn->setEnabled(true);
        bigbtn->setGeometry(QRect(820, 410, 50, 50));
        bigbtn->setMinimumSize(QSize(50, 50));
        bigbtn->setMaximumSize(QSize(50, 50));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 410, 164, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gobtn = new QPushButton(horizontalLayoutWidget);
        gobtn->setObjectName(QString::fromUtf8("gobtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gobtn->sizePolicy().hasHeightForWidth());
        gobtn->setSizePolicy(sizePolicy1);
        gobtn->setMinimumSize(QSize(50, 50));
        gobtn->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(gobtn);

        playbtn = new QPushButton(horizontalLayoutWidget);
        playbtn->setObjectName(QString::fromUtf8("playbtn"));
        sizePolicy1.setHeightForWidth(playbtn->sizePolicy().hasHeightForWidth());
        playbtn->setSizePolicy(sizePolicy1);
        playbtn->setMinimumSize(QSize(50, 50));
        playbtn->setMaximumSize(QSize(50, 50));
        QFont font;
        font.setStrikeOut(false);
        playbtn->setFont(font);
        playbtn->setAcceptDrops(false);
        playbtn->setAutoFillBackground(false);
        playbtn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        playbtn->setIcon(icon);
        playbtn->setIconSize(QSize(50, 50));
        playbtn->setCheckable(false);
        playbtn->setAutoRepeat(false);
        playbtn->setAutoExclusive(false);

        horizontalLayout->addWidget(playbtn);

        backbtn = new QPushButton(horizontalLayoutWidget);
        backbtn->setObjectName(QString::fromUtf8("backbtn"));
        sizePolicy1.setHeightForWidth(backbtn->sizePolicy().hasHeightForWidth());
        backbtn->setSizePolicy(sizePolicy1);
        backbtn->setMinimumSize(QSize(50, 50));
        backbtn->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(backbtn);

        gobtn->raise();
        backbtn->raise();
        playbtn->raise();
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 889, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(openfile);
        menu->addSeparator();
        menu->addAction(exit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "videoplayer", nullptr));
#if QT_CONFIG(accessibility)
        MainWindow->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        openfile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        bigbtn->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\350\256\276\347\275\256</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        bigbtn->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        gobtn->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\345\220\216\351\200\200</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        gobtn->setText(QString());
#if QT_CONFIG(tooltip)
        playbtn->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\346\222\255\346\224\276</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        playbtn->setText(QString());
#if QT_CONFIG(tooltip)
        backbtn->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\345\277\253\350\277\233</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        backbtn->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
