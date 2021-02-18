#include <stack>
#include <iostream>

using namespace std;

void show_stack(stack <int> s){
	while(!s.empty()){
		cout<<'\t'<<s.top();
		s.pop();
	}
	cout<<endl;
}

int main(){
	stack<int> s;
	int elem;

	for(int i=0;i<5;i++){
		cout<<"\nEnter element: ";
		cin>>elem;
		s.push(elem);
	}

	show_stack(s);


	return 0;
}
