#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableView>
#include <QSqlQueryModel>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDataStream>
#include <QSqlRecord>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Qt::WindowFlags flags = Qt::CustomizeWindowHint;
    setWindowFlags(flags);


}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::connecting()
{
    QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");

    mydb.setDatabaseName("Two.db");

    if(!mydb.open())
    {
        qDebug ()<<"not coonn";
    }else{
        qDebug()<<"conn";
    }
}

void MainWindow::on_pushButton_clicked()
{
    connecting();
    createtable();
}


void MainWindow:: createtable()
{
    QSqlQuery qry;
    qry.prepare("CREATE TABLE Bill(ID TEXT,Name TEXT,Rate REAL,Quantity INT,Amount REAL)");
    if (!qry.exec())
    {
        qDebug() <<"Couldn't create Table,one might already exist";

    }
    else
    {
        qDebug()<<"CreateD table";
    }

}


void MainWindow::filltable()
{


    QString username = ui->Name->text();
    QString Id = ui->Id->text();
    QString Amount = ui->amount->text();
    QString Quantity = ui->Quantity->text();
    QString Rate  = ui->rate->text();


    QSqlQuery qry ;

    qry.prepare("INSERT INTO Bill(ID , Name , Rate , Quantity , Amount)values('"+ Id +"', '"+username +"', '"+Amount +"' , '" +Quantity +"' , '"+Rate+"' ) ");
    if(!qry.exec())
    {
        qDebug()<<"  not saved in the table ";
    }else{
        qDebug()<< " save in the table ";
    }

}



void MainWindow::save_table_to_csv()
{


    QSqlQuery query;
    query.prepare("SELECT * FROM Bill");
    if (!query.exec()) {
        qCritical() << "Failed to execute query:";

    }else{
        qDebug() << "available";
    }

    QFile file("myfile.csv");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qCritical() << "Failed to open output file:";
    }
    else{
        qDebug() <<"opened";
    }


    QTextStream out (&file);
    out.setCodec("UTF-8");



    QStringList headers;
    for (int i = 0; i < query.record().count(); i++) {
        headers.append(query.record().fieldName(i));
    }
    out << headers.join(",") << "\n";




    while (query.next()) {
        QStringList rowData;
        for (int i = 0; i < query.record().count(); i++) {
            rowData.append(query.value(i).toString());
        }
        out << rowData.join(",") << "\n";


    }

    qDebug () <<"succefully written";


    file.close();

}

void MainWindow::on_saveindb_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

    filltable();



}

void MainWindow::on_viewtable_clicked()
{



    ui->stackedWidget->setCurrentIndex(1);


    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();


    qry->prepare("select *from Bill"
                 ""
                 ""
                 " ");


    if(!qry->exec())
    {
        qDebug()<<"not availabel";

    }
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    ui->tableView->setHidden(false);

}

void MainWindow::on_pushButton_2_clicked()
{
    save_table_to_csv();
}


void MainWindow::on_pushButton_3_clicked()
{
    exit(0);
}
