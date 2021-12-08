#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <src/logic.h>
#include <iostream>
#include <string>
#include <vector>
#include <QLabel>
#include <src/dataStructures.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_saveFileButton_clicked();
    void on_loadDataFileButton_clicked();
    void on_loadPhotoButton_clicked();

private:
    Ui::MainWindow *ui;
    std::string sourceImageFilePath;
    std::string sourceDataFilePath;
    std::string resultImageFilePath;
    std::string resultDataFilePath;
    std::vector <uint8_t> pixelArray;
    std::vector <uint8_t> datafileArray;
    BMPHEADER sourceImageBMPHeader;
    DIBHEADER sourceImageDIBHeader;
    BITFIELDS sourceImageBitFields;
    SGHEADER newImageSGHeader;
    FILE *sourceImageFile;
    FILE *sourceDataFile;
    FILE *destinationImageFile;
    FILE *destinationDataFile;

};
#endif // MAINWINDOW_H
