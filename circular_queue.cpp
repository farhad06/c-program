#include<bits/stdc++.h>
#define size 5
using namespace std;
int rear=-1,front=-1,Q[size];
void insert(){
	int element;
	cout<<endl<<"Enter a number\n";
	cin>>element;
	if((rear+1)%size==front)
	cout<<endl<<"Queue is full\n";
	else if(rear==-1 && front==-1){
		rear++;front++;
		Q[rear]=element;
		cout<<endl<<element<<" is inserted in to Queue\n";
	}else{
		rear=(rear+1)%size;
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
		front=(front+1)%size;
	}
}
void display(){
	int i=front;
	if(rear==-1 && front==-1)
	cout<<endl<<"Queue is empty\n";
	else{
		cout<<"\nQueue elements are:--\t";
		while(i!=rear){
			cout<<Q[i]<<"\t";
			i=(i+1)%size;
		}
		cout<<Q[rear];
	}
}
void peek(){
	if(rear==-1 && front==-1)
	cout<<endl<<"Queue is empty\n";
	else{
		cout<<endl<<Q[front]<<" is the front element";
	}
}
int main(){
		int c;
	while(1){
		cout<<endl<<"1.Insert||2.Delete||3.Display||4.Exit||5.Peek\n";
		cout<<endl<<"Enter Your choice\n";
		cin>>c;
		switch(c){
			case 1:insert();break;
			case 2:delet();break;
			case 3:display();break;
			case 4:exit(0);
			case 5:peek();break;
			default:cout<<endl<<"Wrong choice\n";
		}
	}
return 0;
}
