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
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QCustomPlot *pidPlot;
    QGroupBox *groupBox_4;
    QTextBrowser *textBrowser;
    QLabel *label_11;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QComboBox *serialComboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QComboBox *baudComboBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QComboBox *sizeComboBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QComboBox *parityComboBox;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *posLineEdit;
    QLineEdit *velLineEdit;
    QLineEdit *accLineEdit;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *runButton;
    QVBoxLayout *verticalLayout_4;
    QPushButton *senparamsButton;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_9;
    QPushButton *openButton;
    QPushButton *closeButton;
    QTabWidget *tabWidget;
    QWidget *serialTab;
    QGraphicsView *imageView;
    QWidget *genTab;
    QLabel *label_12;
    QComboBox *formatCombobox;
    QPushButton *generateButton;
    QPushButton *exportButton;
    QGraphicsView *qrView;
    QTextEdit *datainputTextEdit;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *kpEdit;
    QLineEdit *kiEdit;
    QLineEdit *kdEdit;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_7;
    QPushButton *sendpidButton;
    QPushButton *tunningButton;
    QPushButton *requestButton;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_10;
    QPushButton *infoButton;
    QPushButton *openCamButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1454, 803);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 340, 551, 411));
        pidPlot = new QCustomPlot(groupBox_2);
        pidPlot->setObjectName(QString::fromUtf8("pidPlot"));
        pidPlot->setGeometry(QRect(10, 30, 531, 371));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(570, 510, 541, 241));
        textBrowser = new QTextBrowser(groupBox_4);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 30, 521, 201));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 570, 161, 141));
        label_11->setPixmap(QPixmap(QString::fromUtf8("C:/media/vienchau/DATA/MY_WORK/tai_lieu/logo/Logo BK.png")));
        label_11->setScaledContents(true);
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 211, 241));
        layoutWidget_5 = new QWidget(groupBox_5);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 20, 191, 211));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(layoutWidget_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        serialComboBox = new QComboBox(layoutWidget_5);
        serialComboBox->setObjectName(QString::fromUtf8("serialComboBox"));

        horizontalLayout_4->addWidget(serialComboBox);


        verticalLayout_8->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(layoutWidget_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        baudComboBox = new QComboBox(layoutWidget_5);
        baudComboBox->setObjectName(QString::fromUtf8("baudComboBox"));

        horizontalLayout_5->addWidget(baudComboBox);


        verticalLayout_8->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(layoutWidget_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_6->addWidget(label_9);

        sizeComboBox = new QComboBox(layoutWidget_5);
        sizeComboBox->setObjectName(QString::fromUtf8("sizeComboBox"));

        horizontalLayout_6->addWidget(sizeComboBox);


        verticalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_10 = new QLabel(layoutWidget_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_7->addWidget(label_10);

        parityComboBox = new QComboBox(layoutWidget_5);
        parityComboBox->setObjectName(QString::fromUtf8("parityComboBox"));

        horizontalLayout_7->addWidget(parityComboBox);


        verticalLayout_8->addLayout(horizontalLayout_7);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(230, 10, 331, 161));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 311, 88));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        posLineEdit = new QLineEdit(layoutWidget);
        posLineEdit->setObjectName(QString::fromUtf8("posLineEdit"));

        verticalLayout->addWidget(posLineEdit);

        velLineEdit = new QLineEdit(layoutWidget);
        velLineEdit->setObjectName(QString::fromUtf8("velLineEdit"));

        verticalLayout->addWidget(velLineEdit);

        accLineEdit = new QLineEdit(layoutWidget);
        accLineEdit->setObjectName(QString::fromUtf8("accLineEdit"));

        verticalLayout->addWidget(accLineEdit);


        horizontalLayout->addLayout(verticalLayout);

        layoutWidget_4 = new QWidget(groupBox_3);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 110, 311, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        runButton = new QPushButton(layoutWidget_4);
        runButton->setObjectName(QString::fromUtf8("runButton"));

        verticalLayout_3->addWidget(runButton);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        senparamsButton = new QPushButton(layoutWidget_4);
        senparamsButton->setObjectName(QString::fromUtf8("senparamsButton"));

        verticalLayout_4->addWidget(senparamsButton);


        horizontalLayout_2->addLayout(verticalLayout_4);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 250, 211, 58));
        verticalLayout_9 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        openButton = new QPushButton(layoutWidget_2);
        openButton->setObjectName(QString::fromUtf8("openButton"));

        verticalLayout_9->addWidget(openButton);

        closeButton = new QPushButton(layoutWidget_2);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        verticalLayout_9->addWidget(closeButton);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(580, 10, 811, 491));
        serialTab = new QWidget();
        serialTab->setObjectName(QString::fromUtf8("serialTab"));
        imageView = new QGraphicsView(serialTab);
        imageView->setObjectName(QString::fromUtf8("imageView"));
        imageView->setGeometry(QRect(10, 10, 781, 441));
        tabWidget->addTab(serialTab, QString());
        genTab = new QWidget();
        genTab->setObjectName(QString::fromUtf8("genTab"));
        label_12 = new QLabel(genTab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 10, 121, 31));
        QFont font;
        font.setPointSize(12);
        label_12->setFont(font);
        formatCombobox = new QComboBox(genTab);
        formatCombobox->setObjectName(QString::fromUtf8("formatCombobox"));
        formatCombobox->setGeometry(QRect(10, 230, 341, 22));
        generateButton = new QPushButton(genTab);
        generateButton->setObjectName(QString::fromUtf8("generateButton"));
        generateButton->setGeometry(QRect(10, 260, 141, 41));
        exportButton = new QPushButton(genTab);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));
        exportButton->setGeometry(QRect(370, 230, 191, 31));
        qrView = new QGraphicsView(genTab);
        qrView->setObjectName(QString::fromUtf8("qrView"));
        qrView->setGeometry(QRect(370, 40, 191, 181));
        datainputTextEdit = new QTextEdit(genTab);
        datainputTextEdit->setObjectName(QString::fromUtf8("datainputTextEdit"));
        datainputTextEdit->setGeometry(QRect(10, 40, 331, 181));
        tabWidget->addTab(genTab, QString());
        groupBox_7 = new QGroupBox(centralwidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(230, 170, 331, 151));
        layoutWidget_3 = new QWidget(groupBox_7);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 20, 211, 121));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_6->addWidget(label_4);

        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_6->addWidget(label_5);

        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        kpEdit = new QLineEdit(layoutWidget_3);
        kpEdit->setObjectName(QString::fromUtf8("kpEdit"));

        verticalLayout_5->addWidget(kpEdit);

        kiEdit = new QLineEdit(layoutWidget_3);
        kiEdit->setObjectName(QString::fromUtf8("kiEdit"));

        verticalLayout_5->addWidget(kiEdit);

        kdEdit = new QLineEdit(layoutWidget_3);
        kdEdit->setObjectName(QString::fromUtf8("kdEdit"));

        verticalLayout_5->addWidget(kdEdit);


        horizontalLayout_3->addLayout(verticalLayout_5);

        layoutWidget_6 = new QWidget(groupBox_7);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(240, 20, 82, 121));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        sendpidButton = new QPushButton(layoutWidget_6);
        sendpidButton->setObjectName(QString::fromUtf8("sendpidButton"));

        verticalLayout_7->addWidget(sendpidButton);

        tunningButton = new QPushButton(layoutWidget_6);
        tunningButton->setObjectName(QString::fromUtf8("tunningButton"));

        verticalLayout_7->addWidget(tunningButton);

        requestButton = new QPushButton(layoutWidget_6);
        requestButton->setObjectName(QString::fromUtf8("requestButton"));

        verticalLayout_7->addWidget(requestButton);

        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(1120, 510, 251, 111));
        layoutWidget_7 = new QWidget(groupBox_6);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 30, 231, 61));
        verticalLayout_10 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        infoButton = new QPushButton(layoutWidget_7);
        infoButton->setObjectName(QString::fromUtf8("infoButton"));

        verticalLayout_10->addWidget(infoButton);

        openCamButton = new QPushButton(layoutWidget_7);
        openCamButton->setObjectName(QString::fromUtf8("openCamButton"));

        verticalLayout_10->addWidget(openCamButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1454, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "PID Tunning Graph", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Received Data", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Serial Port", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "COM", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "BaudRate", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "DataSize", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Parity", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Control Parameters", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Position", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Velocity", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Accelometer", nullptr));
        runButton->setText(QCoreApplication::translate("MainWindow", "RUN", nullptr));
        senparamsButton->setText(QCoreApplication::translate("MainWindow", "SEND PARAMS", nullptr));
        openButton->setText(QCoreApplication::translate("MainWindow", "OPEN", nullptr));
        closeButton->setText(QCoreApplication::translate("MainWindow", "CLOSE", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(serialTab), QCoreApplication::translate("MainWindow", "QR Scanner", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Input Code:", nullptr));
        generateButton->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
        exportButton->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(genTab), QCoreApplication::translate("MainWindow", "QR Generate", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "PID Tunning", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Kp", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Ki", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Kd", nullptr));
        sendpidButton->setText(QCoreApplication::translate("MainWindow", "SEND", nullptr));
        tunningButton->setText(QCoreApplication::translate("MainWindow", "TUNING", nullptr));
        requestButton->setText(QCoreApplication::translate("MainWindow", "REQUEST", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Camera", nullptr));
        infoButton->setText(QCoreApplication::translate("MainWindow", "Camera Info", nullptr));
        openCamButton->setText(QCoreApplication::translate("MainWindow", "Open Camera", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
