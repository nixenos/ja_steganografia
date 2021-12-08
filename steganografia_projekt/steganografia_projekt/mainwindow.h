//
// Created by nixen on 06.12.2021.
//

#ifndef STEGANOGRAFIA_PROJEKT_MAINWINDOW_H
#define STEGANOGRAFIA_PROJEKT_MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
};


#endif //STEGANOGRAFIA_PROJEKT_MAINWINDOW_H
