/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *loadPhotoButton;
    QLabel *photoLocationLabel;
    QLabel *newFileNameLabel;
    QLabel *dataFileNameLabel;
    QPushButton *loadDataFileButton;
    QPushButton *saveFileButton;
    QRadioButton *readFromBMPRadioButton;
    QRadioButton *writeDataToBMPRadioButton;
    QSlider *threadsSlider;
    QLabel *threadsLabel;
    QCheckBox *cAPICheckBox;
    QCheckBox *ASMAPICheckBox;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1017, 389);
        MainWindow->setMinimumSize(QSize(1017, 389));
        MainWindow->setMaximumSize(QSize(1017, 389));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        loadPhotoButton = new QPushButton(centralwidget);
        loadPhotoButton->setObjectName(QString::fromUtf8("loadPhotoButton"));
        loadPhotoButton->setGeometry(QRect(80, 220, 141, 31));
        photoLocationLabel = new QLabel(centralwidget);
        photoLocationLabel->setObjectName(QString::fromUtf8("photoLocationLabel"));
        photoLocationLabel->setGeometry(QRect(20, 180, 271, 23));
        photoLocationLabel->setWordWrap(true);
        newFileNameLabel = new QLabel(centralwidget);
        newFileNameLabel->setObjectName(QString::fromUtf8("newFileNameLabel"));
        newFileNameLabel->setGeometry(QRect(760, 180, 231, 23));
        newFileNameLabel->setWordWrap(true);
        dataFileNameLabel = new QLabel(centralwidget);
        dataFileNameLabel->setObjectName(QString::fromUtf8("dataFileNameLabel"));
        dataFileNameLabel->setGeometry(QRect(410, 180, 211, 23));
        dataFileNameLabel->setWordWrap(true);
        loadDataFileButton = new QPushButton(centralwidget);
        loadDataFileButton->setObjectName(QString::fromUtf8("loadDataFileButton"));
        loadDataFileButton->setEnabled(true);
        loadDataFileButton->setGeometry(QRect(410, 220, 141, 31));
        saveFileButton = new QPushButton(centralwidget);
        saveFileButton->setObjectName(QString::fromUtf8("saveFileButton"));
        saveFileButton->setGeometry(QRect(760, 220, 141, 31));
        readFromBMPRadioButton = new QRadioButton(centralwidget);
        readFromBMPRadioButton->setObjectName(QString::fromUtf8("readFromBMPRadioButton"));
        readFromBMPRadioButton->setGeometry(QRect(410, 280, 271, 29));
        writeDataToBMPRadioButton = new QRadioButton(centralwidget);
        writeDataToBMPRadioButton->setObjectName(QString::fromUtf8("writeDataToBMPRadioButton"));
        writeDataToBMPRadioButton->setGeometry(QRect(410, 310, 261, 29));
        threadsSlider = new QSlider(centralwidget);
        threadsSlider->setObjectName(QString::fromUtf8("threadsSlider"));
        threadsSlider->setGeometry(QRect(60, 110, 191, 16));
        threadsSlider->setOrientation(Qt::Horizontal);
        threadsLabel = new QLabel(centralwidget);
        threadsLabel->setObjectName(QString::fromUtf8("threadsLabel"));
        threadsLabel->setGeometry(QRect(60, 80, 191, 23));
        cAPICheckBox = new QCheckBox(centralwidget);
        cAPICheckBox->setObjectName(QString::fromUtf8("cAPICheckBox"));
        cAPICheckBox->setGeometry(QRect(410, 100, 131, 29));
        ASMAPICheckBox = new QCheckBox(centralwidget);
        ASMAPICheckBox->setObjectName(QString::fromUtf8("ASMAPICheckBox"));
        ASMAPICheckBox->setGeometry(QRect(410, 140, 121, 29));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(560, 100, 171, 23));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(560, 140, 161, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1017, 19));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        loadPhotoButton->setText(QCoreApplication::translate("MainWindow", "Load photo", nullptr));
        photoLocationLabel->setText(QCoreApplication::translate("MainWindow", "Photo location: ", nullptr));
        newFileNameLabel->setText(QCoreApplication::translate("MainWindow", "New file name: ", nullptr));
        dataFileNameLabel->setText(QCoreApplication::translate("MainWindow", "Data file name:", nullptr));
        loadDataFileButton->setText(QCoreApplication::translate("MainWindow", "Load file", nullptr));
        saveFileButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        readFromBMPRadioButton->setText(QCoreApplication::translate("MainWindow", "Read hidden data from BMP file", nullptr));
        writeDataToBMPRadioButton->setText(QCoreApplication::translate("MainWindow", "Save data to BMP file", nullptr));
        threadsLabel->setText(QCoreApplication::translate("MainWindow", "Threads: 1", nullptr));
        cAPICheckBox->setText(QCoreApplication::translate("MainWindow", "Use C++ API", nullptr));
        ASMAPICheckBox->setText(QCoreApplication::translate("MainWindow", "Use ASM API", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Time with C++: ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Time with ASM: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
