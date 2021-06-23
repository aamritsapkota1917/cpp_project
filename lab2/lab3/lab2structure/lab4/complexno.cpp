#include<iostream>
using namespace std;

// defination of class Complex
class Complex
{
	private:
		float real;
		float imag;
	public:
		//default constructor to initialize
		Complex()
        {
			real = 0;
			imag = 0;
		}
		// parameterized constructor
		Complex(float r, float i)
        {
			real = r;
			imag = i;
		}
		//function to add complex number
		//adds complex number with the object 
		//that invokes this function and return
		Complex add(Complex c){
			// return directly, with nameless object
			return Complex(real + c.real, imag + c.imag);
		} 
		// function to display
		void display(){
			cout<<"("<<real<<","<<imag<<")"<<endl;
		}
};

int main(){
	Complex c1(2.3, 4.4), c2(3.3, 4.5), c3;
	c3 = c1.add(c2);//adds c1 with c2 and returns to c3
	c1.display();
	c2.display();
	cout<<"And the sum is :"<<endl;
	c3.display();
	return (0);
}