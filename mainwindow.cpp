#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QtCore>
#include <QtGui>
#include <QDebug>
#include <QProcess>
//#include <QProgressBar>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString sourcefile = QFileDialog::getOpenFileName(
                            this,
                            "Select the PDF file that you wanna convert",
                            "/home",
                            "Source File (*.pdf)");
    ui->sourceurl->setText(sourcefile);
    sourceurl = sourcefile;
}


void MainWindow::on_pushButton_3_clicked()
{
    QString destfile = QFileDialog::getSaveFileName(this, tr("Save File"),
                                           "/home/",
                                           tr("Text Format (*.txt)"));
    ui->desturl->setText(destfile);
    desturl = destfile;
}


void MainWindow::on_pushButton_2_clicked()
{

    QString convertcmd = "convert -density 300 "+sourceurl+" -depth 8 "+desturl+".tiff";
    QProcess * exec = new QProcess(this);
//    connect(exec, SIGNAL(readyRead() ), this, SLOT( progress() ) );
    exec->start(convertcmd);
    exec->waitForFinished();
    exec->close();
    qDebug()<<"TIFF Convert command done !";
    QString tiffconv = "Converting...";
    ui->status->setText(tiffconv);
    QString tesseractcmd = "tesseract "+desturl+".tiff "+desturl;
    exec->start(tesseractcmd);
    exec->waitForFinished();
    exec->close();
    qDebug() <<"Tesseract Command done !";
    QString tessconv = "PDF to TXT conversion done !";
    ui->status->setText(tessconv);
    exec->terminate();
    delete exec;
    return;

}
//void MainWindow::progress()
//{
//    QProcess *pr = (QProcess*)sender();
//    ui->progressBar->setValue( pr->readAll().toInt() );
//}
