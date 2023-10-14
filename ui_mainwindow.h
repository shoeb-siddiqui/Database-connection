/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *saveindb;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *Id;
    QLineEdit *Name;
    QLineEdit *rate;
    QLineEdit *Quantity;
    QLineEdit *amount;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QPushButton *viewtable;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QTableView *tableView;
    QWidget *page_3;
    QGridLayout *gridLayout_3;
    QTableView *tableView_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(649, 442);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        saveindb = new QPushButton(centralWidget);
        saveindb->setObjectName(QStringLiteral("saveindb"));

        verticalLayout_2->addWidget(saveindb);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));

        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Id = new QLineEdit(centralWidget);
        Id->setObjectName(QStringLiteral("Id"));

        verticalLayout->addWidget(Id);

        Name = new QLineEdit(centralWidget);
        Name->setObjectName(QStringLiteral("Name"));

        verticalLayout->addWidget(Name);

        rate = new QLineEdit(centralWidget);
        rate->setObjectName(QStringLiteral("rate"));

        verticalLayout->addWidget(rate);

        Quantity = new QLineEdit(centralWidget);
        Quantity->setObjectName(QStringLiteral("Quantity"));

        verticalLayout->addWidget(Quantity);

        amount = new QLineEdit(centralWidget);
        amount->setObjectName(QStringLiteral("amount"));

        verticalLayout->addWidget(amount);


        horizontalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        viewtable = new QPushButton(page);
        viewtable->setObjectName(QStringLiteral("viewtable"));

        gridLayout->addWidget(viewtable, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableView = new QTableView(page_2);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout_2->addWidget(tableView, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout_3 = new QGridLayout(page_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableView_2 = new QTableView(page_3);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        gridLayout_3->addWidget(tableView_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);

        verticalLayout_4->addWidget(stackedWidget);


        gridLayout_4->addLayout(verticalLayout_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 649, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "connection", Q_NULLPTR));
        saveindb->setText(QApplication::translate("MainWindow", "save", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Save-Table-csv", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        viewtable->setText(QApplication::translate("MainWindow", "view table", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
