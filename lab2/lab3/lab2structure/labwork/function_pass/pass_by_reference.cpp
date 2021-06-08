#include <iostream>
using namespace std;

void functionfirst(int a)
{
    cout << "value of before entering is : " << a ;
    a = 5 ;
    cout << "value of after altering is : " << a ;
    }
    void functionReference(int &b)
    {
b = 20 ;
    cout << "value of b is :" << b << endl ;
    }

int main()
{
    int a = 1 ;
    int b = 2 ;
    functionfirst(a) ;
    functionReference(b) ;
    cout << "value of a in main :" <<  a << endl ;
    cout << "value of b in main :" <<  b << endl ;
}