#include <iostream>
#include "fraction.h"

using namespace std;

Fraction::Fraction()
{
    num = 0;
    deno = 1;
}
Fraction:: Fraction(int n, int d)
{
    num = n;
    if (d == 0)
    {
        cout << "Error: Attempting to Divide by Zero" << endl;
        exit(0);
    }
    else
        deno = d;
}

Fraction operator+ (const Fraction& f1, const Fraction& f2)
{
    Fraction r;
    r.num = (f1.num * f2.deno)
        + (f2.num * f1.deno);
    r.deno = f1.deno * f2.deno;
    return r;
}

Fraction operator- (const Fraction& f1, const Fraction& f2)
{
    Fraction r;
    r.num = (f1.num * f2.deno)
        - (f2.num * f1.deno);
    r.deno = f1.deno * f2.deno;
    return r;
}

Fraction operator* (const Fraction& f1, const Fraction& f2)
{
    Fraction r;
    r.num = (f1.num * f2.num);
    r.deno = f1.deno * f2.deno;
    return r;
}

Fraction operator/ (const Fraction& f1, const Fraction& f2)
{
    Fraction r;
    r.num = (f1.num * f2.deno);
    r.deno = f1.deno * f2.num;
    return r;
}

Fraction& Fraction::operator+=(const Fraction& f) {
    *this = (*this) + f;
    return(*this);
}

Fraction& Fraction::operator+=(const int& i) {
    this->num = this->num + (i * this->deno);
    this->deno = this->deno;
    return(*this);
}

Fraction& Fraction::operator-=(const Fraction& f) {
    *this = (*this) - f;
    return(*this);
}

Fraction& Fraction::operator-=(const int& i) {
    this->num = this->num - (i * this->deno);
    this->deno = this->deno;
    return(*this);
}

Fraction& Fraction:: operator--() {
    *this -= 1;
    return (*this);
}

Fraction& Fraction:: operator++()
{
    *this += 1;
    return (*this);
}

Fraction& Fraction::operator=(const int& i)
{
    this->num = this->num;
    this->deno = this->deno;
    return(*this);
}

Fraction& Fraction :: operator-()
{
    *this = (-deno);
    return (*this);
}

void Fraction::show()
{
    cout << "Result of Two Numbers is : " << num << "/" << deno << endl;
}
void Fraction :: accept()
{
    cout << "\n Enter Numerator     :  ";
    cin >> num;
    cout << "\n Enter Denominator   :  ";
    cin >> deno;
}
ostream& operator << (ostream& os, const Fraction& f1)
{
    if (f1.num == f1.deno) {
        os << "1";
    }
    else {
        os << f1.num << '/' << f1.deno;
    }

    return os;
}

istream& operator>>(istream& in, Fraction& x)
{
    char ch;
    while (1)
    {
        cin >> x.num >> ch >> x.deno;
        if (x.deno == 0)
            cout << "denominator is 0, please re-enter \ n";
        else if (ch != '/')
           cout<<"format error(e.g.m / n)!Please re - enter \ n";
        else
            break;
    }
    return cin;
}

