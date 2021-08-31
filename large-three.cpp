#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void printArr(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
int main(){
	int arr[50],n,i,j;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the array\n";
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Array is:\n";printArr(arr,n);
	reverse(arr,n);
	cout<<"\n\nThe three large elements are: "<<arr[n-3]<<" "<<arr[n-2]<<" "<<arr[n-1];
	//cout<<"Reverse of the list is: \n";printArr(arr,n);
	return 0;
}
