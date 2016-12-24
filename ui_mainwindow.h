/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionImport;
    QAction *actionExport;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLineEdit *sourceurl;
    QPushButton *pushButton_2;
    QLineEdit *desturl;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *status;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(504, 350);
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName(QStringLiteral("actionImport"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(370, 60, 80, 22));
        sourceurl = new QLineEdit(centralWidget);
        sourceurl->setObjectName(QStringLiteral("sourceurl"));
        sourceurl->setGeometry(QRect(60, 60, 271, 22));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 240, 80, 22));
        desturl = new QLineEdit(centralWidget);
        desturl->setObjectName(QStringLiteral("desturl"));
        desturl->setGeometry(QRect(60, 160, 271, 22));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 160, 80, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 30, 241, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 120, 261, 16));
        status = new QLabel(centralWidget);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(120, 270, 261, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 504, 19));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionImport);
        menuFile->addAction(actionExport);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), sourceurl, SLOT(update()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PDF to TXT GUI Converter", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionImport->setText(QApplication::translate("MainWindow", "Import", 0));
        actionExport->setText(QApplication::translate("MainWindow", "Export", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Browse", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Convert", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Save As", 0));
        label->setText(QApplication::translate("MainWindow", "Please browse your source PDF file :", 0));
        label_2->setText(QApplication::translate("MainWindow", "Now, select the filename to be saved as :", 0));
        status->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
