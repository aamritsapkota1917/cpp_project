#include <iostream>
using namespace std;
class box
{
private:
    double length, breadth, height;

public:
    box(double len, double brdth, double hgt)
    {

        cout << "Constructor is called" << endl;
        length = len;
        breadth = brdth;
        height = hgt;
    }
    double volume()
    {
        return length * breadth * height;
    }
};
int main()
{
    box box1(10.5, 5.5, 4.5), box2(2.5, 3.5, 4.5);
    box *ptrbox;
    cout << "address of box1 variable " << &box1 << endl;
    // pointer yesto khalko variable ho jasle aru variable ko address lie afule
    // carry garna sakxa.In this case, box1  variable ko address lie ptrbox variable
    // variable le carry garna sakxa.
    ptrbox = &box1;

    // acess the member function using member acess operator (-> )
    cout << "volume of box1 " << ptrbox->volume() << endl;

    //save the address of second object

    ptrbox = &box2;

    cout << "Volume of box2: " << ptrbox->volume() << endl;
    return 0;
}