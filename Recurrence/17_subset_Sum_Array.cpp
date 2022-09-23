#include<iostream>
using namespace std;
int countSubset(int arr[],int n,int sum){
if(n==0)
    return (sum==0)?1:0;
return countSubset(arr,n-1,sum)+countSubset(arr,n-1,sum-arr[n-1]);
}
int main(){
int n;
cout<<"Enter the size of array";
cin>>n;
int arr[n];
cout<<"Enter the Array Elements";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int sum;
cout<<"enter the sum ";
cin>>sum;

cout<<countSubset(arr,n,sum);
}
