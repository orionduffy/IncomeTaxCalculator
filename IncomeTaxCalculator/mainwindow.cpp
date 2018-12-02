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
    CalculateTax((ui->Income->text().toInt()));
}

void MainWindow::on_Income_returnPressed()
{
    MainWindow::on_Calculate_clicked();
}

static void MainWindow::UpdateProgTax(int tax)
{
    ui->ProgressiveTax->setText(tax);
}

static void MainWindow::UpdateFica(int fica)
{
    ui->FICA->setText(fica);
}

static void MainWindow::UpdateStateTax(int tax)
{
    ui->StateTax->setText(tax);
}

static void MainWindow::UpdateNetIncome(int income)
{
    ui->NetIncome->setText(income);
}
