#include <iostream>
#include <queue>

using namespace std;

void show_queue(queue<int> q){
	
	while(!q.empty()){
		cout<<'\t'<<q.front();
		q.pop();
	}
	
	cout<<endl;
}

int main(){
	
	queue<int> q;
	int elem;

	for(int i=0;i<5;i++){
		cout<<"Enter the elem: ";
		cin>>elem;
		q.push(elem);
	}

	show_queue(q);
	return 0;
}
