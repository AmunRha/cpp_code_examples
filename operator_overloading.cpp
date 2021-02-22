#include <iostream>

using namespace std;

class math{

	int a;
	int b;
	int res;

public:

// helper functions start

	int get_a(){
		return this->a;
	}

	int get_b(){
		return this->b;
	}

	int get_res(){
		return this->res;
	}

	void set_a(int a){
		this->a = a;
	}

	void set_b(int b){
		this->b = b;
	}

	void set_res(int res){
		this->res = res;
	}

	math(){
		this->a = 0;
		this->b = 0;
		this->res = 0;
	}

	math(int a){
		this->a = a;
		this->b = 0;
		this->res = 0;
	}
  
// helper functions end


// operator overloading is possible in c++ in which you can overload a operator
// to do something it is not meant to do, in this case i am using the operator + 
// to subtract the result of two given class object elements and store it into class.res
// this is exclusive only for classes and its objects and it can be extended to do any sort 
// of things
	math operator+(math elem2){
		math result;
		result.a = this->a;
		result.b = this->b;
		result.res = this->a - elem2.a;
		return result;
	}
};

int main(){

// setting two objects
	math elem(20);
	math elem2(5);
	cout<<"Element 1: "<<elem.get_a()<<endl;
	cout<<"Element 2: "<<elem2.get_a()<<endl;

// getting resulting object
	math elem3;
	elem3 = elem + elem2;

	cout<<"Element 3: "<<elem3.get_res()<<endl;
	return 0;
}
