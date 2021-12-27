#pragma once
using namespace std;

class Test
{
private:
    long rupee, paise;
public:
    Test();
    Test(long rs, long pa);   

    void print()
    {        
        cout << " After Applying by rate 0.12 " << endl;
        cout << " The amount of interest in rupees is :" << rupee << endl;
    }

    Test operator * (float rate)
    {
        Test temp;
        temp.rupee = rupee * rate;
        return  temp;
    }
 };
