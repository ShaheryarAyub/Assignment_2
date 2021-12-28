#pragma once

using namespace std;

class Fraction
{
private:
    long num, deno;
public:
    Fraction();
    Fraction(int n, int d);
    friend Fraction operator+ (const Fraction& f1, const Fraction& f2);
    friend Fraction operator- (const Fraction& f1, const Fraction& f2);
    friend Fraction operator* (const Fraction& f1, const Fraction& f2);
    friend Fraction operator/ (const Fraction& f1, const Fraction& f2);
    friend ostream& operator<< (ostream&, const Fraction&);
    friend istream& operator>> (istream&, Fraction&);

    Fraction& operator+=(const int&);
    Fraction& operator+=(const Fraction&);
    Fraction& operator-=(const Fraction&);
    Fraction& operator-=(const int&);
    Fraction& operator--();
    Fraction& operator++();
    Fraction& operator-();
    Fraction& operator=(const int& i);
  
    void show();
    void accept();
};
