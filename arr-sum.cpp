#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[50],n,i;
   cout<<"Enter the size of the array"<<endl;
   cin>>n;
   cout<<"Enter the array\n";
   for(i=0;i<n;i++)
   cin>>arr[i];
   int sum=0;
   for(i=0;i<n;i++){
   	sum+=arr[i];
   }
   float avg=sum/n;
   cout<<"The sum of those elements is: "<<sum<<endl;
   cout<<"Avarage of these elements is: "<<avg;
   return 0;
}
