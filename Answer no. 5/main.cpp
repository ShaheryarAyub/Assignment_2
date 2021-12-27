#include<iostream>
#include "Test.h"

using namespace std;

int main()
{    
    Test obj1(1000,0);
    Test obj2(0,0);
    obj2 = (obj1* 0.12);
    obj2.print();
    return 0;
}