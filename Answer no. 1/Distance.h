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
    Distance operator +(Distance& dist);
    Distance operator -(Distance& dist);
    void operator ^(Distance& dist);
};

