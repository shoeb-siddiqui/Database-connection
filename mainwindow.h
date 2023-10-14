#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

#include <QSqlError>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void connecting();
    void createtable();


    void filltable();




    void save_table_to_csv();


    void saving_file();




    void showCompanyDetails();

private slots:
    void on_pushButton_clicked();

    void on_saveindb_clicked();

    void on_viewtable_clicked();

    void on_pushButton_2_clicked();



    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase *db;
};

#endif // MAINWINDOW_H
