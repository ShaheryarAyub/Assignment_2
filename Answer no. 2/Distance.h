#pragma once
using namespace std;
class Distance
{
private:

    double x, y;
public:

    void readDistance();
    void sum_disp();
    void sub_disp();
    void operator ^(Distance& dist);
    void sety(double y);
    void setx(double x);   
    double getx(void);    
    double gety(void);    
};
class Distance operator + (Distance dist_1, Distance dist_2);
class Distance operator - (Distance dist_1, Distance dist_2);
