#include <iostream>
using namespace std;

class construct
{
    public :
             int a,b;
            //DEFAULT CONSTRUCTER 
            construct()
    {
             a=10;
            b=20;
    }
};
 
 int main ()
 {
     // DEFAULT CONSTRUCTER CALLED AUTOMATICALLY 
     // WHEN THE OBJECT IS CREATED
         construct c;
         cout << "a:" << c.a << c.a << endl  << "b:" << c.b; 
        return 1;

 }