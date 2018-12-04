#include <QIntValidator>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calculatetax.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Income->setValidator( new QIntValidator(0, 999999, this) );
}

MainWindow::~MainWindow()
{

}

void MainWindow::on_Calculate_clicked()
{
    CalculateTax(MainWindow, (ui->Income->text().toInt()));
}

void MainWindow::on_Income_returnPressed()
{
    MainWindow::on_Calculate_clicked();
}

void MainWindow::UpdateProgTax(int tax)
{
    ui->ProgressiveTax->setText(QString(tax));
}

void MainWindow::UpdateFica(int fica)
{
    ui->Fica->setText(QString(fica));
}

void MainWindow::UpdateStateTax(int tax)
{
    ui->StateTax->setText(QString(tax));
}

void MainWindow::UpdateNetIncome(int income)
{
    ui->NetIncome->setText(QString(income));
}
