#include<iostream>
#include "fraction.h"

using namespace std;

int main()
{
    Fraction f1(5,3);
    Fraction f2(2,1);
    Fraction f3;
    Fraction f4;
    Fraction f5;

    Fraction a(1, 2);
    f3 = f1 + f2;
    f3.show();
    f3 = f1 - f2;
    f3.show();
    f3 = f1 * f2;
    f3.show();
    f3 = f1 / f2;
    f3.show();
    f3 = --f1;
    f3.show();
    f3 = ++f1;
    f3.show();
    f3 =  f1 += a;
    f3.show();
    f3 = f1 -= a;
    f3.show();
    f3 = -f2;
    f3.show();

    cout << "\n Enter 1st Fraction Value " << endl;
    f4.accept();
    cout << "your input is: ";
    cout << f4 << endl;
    cout << "\n Enter 2nd Fraction Value " << endl;
    cin >> f5;
    cout << "your input is: ";
    cout << f5 << endl;
    return 0;
}
