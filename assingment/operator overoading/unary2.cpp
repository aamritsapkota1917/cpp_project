#include<iostream>
using namespace std;

class unary
{
    int a,b,c;
    public:
    void getdata(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    // return type operator op() eg ++,--
    void operator +()
    {
       a++;
       b++;
       c++;  
    }
    void display()
    {
        cout <<"value of a:" <<a <<endl;
        cout <<"value of b:" <<b << endl;
        cout <<"value of c:" <<c <<endl;

    }
};
int main()
{
    unary u1;
    u1.getdata(-3,-4,5);
    u1.display();
    +u1;
    u1.display();
}