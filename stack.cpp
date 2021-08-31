#include<bits/stdc++.h>
#define MAX 5
using namespace std;
int top =-1 ,stack[MAX];
void push(){
	int n;
	cout<<"Enter a new number\n";
	cin>>n;
	if(top==MAX)
		cout<<"Stack is overflow\n";
	else{
		top++;
		stack[top]=n;
		cout<<endl<<" is push into stack"<<endl;
	}
}

int main(){
	int c;
	while(1){
		cout<<"1.PUSH||2.POP||3.DISPLAY||4.EXIT\n";
		cout<<"Enter Your choice\n";
		cin>>c;
		switch(c){
			case 1:push();break;
//			case 2:pop();break;
//			case 3:display();break;
			case 4:exit(0);
			default:cout<<"Wrong Choice\n";
		}
	}
    return 0;
}
