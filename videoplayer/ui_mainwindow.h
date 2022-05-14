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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
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
    QGridLayout *gridLayout;
    QVideoWidget *videowidget;
    QHBoxLayout *horizontalLayout_4;
    QSlider *horizontalSlider;
    QPushButton *bigbtn;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backbtn;
    QPushButton *playbtn;
    QPushButton *gobtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *volumnBtn;
    QSlider *voicehorizontalSlider;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(725, 549);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(500, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/vedio.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"#backbtn:hover\n"
"{\n"
"	background:rgb(225, 225, 225);\n"
"}\n"
"#playbtn:hover\n"
"{\n"
"	background:rgb(225, 225, 225);\n"
"}\n"
"#gobtn:hover\n"
"{\n"
"	background:rgb(225, 225, 225);\n"
"}\n"
"#bigbtn:hover\n"
"{\n"
"	background:rgb(225, 225, 225);\n"
"}\n"
"#volumnBtn:hover\n"
"{\n"
"	background:rgb(225, 225, 225);\n"
"}"));
        MainWindow->setDocumentMode(false);
        MainWindow->setDockNestingEnabled(false);
        openfile = new QAction(MainWindow);
        openfile->setObjectName(QString::fromUtf8("openfile"));
        exit = new QAction(MainWindow);
        exit->setObjectName(QString::fromUtf8("exit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        videowidget = new QVideoWidget(centralwidget);
        videowidget->setObjectName(QString::fromUtf8("videowidget"));
        sizePolicy1.setHeightForWidth(videowidget->sizePolicy().hasHeightForWidth());
        videowidget->setSizePolicy(sizePolicy1);
        videowidget->setMouseTracking(false);
        videowidget->setFocusPolicy(Qt::NoFocus);
        videowidget->setAutoFillBackground(false);
        videowidget->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        videowidget->setInputMethodHints(Qt::ImhNone);

        gridLayout->addWidget(videowidget, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        sizePolicy1.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy1);
        horizontalSlider->setMaximumSize(QSize(16777215, 30));
        horizontalSlider->setMouseTracking(true);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        horizontalSlider->setInvertedControls(false);

        horizontalLayout_4->addWidget(horizontalSlider);

        bigbtn = new QPushButton(centralwidget);
        bigbtn->setObjectName(QString::fromUtf8("bigbtn"));
        bigbtn->setEnabled(true);
        sizePolicy1.setHeightForWidth(bigbtn->sizePolicy().hasHeightForWidth());
        bigbtn->setSizePolicy(sizePolicy1);
        bigbtn->setMinimumSize(QSize(40, 40));
        bigbtn->setMaximumSize(QSize(40, 40));
        bigbtn->setStyleSheet(QString::fromUtf8("border-radius:25px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("img/quanping.png"), QSize(), QIcon::Normal, QIcon::Off);
        bigbtn->setIcon(icon1);
        bigbtn->setIconSize(QSize(40, 40));

        horizontalLayout_4->addWidget(bigbtn);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        backbtn = new QPushButton(centralwidget);
        backbtn->setObjectName(QString::fromUtf8("backbtn"));
        sizePolicy1.setHeightForWidth(backbtn->sizePolicy().hasHeightForWidth());
        backbtn->setSizePolicy(sizePolicy1);
        backbtn->setMinimumSize(QSize(40, 40));
        backbtn->setMaximumSize(QSize(40, 40));
        backbtn->setBaseSize(QSize(40, 40));
        backbtn->setStyleSheet(QString::fromUtf8("border-radius:25px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("img/backwardfill.png"), QSize(), QIcon::Normal, QIcon::Off);
        backbtn->setIcon(icon2);
        backbtn->setIconSize(QSize(40, 40));
        backbtn->setAutoRepeatInterval(100);

        horizontalLayout_2->addWidget(backbtn);

        playbtn = new QPushButton(centralwidget);
        playbtn->setObjectName(QString::fromUtf8("playbtn"));
        sizePolicy1.setHeightForWidth(playbtn->sizePolicy().hasHeightForWidth());
        playbtn->setSizePolicy(sizePolicy1);
        playbtn->setMinimumSize(QSize(40, 40));
        playbtn->setMaximumSize(QSize(40, 40));
        QFont font;
        font.setStrikeOut(false);
        playbtn->setFont(font);
        playbtn->setAcceptDrops(false);
        playbtn->setAutoFillBackground(false);
        playbtn->setStyleSheet(QString::fromUtf8("border-radius:25px;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("img/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        playbtn->setIcon(icon3);
        playbtn->setIconSize(QSize(40, 40));
        playbtn->setCheckable(false);
        playbtn->setAutoRepeat(false);
        playbtn->setAutoExclusive(false);

        horizontalLayout_2->addWidget(playbtn);

        gobtn = new QPushButton(centralwidget);
        gobtn->setObjectName(QString::fromUtf8("gobtn"));
        sizePolicy1.setHeightForWidth(gobtn->sizePolicy().hasHeightForWidth());
        gobtn->setSizePolicy(sizePolicy1);
        gobtn->setMinimumSize(QSize(40, 40));
        gobtn->setMaximumSize(QSize(40, 40));
        gobtn->setStyleSheet(QString::fromUtf8("border-radius:25px;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("img/play_forward_fill.png"), QSize(), QIcon::Normal, QIcon::Off);
        gobtn->setIcon(icon4);
        gobtn->setIconSize(QSize(40, 40));

        horizontalLayout_2->addWidget(gobtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        volumnBtn = new QPushButton(centralwidget);
        volumnBtn->setObjectName(QString::fromUtf8("volumnBtn"));
        volumnBtn->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(volumnBtn->sizePolicy().hasHeightForWidth());
        volumnBtn->setSizePolicy(sizePolicy2);
        volumnBtn->setMinimumSize(QSize(20, 20));
        volumnBtn->setSizeIncrement(QSize(36, 40));
        volumnBtn->setBaseSize(QSize(20, 20));
        volumnBtn->setStyleSheet(QString::fromUtf8("border-radius:25px;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("C:/Users/27146/Downloads/\345\243\260\351\237\263 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        volumnBtn->setIcon(icon5);
        volumnBtn->setIconSize(QSize(25, 25));

        horizontalLayout_2->addWidget(volumnBtn);

        voicehorizontalSlider = new QSlider(centralwidget);
        voicehorizontalSlider->setObjectName(QString::fromUtf8("voicehorizontalSlider"));
        voicehorizontalSlider->setEnabled(true);
        voicehorizontalSlider->setMaximumSize(QSize(100, 20));
        voicehorizontalSlider->setMaximum(99);
        voicehorizontalSlider->setSingleStep(1);
        voicehorizontalSlider->setPageStep(10);
        voicehorizontalSlider->setValue(0);
        voicehorizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(voicehorizontalSlider);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 725, 26));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::PreferDefault);
        menubar->setFont(font1);
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\211\233\351\200\274\347\232\204\346\222\255\346\224\276\345\231\250", nullptr));
#if QT_CONFIG(accessibility)
        MainWindow->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        openfile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        bigbtn->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\350\256\276\347\275\256</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        bigbtn->setText(QString());
#if QT_CONFIG(tooltip)
        backbtn->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\345\277\253\350\277\233</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        backbtn->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\345\277\253\350\277\233</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        backbtn->setText(QString());
#if QT_CONFIG(tooltip)
        playbtn->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        playbtn->setText(QString());
#if QT_CONFIG(tooltip)
        gobtn->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\345\220\216\351\200\200</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        gobtn->setText(QString());
        volumnBtn->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
