/*WAP to define a class in C++ as shown :
    class name - Student
    attributes - name, roll, address, percentage
    methods - input(), display()*/

#include <iostream>
using namespace std;

class student{
    public:
        char name[100],address [20];
        int roll;
        double percentage;

        void input()
        {
            cout<<"enter name";
            cin>>name;
            cout<<"roll number";
            cin>>roll;
            cout<<"address";
            cin>>address;
            cout<<"percentage";
            cin>>percentage;
            }   
        void display()
        {
            if (percentage>45)
            {
                cout<<"congratulations here are your details "<<endl;
                 cout<<"name"<<name<<endl;
                 cout<<"roll"<<roll<<endl;
                 cout<<"address"<<address<<endl;
                 cout<<"percentage"<<percentage<<endl;
             } else {
                cout<<"sorry your score is below 45";


            }

        }     

};
int main()
{
    student s1;
    s1.input();
    s1.display();
    return 0;
}