#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
	stack<int>stk;
	vector<int>v;
	stk.push(20);
	stk.push(30);
	stk.push(40);
	cout<<"Top element is: "<<stk.top()<<endl;
	stk.pop();
	cout<<"After poped Top element is: "<<stk.top()<<endl;
	//cout<<"is poped out";
	v.push_back(6);
	v.push_back(9);
	v.push_back(3);
	cout<<"Vector elements are: ";
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<"\t";
	}
	return 0;
}
