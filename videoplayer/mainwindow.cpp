#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMovie>
#include <qfiledialog.h>
#include <QMenu>
#include <QMenuBar>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVBoxLayout>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{ 
    ui->setupUi(this);//初始化UI界面
    player->setVideoOutput(ui->videowidget); //将视频输出到videowidget的界面上

    connect(player,SIGNAL(durationChanged(qint64)),this,SLOT(onPlayerdurationChange(qint64)));
    connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(onPlayerPositionChange(qint64)));
    connect(ui->horizontalSlider,SIGNAL(sliderMoved(int)),this,SLOT(onsildermove(int)));
    connect(ui->voicehorizontalSlider,SIGNAL(sliderMoved(int)),this,SLOT(volumchange()));
    connect(ui->voicehorizontalSlider,SIGNAL(valueChanged(int)),this,SLOT(volumchange()));


}
MainWindow::~MainWindow()
{
    delete ui;
}
//进度条
void MainWindow::onPlayerdurationChange(qint64 duration)
{
    ui->horizontalSlider->setMaximum(duration);   //将进度条设置为视频长度的大小
}
void MainWindow::onPlayerPositionChange(qint64 position)
{
    ui->horizontalSlider->setValue(position);   //根据视频位置改变进度条位置
}
void MainWindow::onsildermove(int value)  //拖动滑块改变视频位置
{
    player->setPosition(value);
}
void MainWindow::volumchange()    //根据滑块改变视频音量
{
    player->setVolume(ui->voicehorizontalSlider->value());
}
void MainWindow::on_openfile_triggered()
{
    QString filename=QFileDialog::getOpenFileName(this); //获取本地的文件
    player->setMedia(QUrl::fromLocalFile(filename));
    ui->voicehorizontalSlider->setValue(50);
    player->setVolume(ui->voicehorizontalSlider->value());
    player->play();
    playbtnstate();
}

void MainWindow::on_exit_triggered()
{
    close();
}
void MainWindow::playbtnstate()  //监测视频播放状态
{
    if(player->state()==QMediaPlayer::PlayingState)
    {
        QPixmap img("E:/qt/qtproject/ImageShow/img/pause.png");
        ui->playbtn->setIcon(img);
    }
    else
    {
        QPixmap img("E:/qt/qtproject/ImageShow/img/play.png");
        ui->playbtn->setIcon(img);
    }
}
void MainWindow::on_playbtn_clicked()
{
    if(player->state()==QMediaPlayer::PlayingState)
    {
        player->pause();
        playbtnstate();
    }
    else
    {
        player->play();
        playbtnstate();
    }
}
void MainWindow::on_bigbtn_clicked()
{

    if(this->isFullScreen())
    {
        showNormal();  // 设置窗口大小为正常大小
    }
    else
    {
        showFullScreen(); //设置窗口大小为全屏
    }
}


void MainWindow::on_gobtn_clicked()
{

    int value=ui->horizontalSlider->value();
    player->setPosition(value+3000);
    player->play();

}

void MainWindow::on_backbtn_clicked()
{
    int value=ui->horizontalSlider->value();
    player->setPosition(value-3000);
    player->play();

}

void MainWindow::on_volumnBtn_clicked()
{
    if(ui->voicehorizontalSlider->value()!=0)
    {
        ui->volumnBtn->setIcon(QPixmap("E:/qt/qtproject/ImageShow/img/jingyin.png"));
        currentvolume=ui->voicehorizontalSlider->value();
        ui->voicehorizontalSlider->setValue(0);
    }
    else
    {
         ui->volumnBtn->setIcon(QPixmap("E:/qt/qtproject/ImageShow/img/shengyin.png"));
         ui->voicehorizontalSlider->setValue(currentvolume);
    }
}
