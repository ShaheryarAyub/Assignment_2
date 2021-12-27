#pragma once
using namespace std;

class Fraction
{
public:
    long num, deno;
    Fraction()
    {
        num = 0;
        deno = 1;
    }
    Fraction(int n, int d)
    {
        num = n;
        if (d == 0)
        {
            cout << "Error: Attempting to Divide by Zero" << endl;
            exit(0); // it will terminate the program if division by 0 is attempted
        }
        else
            deno = d;
    }

    friend Fraction operator+ (const Fraction& f1, const Fraction& f2);
    friend Fraction operator- (const Fraction& f1, const Fraction& f2);
    friend Fraction operator* (const Fraction& f1, const Fraction& f2);
    friend Fraction operator/ (const Fraction& f1, const Fraction& f2);
    Fraction operator+= (const Fraction f1);
    Fraction operator-= (const Fraction f1);
    Fraction operator- (const Fraction f1);    
    friend Fraction operator-- (const Fraction& f1);
    friend Fraction operator++ (Fraction& f1);
    friend ostream& operator<< (ostream&, const Fraction&);
    friend istream& operator>> (istream&, Fraction&); 

    void accept()
    {
        cout << "\n Enter Numerator     :  ";
        cin >> num;
        cout << "\n Enter Denominator   :  ";
        cin >> deno;
    }
    void show();   
        
};