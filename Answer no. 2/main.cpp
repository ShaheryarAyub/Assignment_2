#include<iostream>
#include "Distance.h"


using namespace std;
int main()
{
    Distance D1, D2, D3, D4, D5;
    D1.readDistance();
    D2.readDistance();
    D3 = D1 + D2;
    D3.sum_disp();
    D4 = D2 - D1;
    D4.sub_disp();
    D1^ D2;
    return 0;
}