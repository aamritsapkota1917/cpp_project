#include<iostream>
using namespace std;
struct student
{
    char name[50];
    int roll;
    float marks;
} ;

int main()
{
    student s;
    cout << "enter information," << endl;
    cout << "enter name:";
    cin >> s.name;
    cout << "enter roll number:";
    cin >> s.roll;
    cout << "enter marks:";
    cin >> s.marks;

    cout << "n/displaying information," << endl;
    cout << "name: " << s.name << endl;
    cout << "roll: " << s.roll << endl;
    cout << "marks:" << s.marks << endl;
    return 0;
    }
    