#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int n;
	
	cout<<"Enter the size of the array: ";
	cin>>n;

	int a[n], b[n];
	int res[n];

	for(int i=0;i<n;i++){
		cout<<"Enter element for first array: ";
		cin>>a[i];
	}

	for(int i=0;i<n;i++){
		cout<<"Enter element for second arra: ";
		cin>>b[i];
	}

	// transform(Iterator inputBegin, Iterator inputEnd, Iterator OutputBegin, unary_operation)
	// Store the addition of the two arrays of same size
	// to another array of the same size
	transform(a, a+n, b, res, plus<int>());

	for(int i : res){
		cout<<i<<'\t';
	}
	cout<<endl;


	return 0;
}
