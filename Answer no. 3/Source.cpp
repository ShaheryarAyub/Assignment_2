#include<iostream>
using namespace std;

class book
{
private:

    int rs, paise;

public:

    friend book operator +(book&, book&);

    void print() 
    {
        cout << "\n The total price is: ";
        cout << "\n Rupees:" << rs;
        cout << "\n Paisa:" << paise;
    }

    void get_book_1() 
    {
        cout << "The price of Book1" << endl;
        cout << "Enter rupees: " << endl;
        cin >> rs;
        cout << "Enter paisa: " << endl;
        cin >> paise;
    }

    void get_book_2()
    {
        cout << "The price of Book2" << endl;
        cout << "Enter rupees: " << endl;
        cin >> rs;
        cout << "Enter paisa: " << endl;
        cin >> paise;
    }
};

book operator +(book& c1, book& c2)
{
    book temp;
    temp.rs = c1.rs + c2.rs;
    temp.paise = c1.paise + c2.paise;
  
    if (c1.rs < 1)
    {
        cout << "You have entered Invalid price, please re-enter your price in positive values." << endl;
    }
    else if (temp.paise >= 100)
    {
        temp.paise = temp.paise - 100;
        temp.rs = temp.rs + 1;

        cout << "The total price is = "<< temp.rs<<" Rupees and "
            << temp.paise<<" paise";
    
        return temp;
    }
}

int main()
{
    book c1, c2, c3;
    c1.get_book_1();
    c2.get_book_2();
    c3 = c1 + c2;
    return 0;
}