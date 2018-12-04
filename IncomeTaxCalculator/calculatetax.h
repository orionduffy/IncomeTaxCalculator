#ifndef CALCULATETAX_H
#define CALCULATETAX_H

#include "mainwindow.h"

class CalculateTax
{
public:
    CalculateTax(Ui::MainWindow&, int);

private:
    int CalcProgTax(int);
    int CalcFica(int);
    int CalcStateTax(int);
};

#endif // CALCULATETAX_H
