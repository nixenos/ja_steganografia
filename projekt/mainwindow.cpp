#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QInputDialog>
#include <QFileDialog>
#include <QDir>
#include "src/dataStructures.h"
#include "src/logic.h"

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

void MainWindow::on_loadDataFileButton_clicked()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.setNameFilter(tr("All files (*.*)"));
    dialog.setViewMode(QFileDialog::Detail);
    QStringList filenamesTemp;
    if (dialog.exec())
        filenamesTemp = dialog.selectedFiles();
    if (filenamesTemp.size() > 1) {

    } else {
        this->sourceDataFilePath = filenamesTemp[0].toStdString();
        ui->dataFileNameLabel->setText("Source data file location: " + filenamesTemp[0]);
    }
}


void MainWindow::on_loadPhotoButton_clicked()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.setNameFilter(tr("Images (*.bmp)"));
    dialog.setViewMode(QFileDialog::Detail);
    QStringList filenamesTemp;
    if (dialog.exec())
        filenamesTemp = dialog.selectedFiles();
    if (filenamesTemp.size() > 1) {
        return;
    }
    if (filenamesTemp.size() > 0){
        this->sourceImageFilePath = filenamesTemp[0].toStdString();
        ui->photoLocationLabel->setText("Source photo location: " + filenamesTemp[0]);
    } else {
        return;
    }
    this->sourceImageFile = fopen(sourceImageFilePath.c_str(), "rb");
    if(read_headers(sourceImageFile, &sourceImageBMPHeader, &sourceImageDIBHeader, &sourceImageBitFields)==0){
        printf("Błąd odczytu nagłówków z pliku!\n");
        fclose(sourceImageFile);
        return;
    }
}


void MainWindow::on_saveFileButton_clicked()
{
    std::cout << "DEBUG\n";
}

