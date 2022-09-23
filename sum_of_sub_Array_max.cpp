#include<iostream>
using namespace std;
int max_Array(int arr[],int n){

int i,max1=0,c=0,dif1=1,dif;
for(int i=0;i<n;i++){
    dif=arr[i+1]-arr[i];
    if(dif==dif1){
        c++;
    }else{
    dif1=dif;
    }
    cout<<c;
    if(max1<c){

        max1=c;
    }
}
if(dif1>0){
    return max1+2;
}
 else return max1+1;

}
int main(){
int n;
cout<<"enter the size of array ";
cin>>n;

int arr[n];
cout<<"enter the elements of array "<<endl;
for(int i=0;i<n;i++)
    cin>>arr[i];

int res=max_Array(arr,n);
cout<<"maximum count is"<<res;

}
