
#include <iostream>
#include "Distance.h"
using namespace std;

void Distance :: readDistance()
{
    cout << "Enter x axis and y axis: " << endl;
    cout << "x axis: ";
    cin >> x;
    cout << "y axis: ";
    cin >> y;
}

void Distance:: sum_disp()
{
    cout << "p1+p2 is: (" << x << "," << y << ")" << endl;
}

void Distance:: sub_disp()
{
    cout << "p1-p2 is: (" << x << "," << y << ")" << endl;
}

Distance Distance:: operator +(Distance& dist)
{
    Distance temp;
    temp.x = x + dist.x;
    temp.y = y + dist.y;
    return temp;
}

Distance Distance:: operator -(Distance& dist)
{
    Distance temp;
    temp.x = x - dist.x;
    temp.y = y - dist.y;
    return temp;
}

void Distance:: operator ^(Distance& dist)
{
    Distance tempp;
    tempp.x = dist.x - x;
    tempp.y = dist.y - y;
    double a = pow(tempp.x, 2);
    double b = pow(tempp.y, 2);
    double c = sqrt(a + b);
    cout << "Distance from p1 to p2 is:" << c << endl;
}