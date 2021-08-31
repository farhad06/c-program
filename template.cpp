#include<iostream>
 using namespace std;
 template <class t>
 t add(t m,t n){
 	return m+n;
 }
template <class t2>
 t2 multi(t2 a,t2 b){
 	return a*b;
 }
 
 int main(){
 	cout<<"Sum of integer is: "<<add(5,6)<<endl;
 	cout<<"Sum of flote is: "<<add(1.3,5.4)<<endl;
 	cout<<multi(6,4)<<"\n";
 	cout<<multi(5.6,2.4);
 	return 0;
 }
