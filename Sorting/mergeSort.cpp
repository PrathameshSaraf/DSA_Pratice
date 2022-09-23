#include<iostream>
using namespace std;
void merge1(int arr[],int lb,int ub,int mid){

    int i=lb,k=lb;
    int j=mid+1;
    int b[ub+1];
    while (i<=mid && j<=ub){
        if(arr[i]<=arr[j]){
            b[k]=arr[i];
            i++;
            k++;
        }
        else{
            b[k]=arr[j];
            j++;
            k++;
        }

    }
    if(i>mid){
        while(j<=ub){
             b[k]=arr[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid){
             b[k]=arr[i];
                i++;
                k++;
        }
    }

    for(int i=0;i<5;i++){
        cout<<b[i]<<endl;

    }
}

void mergesort(int arr[],int lb,int ub){
int mid;
  if(lb>=ub)return ;
    mid=(lb+ub)/2;
    mergesort(arr,lb,mid);
    mergesort(arr,mid+1,ub);
    merge1(arr,lb,ub,mid);

}
int main(){

    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lb=0,ub=n-1;
    mergesort(arr,lb,ub);


}
