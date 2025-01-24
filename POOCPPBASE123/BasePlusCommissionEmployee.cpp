#include <iostream>
using std::cout;

#include "BasePlusCommissionEmployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string &first, const string &last, const string &ssn,
    double sales, double rate, double salary )
    : CommissionEmployee( first, last, ssn, sales, rate )
{
    setBaseSalary( salary );
}

void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
    baseSalary = ( salary < 0.0 ) ? 0.0 : salary;
}

double BasePlusCommissionEmployee::getBaseSalary() const 
{
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const  // Corrigido de 'earning' para 'earnings'
{
    return baseSalary + ( commissionRate * grossSales );
}

void BasePlusCommissionEmployee::print() const
{
    cout << "Base-salaried commission employee: " << firstName << ' ' << lastName  // Corrigido de 'lasteName' para 'lastName'
         << "\nSocial Security Number: " << socialSecurityNumber  // Corrigido de 'SocialSecurityNumber' para 'socialSecurityNumber'
         << "\nGross Sales: " << grossSales
         << "\nCommission Rate: " << commissionRate
         << "\nBase Salary: " << baseSalary;  // Removido o ponto e vírgula extra
}