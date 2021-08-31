#include<iostream>
using namespace std;
template<class t>
class Test{
	t a,b;
	public:
		void get(){
			cin>>a>>b;
		}
		t sum();
};
template<class t>
t Test<t>::sum(){
	return a+b;
}
int main(){
	Test <int>obj;
	Test <float> obj1;
	cout<<"Enter two integer number"<<endl;
	obj.get();
	cout<<"Sum is  "<<obj.sum();
	cout<<"Enter two float number "<<endl;
	obj1.get();
	cout<<"Sum is  "<<obj1.sum();
	
	
}
