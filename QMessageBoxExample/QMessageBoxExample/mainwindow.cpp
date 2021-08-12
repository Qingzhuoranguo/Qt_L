#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QtDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    /*
    types of messages:
    void            about
    void            aboutQt
    StandardButton  critial
    StandardButton  information
    StandardButton  question
    StandardButton  warning
    */
//    QMessageBox::about (this, "My Title", "This is my custom message");      //normal msg
//    QMessageBox::aboutQt(this, "My Title");                                  //qt about
//    QMessageBox::critical(this, "My Title", "This is my custom message");    //critical with an X
//    QMessageBox::information(this, "My Title", "This is the message");
//    QMessageBox::warning(this, "My Title", "This is the message");
      QMessageBox::StandardButton reply =  QMessageBox::question(this,
                                                                 "My Title",
                                                                 "This is the message",
                                                                 QMessageBox::Yes | QMessageBox::No); // 4th option is optional, its value gets returned
      if (reply == QMessageBox::Yes){
          QApplication::quit();
      }else {
        qDebug() << "No is clicked";
      }
}

