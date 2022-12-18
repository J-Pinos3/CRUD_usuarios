#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QString>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void crearTablaUsuarios();

    void insertarUsuarios();

    void mostrarDatos();

    void eliminarDatos();

    void actualizarUsuarios();

private slots:
    void on_pushButtonAgregarUsuario_clicked();

    void on_pushButton_clicked();

    void on_pushButtonEliminar_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
