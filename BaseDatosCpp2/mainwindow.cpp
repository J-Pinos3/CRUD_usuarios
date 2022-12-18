#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QString nombre;
    nombre.append("baseDeDatos.sqlite");

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(nombre);
    //db.open();//crea la base de datos si esta no existe

    if(db.open()){
        qDebug() << "C++ se ha conectado con la base de datos";
    }else{
        qDebug() << "ERROR! C++ NO se pudo conectar con la base de datos";
    }

    crearTablaUsuarios();
    mostrarDatos();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::crearTablaUsuarios()
{
    QString consulta;
    consulta.append(" CREATE TABLE IF NOT EXISTS usuarios("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "nombre VARCHAR(50),"
                    "apellido VARCHAR(50),"
                    "edad INTEGER NOT NULL,"
                    "clase INTEGER NOT NULL"
                    ");");

    QSqlQuery crear;
    crear.prepare(consulta);

    if(crear.exec()){
        qDebug() << "La tabla usuarios se creó correctamente";
    }else{
        qDebug() << "No se pudo crear la tabla usuarios o esta no existe";
        qDebug() << "Error! " << crear.lastError();
    }

}

void MainWindow::insertarUsuarios()
{
    //''las comillas son para datos varchar
    QString consulta;
    consulta.append("INSERT INTO usuarios("
                    "nombre,"
                    "apellido,"
                    "edad,"
                    "clase)"
                    "VALUES("
                    "'"+ui->lineEditNombre->text()+"',"
                    "'"+ui->lineEditApellido->text()+"',"
                    ""+ui->lineEditEdad->text()+","
                    ""+ui->lineEditClase->text()+""
                    ");");

    QSqlQuery insertar;
    insertar.prepare(consulta);

    if(insertar.exec()){
        qDebug() << "El usuario se ha insertado correctamente";
    }else{
        qDebug() << "NO se pudo insertar el usuario o este ya existe";
        qDebug() << "Error! " << insertar.lastError();
    }
}

void MainWindow::mostrarDatos()
{
    //''las comillas son para datos varchar
    QString consulta;
    consulta.append("SELECT * FROM usuarios");

    QSqlQuery consultar;
    consultar.prepare(consulta);

    if(consultar.exec()){
        qDebug() << "La información se ha cargado correctamente en la tabla";
    }else{
        qDebug() << "NO se pudo cargar la información en la tabla";
        qDebug() << "Error! " << consultar.lastError();
    }


    int fila = 0;
    ui->tableWidgetDatos->setRowCount(0);
    while(consultar.next()){

        ui->tableWidgetDatos->insertRow(fila);
        ui->tableWidgetDatos->setItem(fila, 0, new QTableWidgetItem(consultar.value(0).toByteArray().constData()) );
        ui->tableWidgetDatos->setItem(fila, 1, new QTableWidgetItem(consultar.value(1).toByteArray().constData()) );
        ui->tableWidgetDatos->setItem(fila, 2, new QTableWidgetItem(consultar.value(2).toByteArray().constData()) );
        ui->tableWidgetDatos->setItem(fila, 3, new QTableWidgetItem(consultar.value(3).toByteArray().constData()) );
        ui->tableWidgetDatos->setItem(fila, 4, new QTableWidgetItem(consultar.value(4).toByteArray().constData()) );
        fila++;
    }


}

void MainWindow::eliminarDatos()
{
    //''las comillas son para datos varchar
    QString consulta;
    consulta.append("DELETE FROM usuarios WHERE id = "+ui->lineEditID->text()+" ");

    QSqlQuery eliminar;
    eliminar.prepare(consulta);

    if(eliminar.exec()){
        qDebug() << "El usuario se ha eliminado correctamente";
    }else{
        qDebug() << "NO se puede eliminar el usuario o este no existe";
        qDebug() << "Error! " << eliminar.lastError();
    }
}

void MainWindow::actualizarUsuarios()
{
    //''las comillas son para datos varchar
    QString consulta;
    consulta.append("UPDATE usuarios SET nombre = '"+ui->lineEditNombre->text()+"', apellido = '"+ui->lineEditApellido->text()+"', edad = "+ui->lineEditEdad->text()+",clase = "+ui->lineEditClase->text()+" WHERE id = "+ui->lineEditID->text()+" ");

    QSqlQuery actualizar;
    actualizar.prepare(consulta);

    if(actualizar.exec()){
        qDebug() << "El usuario se ha modificado correctamente";
    }else{
        qDebug() << "NO se puede actualizar el usuario o este no existe";
        qDebug() << "Error! " << actualizar.lastError();
    }
}


void MainWindow::on_pushButtonAgregarUsuario_clicked()
{
    insertarUsuarios();

}


void MainWindow::on_pushButton_clicked()
{
    mostrarDatos();
}


void MainWindow::on_pushButtonEliminar_clicked()
{
    eliminarDatos();
}


void MainWindow::on_pushButton_2_clicked()
{
    actualizarUsuarios();
}

