#include<iostream>
using namespace std;
class si
{
    private:
    int p,t,i;
    public:
    void input()
    {
        cout<<"enter the principle,time"<<endl;
        cin>>p>>t;
 
    }
    void calculate(int r=15)
    {
         i=p*t*r/100;
    }
    void display()
    {
        cout<<"simple interest="<<i<<endl;
    }
};
int main()
{
    si s1;
    int r;
    char des;
    s1.input();
    cout<<"do you have rate write y for yes n for no"<<endl;
    cin>>des;
    if(des=='y')
    {
        cout<<"enter the rate"<<endl;
        cin>>r;
        s1.calculate(r);
    }
    else
    {
        s1.calculate();
    }
    s1.display();
    return 0;
    
}