#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[50],n,i;
	cout<<"Enter the size of list\n";
	cin>>n;
	cout<<"Enter the list\n";
	for(i=0;i<n;i++)
	cin>>arr[i];
	int max=arr[0],min=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}else{
			min=arr[i];
		}
	}
	cout<<"Maximum element of this list is: "<<max<<endl;
	cout<<"Minimum element of this list is: "<<min;
	return 0;
}
