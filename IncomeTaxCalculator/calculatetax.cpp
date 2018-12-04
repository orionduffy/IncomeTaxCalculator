#include "calculatetax.h"

CalculateTax::CalculateTax(int income)
{
    this->progTax = CalculateTax::CalcProgTax(income);
    this->fica = CalculateTax::CalcFica(income);
    this->stateTax = CalculateTax::CalcStateTax(income);
}

float CalculateTax::CalcProgTax(int income)
{
    float progTax = 0;
    if (income < 9526){
        progTax = income * .10;
    }
    else if (9526 <= income && income < 38701){
        progTax = 952.50 + (income - 9525) / 120;
    }
    else if (38701 <= income && income < 82501){
        progTax = 4486.26 + (income - 38700) / 220;
    }
    else if (82501 <= income && income < 157501){
        progTax = 9742.26 + (income - 82500) * .24;
    }
    else if (157501 <= income && income < 200001){
        progTax = 27742.50 + (income - 157500) * .32;
    }
    else if (200001 <= income && income < 500001){
        progTax = 70242.50 + (income - 200000) * .35;
    }
    else if (income >= 500001){
        progTax = 175242.50 + (income - 500000) * .37;
    }
    return progTax;
}

float CalculateTax::CalcFica(int income)
{
    float fica = 0;
    fica = income * .0765;
    return fica;
}

float CalculateTax::CalcStateTax(int income)
{
    float stateTax = 0;
    if (income < 10000){
        stateTax = income * .03;    
    }
    else if (10000 <= income && income < 50000){
        stateTax = 300 + (income - 9999) * .05;
    }
    else if (50000 <= income && income < 100000){
        stateTax = 2300 + (income - 49999) * .055;
    }
    else if (100000 <= income && income < 200000){
        stateTax = 5050 + (income - 99999) * .06;
    }
    else if (200000 <= income && income < 250000){
        stateTax = 11050 + (income - 199999) * .065;
    }
    else if (250000 <= income && income < 500000){
        stateTax = 14300 + (income - 249999) * .069;
    }
    else if (income >= 500000){
        stateTax = 31550 + (income - 499999) * .0699;
    }
    return stateTax;
}

float CalculateTax::GetProgTax(){
    return this->progTax;
}

float CalculateTax::GetFica(){
    return this->fica;
}

float CalculateTax::GetStateTax(){
    return this->stateTax;
}
