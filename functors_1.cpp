#include <iostream>

class absVal{

public:

// just like operator overloading, we can overload an object to behave as if it is a function
// we use the below syntax to convert an object to behave as a function
// this allows the object to be "called" like a function at any part of the program
// unlike the usual way of calling obj.some_func(); 
	int operator()(int b){
		return b > 0 ? b : -(b);
	}

};

using namespace std;

int main(){

	int a = 234;
	int b = -455;

	absVal abs_v;
	cout<<"Element 1 before passing to abs_v(): "<<a<<endl;
	cout<<"Element 1 after passing to abs_v(): "<<abs_v(a)<<endl<<endl;     // calling the object as if it is a function
	cout<<"Element 2 before passing to abs_v(): "<<b<<endl;
	cout<<"Element 2 after passing to abs_v(): "<<abs_v(b)<<endl;           // calling the object as if it is a function

	return 0;

}
