//Selection sort

#include<iostream>
using namespace std;

void selection_Sort(int arr[],int n){
    int pos=0,temp;
    for(int i=0;i<n;i++){
    for(int k=pos+1;k<n;k++){
        if(arr[pos]>arr[k])
            pos=k;
    }
     temp=arr[i];
     arr[i]=arr[pos];
     arr[pos]=temp;
     pos=i+1;
    }
 cout<<"after sorting elements";
 for(int i=0;i<n;i++)
    cout<<arr[i];
}
int main(){
    int n;
cout<<"Enter the size of array";
cin>>n;

int arr[n];
cout<<"enter the elements of array";
for(int i=0;i<n;i++)
    cin>>arr[i];

    selection_Sort(arr,n);

}
