#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "capturethread.h"
#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>

#include <QPushButton>
#include <QTextBrowser>
#include <QListView>
#include <QStandardItemModel>
#include <QStatusBar>
#include <QLabel>
#include <QMutex>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>
#include <QThread>
#include <QScrollBar>
#include <QTextEdit>
#include <QMessageBox>

#include <sstream>
#include <iostream>
#include <boost/format.hpp>

#include <opencv2/core.hpp>
#include <zbar.h>
#include <capturethread.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <QCameraInfo>
#include <QCamera>

#include <opencv2/core.hpp>
#include <cstring>

#include "qcustomplot.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>
#include <cstring>
#include <QVector>


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

    void updateFrame(cv::Mat *mat);

    void serialport_read();

    void on_openButton_clicked();

    void on_closeButton_clicked();

    void on_runButton_clicked();

    void on_senparamsButton_clicked();

    void on_sendpidButton_clicked();

    void on_tunningButton_clicked();

    void on_requestButton_clicked();

    void on_infoButton_clicked();

    void on_openCamButton_clicked();
    void on_generateButton_clicked();

    void on_exportButton_clicked();

private:
           void updateSerialPort();
           void initUI();
           QSerialPort *mSerial;
           QList <QSerialPortInfo> mSerialPorts;
           QTimer *mSerialScanTimer;

           QGraphicsScene *imageScene;

           QStatusBar *mainStatusBar;
           QLabel *mainStatusLabel;


           void configAllButton(bool status);
           void plotConfig();
           void dataPIDProcessing(QByteArray &bdata, float * fKp, float *fKi, float *fKd);
           void Ascii2int(int *a, int *b, int *c, int *d);
           void AsciiConvertCase(int *a);
           void plotSetting(QCustomPlot  *plot, const char* xLabel, const char * yLabel);

           QMutex *data_lock;
           CaptureThread *capturer;
           cv::Mat currentFrame;

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
