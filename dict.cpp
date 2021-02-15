#include <iostream>
#include <unordered_map>
#include <any>
#include <string>

using namespace std;

int main(){
	
	// Dictionaries cannot be implemented as in python since c++ is statically compiled lang
	// But due to the recent support of "any" data type in c++17 we can somewhat achieve this feature with the following implementation.
	unordered_map<string, any> personal_info;
	string name;
	int age;
	int grade;
	string hobby;

	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter age: ";
	cin>>age;
	cout<<"Enter grade: ";
	cin>>grade;
	cout<<"Enter hobby: ";
	cin>>hobby;

	// Assiging the key and values are simple in map
	personal_info["name"] = name;
	personal_info["age"] = age;
	personal_info["grade"] = grade;
	personal_info["hobby"] = hobby;

	// Before printing or assiging a value from a dict which uses the value data type as any
	// it might be a good choice to cast it to the approriate data type before further usage
	cout<<"\n\nPrinting values from dict: "<<endl;
	cout<<"Name: "<<any_cast<string>(personal_info["name"])<<"\nAge: "<<any_cast<int>(personal_info["age"])<<"\nGrade: "<<any_cast<int>(personal_info["grade"])<<"\nHobby: "<<any_cast<string>(personal_info["hobby"])<<endl;

	return 0;
}
