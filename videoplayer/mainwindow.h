#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMediaPlayer>
#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_openfile_triggered();

    void on_exit_triggered();

    void on_playbtn_clicked();

    void on_bigbtn_clicked();

    void playbtnstate();

    //改变进度条
    void onPlayerdurationChange(qint64 duration);

    void onPlayerPositionChange(qint64 position);

    void onsildermove(int value);

    void on_gobtn_clicked();

    void on_backbtn_clicked();

    void volumchange();

    void on_volumnBtn_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player=new QMediaPlayer();
    int currentvolume;

};
#endif // MAINWINDOW_H
