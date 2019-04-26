#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "task.h"
#include "task1.h"
#include "task2.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    //Task T;
    delete ui;
}

void AddTable(QTableWidget *Tab, float **V, int n, int m)
{
    Tab->clear();
    Tab->setColumnCount(m + 2);
    Tab->setRowCount(n + 2);
    QTableWidgetItem *tbl;
    for (int i = 1; i <= n + 1; i++)
    {
        tbl = new QTableWidgetItem("x(" + QString::number(i - 1) + ")");
        Tab->setItem(i,0,tbl);
        for (int j = 1; j <= m + 1; j++)
        {
            tbl = new QTableWidgetItem("y(" + QString::number(j - 1) + ")");
            Tab->setItem(0,j,tbl);
            tbl = new QTableWidgetItem(QString::number(V[i - 1][j - 1]));
            Tab->setItem(i,j,tbl);
        }
    }
}

void AddTable2(QTableWidget *Tab, float **V, int n, int m, int na, int ma)
{
    Tab->clear();
    Tab->setColumnCount(m + 2);
    Tab->setRowCount(n + 2);
    QTableWidgetItem *tbl;
    for (int i = 1; i <= na + 1; i++)
    {
        tbl = new QTableWidgetItem("x(" + QString::number(i - 1) + ")");
        Tab->setItem(i,0,tbl);
        for (int j = 1; j <= m + 1; j++)
        {
            tbl = new QTableWidgetItem("y(" + QString::number(j - 1) + ")");
            Tab->setItem(0,j,tbl);
            tbl = new QTableWidgetItem(QString::number(V[i - 1][j - 1]));
            Tab->setItem(i,j,tbl);
        }
    }
    for (int i = na + 2; i <= n + 1; i++)
    {
        tbl = new QTableWidgetItem("x(" + QString::number(i - 1) + ")");
        Tab->setItem(i,0,tbl);
        for (int j = 1; j <= ma + 1; j++)
        {
            tbl = new QTableWidgetItem(QString::number(V[i - 1][j - 1]));
            Tab->setItem(i,j,tbl);
        }
    }
}

void MainWindow::on_pushButton_clicked()
{
    int n = ui->lineEdit->text().toInt();
    int m = ui->lineEdit_2->text().toInt();
    int N = ui->lineEdit_3->text().toInt();
    float e = ui->lineEdit_4->text().toDouble();

    Task T(n, m, N, e, ui->comboBox->currentIndex());

    if (!ui->checkBox->checkState())
    {
        AddTable(ui->tableWidget, T.Xr, n, m);
        AddTable(ui->tableWidget_2, T.X, n, m);
        for (int i = 0; i < n + 1; i++)
            for (int j = 0; j < m + 1; j++)
                T.Xr[i][j] = abs(T.Xr[i][j] - T.X[i][j]);
        AddTable(ui->tableWidget_3, T.Xr, n, m);
    }
    ui->label_15->setText(QString::number(T.z));
    ui->label_23->setText(QString::number(T.s));
}

void MainWindow::on_pushButton_2_clicked()
{
    int n = ui->lineEdit_5->text().toInt();
    int m = ui->lineEdit_6->text().toInt();
    int N = ui->lineEdit_7->text().toInt();
    float e = ui->lineEdit_8->text().toDouble();

    Task1 T(n, m, N, e, ui->comboBox_2->currentIndex());
    Task1 T2(2 * n, 2 * m, N, e, ui->comboBox_2->currentIndex());

    if (!ui->checkBox->checkState())
    {
        AddTable(ui->tableWidget_4, T.X, n, m);
        AddTable(ui->tableWidget_5, T2.X, 2 * n, 2 * m);
        for (int i = 0; i < n + 1; i++)
            for (int j = 0; j < m + 1; j++)
                T.B[i][j] = abs(T.X[i][j] - T2.X[2 * i][2 * j]);
        AddTable(ui->tableWidget_6, T.B, n, m);
    }
    float z = 0;
    for (int i = 0; i < n + 1; i++)
        for (int j = 0; j < m + 1; j++)
            if (z < abs(T.X[i][j] - T2.X[2 * i][2 * j]))
                z = abs(T.X[i][j] - T2.X[2 * i][2 * j]);

    ui->label_38->setText(QString::number(z));
    ui->label_46->setText(QString::number(T.s));

    ui->label_48->setText(QString::number(T2.s));
}

void MainWindow::on_pushButton_3_clicked()
{
    int n = ui->lineEdit_9->text().toInt();
    int m = ui->lineEdit_10->text().toInt();
    int N = ui->lineEdit_11->text().toInt();
    float e = ui->lineEdit_12->text().toDouble();

    Task2 T(n, m, N, e, ui->comboBox_3->currentIndex());

    if (!ui->checkBox_3->checkState())
    {
        AddTable2(ui->tableWidget_7, T.Xr, n, m, T.na, T.ma);
        AddTable2(ui->tableWidget_8, T.X, n, m, T.na, T.ma);
        for (int i = 0; i < T.na + 1; i++)
            for (int j = 0; j < m + 1; j++)
                T.Xr[i][j] = abs(T.Xr[i][j] - T.X[i][j]);
        for (int i = T.na + 1; i < n + 1; i++)
            for (int j = 0; j < T.ma + 1; j++)
                T.Xr[i][j] = abs(T.Xr[i][j] - T.X[i][j]);
        AddTable2(ui->tableWidget_9, T.Xr, n, m, T.na, T.ma);
    }
    ui->label_64->setText(QString::number(T.z));
    ui->label_61->setText(QString::number(T.s));
}
