/*
WAP to define a class named employee with it's data members ID, Name and Salary. Read records of five employees and display the record in tabular form [Hint- to make the data display in tabular form, use "/t"(escape sequence) for line spaces*/
#include<iostream>
using namespace std;
class employee
{
    private:
    char name[20];
    int id,salary;
    public:
    void input()
    {
        cout<<"enter name id and salary"<<endl;
        cin>>name>>id>>salary;
 
    }
    void display()
    {
        cout<<"name\t"<<"id\t"<<"salary\t"<<endl;
        cout<<name<<"\t"<<id<<"\t"<<salary<<"\t"<<endl;
 
    }
};
int main()
{
    employee e[3];
    
    for(int i=0;i<3;i++)
    {
        e[i].input();
    }
    for(int i=0;i<3;i++)
    {
        e[i].display();
    }
    return 0;
}