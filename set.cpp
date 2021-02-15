#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main(){

	// Declaring a set, with greater elements first
	// By default sets are ordered in asc order
	// Sets are basically equivalent to tuples in terms of immutability
	// Sets are ordered
	// Sets contain unique values
	set <int, greater<int>> s1;

	// To add elements onto sets
	s1.insert(20);
	s1.insert(60);
	s1.insert(30);
	s1.insert(10);
	s1.insert(50);
	s1.insert(40);

	// Iterating through set elements
	set <int, greater<int>>::iterator i;
	cout<<"Set1 elements: "<<endl;
	for(i = s1.begin();i!=s1.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;

	// Copying set1 to set2
	set <int, greater<int>> s2(s1.begin(), s1.end());
	
	cout<<"Set2 elements: "<<endl;
        for(i = s2.begin();i!=s2.end();i++){
                cout<<*i<<" ";
        }
        cout<<endl;

	// set.erase() can be used to erase a particular element or a range of element
	
	// To remove a range of elements in a ordered set
	s1.erase(s1.begin(), s1.find(30));
	cout<<"Set1 elements: "<<endl;
        for(i = s1.begin();i!=s1.end();i++){
                cout<<*i<<" ";
        }
        cout<<endl;

	// To remove a particular element
	s2.erase(30);
	cout<<"Set2 elements: "<<endl;
        for(i = s2.begin();i!=s2.end();i++){
                cout<<*i<<" ";
        }
        cout<<endl;

	return 0;
}
