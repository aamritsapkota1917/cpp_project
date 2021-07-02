#include<iostream>
using namespace std;
class uniary{
int a,b,c;
public:
void getdata(int x,int y,int z){
a=x;
b=y;
c=z;
}
//return type operator op() eg +
void operator +(){
a= +a;
b= +b;
c= +c;

}
void display (){

cout <<"value of a is:"<<a<<endl;
cout <<"value of b is:"<<b<<endl;
cout <<"value of c is:"<<c<<endl;
}
};
int  main() {
uniary u1; 
u1.getdata(4,2,-4);
u1.display();
+u1;
u1.display();
}