#ifndef CALCULATETAX_H
#define CALCULATETAX_H


class CalculateTax
{
public:
    CalculateTax(int);

private:
    int CalcProgTax(int);
    int CalcFica(int);
    int CalcStateTax(int);
};

#endif // CALCULATETAX_H
