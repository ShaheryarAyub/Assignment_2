#include <iostream>
#include "fraction.h"

using namespace std;

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

Fraction operator-- (const Fraction& f1)
{
    Fraction r;
    r.num = f1.num - f1.deno;
    r.deno = f1.deno;
    return r;
}

Fraction operator++ (Fraction& f1)
{
    Fraction r;
    r.num = f1.num + f1.deno;
    r.deno = f1.deno;
    return r;
}

Fraction Fraction::operator+=(const Fraction f1)
{
    {
        Fraction r;
        r.num = (f1.num * 2)
            + (f1.deno);
        r.deno = f1.deno * 2;
        return r;
    }
   
}

Fraction Fraction::operator-=(const Fraction f1)
{
    {
        Fraction r;
        r.num = (f1.num * 2)
            - (f1.deno);
        r.deno = f1.deno * 2;
        return r;
    }
}

Fraction Fraction :: operator- (const Fraction f1)
{
    {
        Fraction r;
        r.num = -(f1.num) ;
        r.deno = -(f1.deno );
        return r;
    }
}

void Fraction::show()
{
    cout << "Numerator is: " << num;
    cout << "Enter Denominator: "<<deno;
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

istream& operator >> (istream& is, Fraction& fraction)
{
    int newNumerator;
    int newDenominator = 1;
    bool isCorrect = false;
    while (!isCorrect) 
    {
        is >> newNumerator;
        char value;
        is.get(value);
        if (!is.eof()) 
        {
            if (value == '/') 
            
            {
                is >> newDenominator;
                isCorrect = true;
            }
            else 
            {
                is.putback(value);
                is.clear();
                is.ignore();
            }
        }
    }
    fraction = Fraction(newNumerator, newDenominator);
    return is;
}

