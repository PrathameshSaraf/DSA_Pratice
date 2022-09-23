//Linear Search= Time complexity is O(n)

#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int x){
   for (int i=0;i<n;i++){
        if(arr[i]==x)
        {
            return i;
        }
   }
}
int main(){
    int n,x;
    cout<<"enter the sizer of array";
    cin>>n;

    int arr[n];
    cout<<"Enter the Array Elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Which number you want to find ";
    cin>>x;
    int res=linearSearch(arr,n,x);

    if(res){
    cout<<"Elements Found At "<<res+1<<" position";
    }else{
    cout<<"Elements are not found";
    }
}
