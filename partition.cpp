#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

	int n;

	cout<<"Enter the size of the arr: ";
	cin>>n;

	vector<int> v;

	for(int i=0;i<n;i++){
		int t;
		cout<<"Enter the elem: ";
		cin>>t;
		v.push_back(t);
	}
	
	// Partitions the array to two halves according to condition given,
	// first half being the right cond and the second being the rest of
	// the elements
	partition(v.begin(), v.end(), [](int x){
			return x%2==0;
		});

	for(int x : v){
		cout<<x<<'\t';
	}
	cout<<endl;
	return 0;
}
