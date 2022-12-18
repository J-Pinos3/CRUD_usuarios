/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEditNombre;
    QLineEdit *lineEditApellido;
    QLineEdit *lineEditEdad;
    QLineEdit *lineEditClase;
    QPushButton *pushButtonAgregarUsuario;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTableWidget *tableWidgetDatos;
    QPushButton *pushButton;
    QLabel *label_5;
    QLineEdit *lineEditID;
    QPushButton *pushButtonEliminar;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(841, 735);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEditNombre = new QLineEdit(centralwidget);
        lineEditNombre->setObjectName("lineEditNombre");
        lineEditNombre->setGeometry(QRect(190, 20, 231, 22));
        lineEditApellido = new QLineEdit(centralwidget);
        lineEditApellido->setObjectName("lineEditApellido");
        lineEditApellido->setGeometry(QRect(190, 70, 231, 22));
        lineEditEdad = new QLineEdit(centralwidget);
        lineEditEdad->setObjectName("lineEditEdad");
        lineEditEdad->setGeometry(QRect(190, 120, 231, 22));
        lineEditClase = new QLineEdit(centralwidget);
        lineEditClase->setObjectName("lineEditClase");
        lineEditClase->setGeometry(QRect(190, 170, 231, 22));
        pushButtonAgregarUsuario = new QPushButton(centralwidget);
        pushButtonAgregarUsuario->setObjectName("pushButtonAgregarUsuario");
        pushButtonAgregarUsuario->setGeometry(QRect(550, 10, 201, 51));
        QFont font;
        font.setPointSize(18);
        pushButtonAgregarUsuario->setFont(font);
        pushButtonAgregarUsuario->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 10, 111, 31));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 60, 111, 31));
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 110, 71, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 160, 71, 31));
        label_4->setFont(font1);
        tableWidgetDatos = new QTableWidget(centralwidget);
        if (tableWidgetDatos->columnCount() < 5)
            tableWidgetDatos->setColumnCount(5);
        QFont font2;
        font2.setPointSize(16);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font2);
        tableWidgetDatos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font2);
        tableWidgetDatos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font2);
        tableWidgetDatos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font2);
        tableWidgetDatos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font2);
        tableWidgetDatos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidgetDatos->setObjectName("tableWidgetDatos");
        tableWidgetDatos->setGeometry(QRect(120, 300, 561, 361));
        tableWidgetDatos->setSortingEnabled(false);
        tableWidgetDatos->verticalHeader()->setVisible(false);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(550, 70, 201, 51));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 220, 31, 21));
        label_5->setFont(font);
        lineEditID = new QLineEdit(centralwidget);
        lineEditID->setObjectName("lineEditID");
        lineEditID->setGeometry(QRect(190, 220, 113, 22));
        pushButtonEliminar = new QPushButton(centralwidget);
        pushButtonEliminar->setObjectName("pushButtonEliminar");
        pushButtonEliminar->setGeometry(QRect(550, 130, 201, 51));
        pushButtonEliminar->setFont(font);
        pushButtonEliminar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(550, 190, 201, 51));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 841, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEditNombre->setPlaceholderText(QCoreApplication::translate("MainWindow", "Nombre:", nullptr));
        lineEditApellido->setPlaceholderText(QCoreApplication::translate("MainWindow", "Apellido:", nullptr));
        lineEditEdad->setPlaceholderText(QCoreApplication::translate("MainWindow", "Edad:", nullptr));
        lineEditClase->setPlaceholderText(QCoreApplication::translate("MainWindow", "Clase:", nullptr));
        pushButtonAgregarUsuario->setText(QCoreApplication::translate("MainWindow", "Agregar Usuario", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nombre:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Apellido:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Edad:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Clase:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetDatos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetDatos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetDatos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Apellido", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetDatos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Edad", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetDatos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Clase", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Mostrar Usuarios", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        lineEditID->setPlaceholderText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        pushButtonEliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar Usuarios", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Modificar Usuario", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
