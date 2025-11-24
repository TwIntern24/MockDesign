/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QDateEdit *dateEdit;
    QLabel *label_4;
    QTableWidget *tableWidget;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(943, 690);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(261, 51, 115, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 50, 74, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(261, 77, 37, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 80, 103, 16));
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 100, 59, 16));
        label_3->setFont(font);
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(261, 103, 53, 20));
        dateEdit = new QDateEdit(centralWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(261, 129, 81, 20));
        dateEdit->setCalendarPopup(true);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 130, 27, 16));
        label_4->setFont(font);
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(150, 190, 256, 192));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(170, 230, 91, 17));
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(170, 270, 121, 17));
        checkBox_3 = new QCheckBox(centralWidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(170, 310, 91, 17));
        checkBox_4 = new QCheckBox(centralWidget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(170, 350, 111, 17));
        tableWidget_2 = new QTableWidget(centralWidget);
        if (tableWidget_2->columnCount() < 7)
            tableWidget_2->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem7);
        if (tableWidget_2->rowCount() < 3)
            tableWidget_2->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 4, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 5, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 6, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 4, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 5, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 6, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 3, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 4, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 5, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 6, __qtablewidgetitem31);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(110, 400, 801, 181));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 600, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 943, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "-Choose Matrix-", Q_NULLPTR)
         << QApplication::translate("MainWindow", "MK5 Matrix", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Double Fold Matrix", Q_NULLPTR)
        );
        label->setText(QApplication::translate("MainWindow", "Robot Matrix", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Quantity (Max 99)", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Requester", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "John", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Mark", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Gavin", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "MK5", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "main connector", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "Arm-gripper interface ", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("MainWindow", "DM housing", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("MainWindow", "Interface plate", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Robot Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Material Number", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Item Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Storage Location", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Quantity", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Requester", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget_2->isSortingEnabled();
        tableWidget_2->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->item(0, 0);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "MK5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->item(0, 1);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "601761", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->item(0, 2);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "Pneumatikblock", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_2->item(0, 3);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "01-07A", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_2->item(0, 4);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_2->item(0, 5);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "John", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_2->item(0, 6);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "24/11/2025", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_2->item(1, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "MK5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_2->item(1, 1);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "510163", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_2->item(1, 2);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "Adaptercable Z-stroke NXT", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_2->item(1, 3);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "B3P", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_2->item(1, 4);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_2->item(1, 5);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "John", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_2->item(1, 6);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "24/11/2025", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_2->item(2, 0);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "MK5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_2->item(2, 1);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "400408", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_2->item(2, 2);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "NT interface PCB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_2->item(2, 3);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_2->item(2, 4);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_2->item(2, 5);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "John", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_2->item(2, 6);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "24/11/2025", Q_NULLPTR));
        tableWidget_2->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QApplication::translate("MainWindow", "Submit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
