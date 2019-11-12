#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <stdio.h>
#include <QMessageBox>
#include <QCamera>
#include <QtDebug>
#include <QMainWindow>
#include <QPixmap>
#include <QObject>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>


using namespace std;
using namespace cv;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    QCamera *mCamera = new QCamera(this);




//    VideoCapture cap(0);
//    if(!cap.isOpened()){
//        qDebug() << "ERROR: Could not open camera";
//        }
//    namedWindow("Webcam",WINDOW_AUTOSIZE);
//    while(1) {
//        Mat frame;
//        cap >> frame;
//        imshow("Webcam", frame);
//        if(cv::waitKey(30) >= 0){
//           cap.release();
//           break;
//        }
//    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


