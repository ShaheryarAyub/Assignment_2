#include<iostream>
#include "fraction.h"

using namespace std;

int main()
{
    Fraction a(5, 3);
    Fraction b(0, 1);
    Fraction c;
    Fraction f1;
    Fraction f2;
    Fraction f3;
    Fraction f4;
 
    c = a - b;
    cout << "\n Sum of Two Numbersss : " << c.num << endl;

    cout << "\n ------------------------- \n";
   
    c = b -= a;
    cout << "\n  operatorrrrr --   : " << c.num << "/" << c.deno;
    cout << "\n ------------------------- \n";
    
    ++a;
    cout << "\n  operatorrrrr ++   : " << a.num << "/" << a.deno;
    cout << "\n Enter 1st Fraction Value ";
    cout << "\n ------------------------- \n";

    f1.accept();

    cout << "\n Enter 2nd Fraction Value ";
    cout << "\n ------------------------- \n";
    f2.accept();

    f3 = f1 + f2;
    cout << "\n -------------------------------------";
    cout << "\n Sum of Two Numbers        : " << f3.num << "/" << f3.deno << endl;

    f3 = f1 - f2;
    cout << "\n Difference of Two Numbers : " << f3.num << "/" << f3.deno << endl;

    f3 = f1 * f2;
    cout << "\n Product of Two Numbers    : " << f3.num << "/" << f3.deno << endl;

    f3 = f1 / f2;
    cout << "\n Division of Two Numbers   : " << f3.num << "/" << f3.deno;
    cout << "\n -------------------------------------";
   
    return 0;
}