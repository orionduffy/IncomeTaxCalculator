#include "calculatetax.h"
#include "mainwindow.h"

CalculateTax::CalculateTax(int income)
{
    int progressiveTax = CalcProgTax(income);
    MainWindow::UpdateProgTax(progressiveTax);

    int fica = CalcFica(income);
    MainWindow::UpdateFica(fica);

    int stateTax = CalcStateTax(income);
    MainWindow::UpdateStateTax(stateTax);

    MainWindow::UpdateNetIncome(income - (progressiveTax + fica + stateTax));
}

int CalcProgTax(int income)
{

}

int CalcFica(int income)
{

}

int CalcStateTax(int income)
{

}
