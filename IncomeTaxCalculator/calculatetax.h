#ifndef CALCULATETAX_H
#define CALCULATETAX_H


class CalculateTax
{
public:
    CalculateTax(int);
    float GetProgTax();
    float GetFica();
    float GetStateTax();

private:
    float progTax;
    float fica;
    float stateTax;

    float CalcProgTax(int);
    float CalcFica(int);
    float CalcStateTax(int);
};

#endif // CALCULATETAX_H
