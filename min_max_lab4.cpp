#include<iostream>
#include<vector>
using namespace std;
void min_max(vector<int> &arr,int l,int u,int min,int max){

    if(l==u){
    min=arr[l];
    max=arr[u];
      return;
   }
   if(u-l==2){

    if(arr[u]>arr[l]){
      min=arr[l];
      max=arr[u];
    }
    else{
    max=arr[l];
    min=arr[u];
    }
    return;
   }
  if(u-l>2){

    if(arr[l]<arr[u]){
        if(min>arr[l]){
            min=arr[l];
        }if(max<arr[u]){
           max=arr[u];
        }
  }
  else{
    if(min>arr[u]){
        min=arr[u];
    }if(max<arr[l]){
       max=arr[l];
    }
  }
    int mid=(u+l)/2;
    min_max(arr,l,mid,min,max);
    min_max(arr,mid+1,u,min,max);
    return ;
}
}
int main(){
 vector<int> arr={1,2,3,4};
 int n=arr.size();
int l=0;int u=n-1;
int min=INT_MIN,max=INT_MAX;

min_max(arr,l,u,min,max);
cout<<"minimum value in the array is "<<min;
cout<<"maximum value in the array is"<<max;

}


