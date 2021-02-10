#include<iostream>
#include<tuple>

using namespace std;

int main(){
	
	// tuple can contain any data type mix
	tuple <char, int, float> class_mark;
	char section;
	int clss;
	float cgpa;

	cout<<"\n\nEnter section: ";
	cin>>section;
	cout<<"Enter class: ";
	cin>>clss;
	cout<<"Enter cgpa: ";
	cin>>cgpa;
	
	// assiging values to the tuple elements
	class_mark = make_tuple(section, clss, cgpa);

	
	// accessing a tuple elements
	cout<<"\n\nSection: "<<get<0>(class_mark)<<"\nClass: "<<get<1>(class_mark)<<"\nCGPA: "<<get<2>(class_mark)<<endl;

	// changing elements in tuple; Tuples in cpp can be modified unlike python tuples which are immutable
	get<0>(class_mark) = 'B';
	get<2>(class_mark) = 8.0;
	cout<<"\n\nChanged Tuple elements:"<<endl;
	cout<<"Section: "<<get<0>(class_mark)<<"\nClass: "<<get<1>(class_mark)<<"\nCGPA: "<<get<2>(class_mark)<<endl;
		
	// length of the tuple
	cout<<"\n\nLength of the tuple: "<<tuple_size<decltype(class_mark)>::value<<endl;

	// swap two tuples
	tuple<char, int, int> t1('A', 10, 20);
	tuple<char, int, int> t2('B', 1, 2);

	cout<<"\n\nBefore swap\n"<<endl;
	cout<<"Elements in first tuple: "<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1)<<" "<<endl;
	cout<<"Elements in second tuple: "<<get<0>(t2)<<" "<<get<1>(t2)<<" "<<get<2>(t2)<<" "<<endl;
		
	t1.swap(t2);

	cout<<"\n\nAfter swap\n"<<endl;
        cout<<"Elements in first tuple: "<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1)<<" "<<endl;
        cout<<"Elements in second tuple: "<<get<0>(t2)<<" "<<get<1>(t2)<<" "<<get<2>(t2)<<" "<<endl;

	// unpack all tuple elements to variables
	char first;
	int second, third;

	tie(first, second, third) = t1;
	cout<<"\n\nElements after unpacking\n"<<endl;
	cout<<"First: "<<first<<"\nSecond: "<<second<<"\nThird "<<third<<endl;

	// unpack tuple certain tuple elements ignoring some
	third = 0;
	tie(first, second, ignore) = t2;
	cout<<"\n\nElements after unpacking\n"<<endl;
        cout<<"First: "<<first<<"\nSecond: "<<second<<"\nThird "<<third<<endl;

	return 0;
}
