#include <iostream>
#include "Distance.h"

void Distance :: readDistance()
{
    cout << "Enter x axis: ";
    cin >> x;
    cout << "Enter y axis: ";
    cin >> y;
}
void Distance :: sum_disp()
{
    cout << "p1+p2 is: (" << x << "," << y << ")" << endl;
}
void Distance :: sub_disp()
{
    cout << "p1-p2 is: (" << x << "," << y << ")" << endl;
}

void Distance :: operator ^(Distance& dist)
{
    Distance tempp;
    tempp.x = dist.x - x;
    tempp.y = dist.y - y;
    double a = pow(tempp.x, 2);
    double b = pow(tempp.y, 2);
    double c = sqrt(a + b);
    cout << "Distance from p1 to p2 is:" << c << endl;
}

void Distance :: sety (double y)
{
    this->y = y;
}
void Distance :: setx(double x)
{
    this->x = x;
}
double Distance :: getx(void)
{
    return x;
}
double Distance :: gety(void)
{
    return y;
}

class Distance operator + (Distance dist_1, Distance dist_2)
{
    Distance temp;
    temp.setx(dist_1.getx() + dist_2.gety());
    temp.sety(dist_1.getx() + dist_2.gety());
    return temp;
}

class Distance operator - (Distance dist_1, Distance dist_2)
{
    Distance temp;
    temp.setx(dist_2.getx() - dist_1.gety());
    temp.sety(dist_2.getx() - dist_1.gety());
    return temp;
}