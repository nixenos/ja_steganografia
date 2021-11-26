#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <src/logic.h>
#include <iostream>
#include <string>
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

    void on_loadPhotoButton_clicked();
private:
    Ui::MainWindow *ui;
    std::string sourceImageFile;
    std::string sourceDataFile;
    std::string resultImageFile;
    std::string resultDataFile;
    std::vector <uint8_t> pixelArray;
    std::vector <uint8_t> datafileArray;
};
#endif // MAINWINDOW_H
