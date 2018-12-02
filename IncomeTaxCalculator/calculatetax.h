#ifndef CALCULATETAX_H
#define CALCULATETAX_H


class CalculateTax
{
public:
    CalculateTax(int Income);

private:
    int CalcProgTax(int Income);
    int CalcFica(int Income);
    int CalcStateTax(int Income);
};

#endif // CALCULATETAX_H
