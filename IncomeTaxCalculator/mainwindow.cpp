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
    int income = ui->Income->text().toInt();
    CalculateTax calcTax(income);
    float progressiveTax = calcTax.GetProgTax();
    float fica = calcTax.GetFica();
    float stateTax = calcTax.GetStateTax();
    MainWindow::UpdateProgTax(progressiveTax);
    MainWindow::UpdateFica(fica);
    MainWindow::UpdateStateTax(stateTax);
    MainWindow::UpdateNetIncome(income - (progressiveTax + fica + stateTax));
}

void MainWindow::on_Income_returnPressed()
{
    MainWindow::on_Calculate_clicked();
}

void MainWindow::UpdateProgTax(float tax)
{
    ui->ProgressiveTax->setText(QString::number(tax));
}

void MainWindow::UpdateFica(float fica)
{
    ui->Fica->setText(QString::number(fica));
}

void MainWindow::UpdateStateTax(float tax)
{
    ui->StateTax->setText(QString::number(tax));
}

void MainWindow::UpdateNetIncome(float income)
{
    ui->NetIncome->setText(QString::number(income));
}
