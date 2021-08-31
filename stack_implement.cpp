#include<iostream>
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
		cout<<endl<<n<<" is push into stack"<<endl;
	}
}
void pop(){
	if(top==-1)
	cout<<endl<<"Stack is underflow\n";
	else{
		cout<<stack[top]<<" is poped out\n";
		top--;
	}
}
void display(){
	if(top==-1)
	cout<<endl<<"Stack is Empty\n";
	else{
		cout<<"Elements of the stack are:\n";
		for(int i=top;i>=0;i--){
			cout<<stack[i]<<endl;
		}	
	}
}
int peek(){
	int element;
	if(top==-1)
	cout<<endl<<"Stack is Empty\n";
	else{
		element=stack[top];
	}
	return element;
}
bool isEmpty(){
	if(top==-1)
	return true;
	else
	return false;
}
bool isFull(){
	if(top==MAX)
	return true;
	else
	return false;
}
int main(){
	bool result;
	int c,k;
	while(1){
		cout<<"1.PUSH||2.POP||3.DISPLAY||4.EXIT||5.PEEK||6.isEmpty||7.isFull\n";
		cout<<"Enter Your choice\n";
		cin>>c;
		switch(c){
			case 1:push();break;
			case 2:pop();break;
			case 3:display();break;
			case 4:exit(0);
			case 5:k=peek();
			  		cout<<"Top element is: "<<k<<endl;
			  		break;
			case 6: result=isEmpty();
					if(result==true)
					cout<<endl<<"Stack is empty\n";
					else
					cout<<endl<<"Stack is not empty\n";
					break;
			case 7: result=isFull();
			 		if(result==true)
					cout<<endl<<"Stack is Full\n";
					else
					cout<<endl<<"Stack is Not Full\n";
					break;
			default:cout<<"Wrong Choice\n";
		}
	}
    return 0;
}
