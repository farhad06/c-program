#include<bits/stdc++.h>
#define size 5
using namespace std;
int rear=-1,front=-1,Q[size];
void insert(){
	int element;
	cout<<endl<<"Enter a number\n";
	cin>>element;
	if(rear==size-1)
	cout<<endl<<"Queue is full\n";
	else if(rear==-1 && front==-1){
		rear++;
		front++;
		Q[rear]=element;
		cout<<endl<<element<<" is inserted in to Queue\n";
	}else{
		rear++;
		Q[rear]=element;
		cout<<endl<<element<<" is inserted in to Queue\n";
	}
}
void delet(){
	if(rear==-1 && front==-1)
		cout<<endl<<"Queue is empty\n";
	else if(rear==front){
		cout<<endl<<Q[front]<<" is deleted\n";
		rear=front=-1;
	}else{
		cout<<endl<<Q[front]<<" is deleted\n";
		front++;
	}
}
void display(){
	if(rear==-1 && front==-1)
	cout<<endl<<"Queue is empty\n";
	else{
		cout<<endl<<"Elements are::-->";
		for(int i=front;i<=rear;i++){
			cout<<Q[i]<<"\t";
		}
	}
}
int main(){
	int c;
	while(1){
		cout<<endl<<"1.Insert||2.Delete||3.Display||4.Exit\n";
		cout<<endl<<"Enter Your choice\n";
		cin>>c;
		switch(c){
			case 1:insert();break;
			case 2:delet();break;
			case 3:display();break;
			case 4:exit(0);
			default:cout<<endl<<"Wrong choice\n";
		}
	}
return 0;
}
