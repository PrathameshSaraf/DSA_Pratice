//insertion sort
#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    int temp;
    for(int i=1;i<n;i++){
        for(int k=0;k<n;k++){
            if(arr[k]>arr[i]){
                temp=arr[i];
                arr[i]=arr[k];
                arr[k]=temp;
            }
        }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;

    }
    cout<<"after sorting array";
    for(int i=0;i<n;i++)
        cout<<arr[i];
}
int main(){
int n;
cout<<"enter the size of array";
cin>>n;
int arr[n];
  cout<<"enter the elements of array";
  for(int i=0;i<n;i++)
    cin>>arr[i];
insertion_sort(arr,n);
}
