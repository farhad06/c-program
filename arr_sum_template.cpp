#include<iostream>
using namespace std;
template<class t>
t sum(t a[],int size){
	t s=0;
	for(int i=0;i<size;i++){
		s=s+a[i];
	}
	return s;
}

int main(){
	int a[]={1,2,3,4,5};
	float m[]={1.3,2.6,5.6};
	cout<<"The sum of integer array is: "<<sum(a,5)<<endl;
	cout<<"Sum of floate array is: "<<sum(m,3);
	return 0;
}
