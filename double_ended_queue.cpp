#include<bits/stdc++.h>
#define size 5
using namespace std;
int rear=-1,front=-1,Q[size];
//using namespace std;
void insert(){
	int element,c;
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
		cout<<"\n*****1.Insert from rear || 2. Insert from front*****\n";
		cout<<"\nEnter choice\n";
		cin>>c;
		switch(c){
			case 1:
				rear++;
				Q[rear]=element;
				cout<<endl<<element<<" is inserted in to Queue\n";
				break;
			case 2:
			      for(int i=rear;i>=front;i--){
			      	Q[i+1]=Q[i];
				  }	
				  Q[front]=element;
			      	rear++;
				  cout<<endl<<element<<" is inserted in to Queue\n";
				  break;
			default:
			        cout<<endl<<"Wrong choice\n";	  

			}
	}
}
void delet(){
	int c;
	if(rear==-1 && front==-1)
	cout<<endl<<"Queue is empty\n";
	else if(rear==front){
		cout<<endl<<Q[front]<<" is deleted\n";
	}else{
		cout<<"\n*****1.Delete from rear || 2. Delete from front*****\n";
		cout<<"\nEnter choice\n";
		cin>>c;
		switch(c){
			case 1:
				cout<<endl<<Q[rear]<<" is deleted\n";
				rear--;
				break;
			case 2:
			     cout<<endl<<Q[front]<<" is deleted\n";
			     front++;
				  break;
			default:
			        cout<<endl<<"Wrong choice\n";	  
		}
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
		//cout<<Q[rear];
	}
}
int main(){
		int c;
	while(1){
		cout<<endl<<"*****1.Insert||2.Delete||3.Display||4.Exit*****\n";
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
