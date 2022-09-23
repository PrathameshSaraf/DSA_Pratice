#include<iostream>
using namespace std;
int main(){
int n=5,arr[5];
cout<<"enter the 5 elements for creating a array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
for(int i=0;i<n;i++){
    int count1=0;
    for(int j=0;j<n;j++){
        if(arr[i]==arr[j])
            count1++;

    }
    if(count1%2!=0){
        cout<<arr[i];
    }
}
}
