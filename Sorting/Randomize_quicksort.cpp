#include<iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int partition1(int arr[],int lb,int hb){
    int pivot=arr[lb];
    int start=lb,end1=hb;
    while(start<end1)
    {
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end1]>pivot){
            end1--;
        }
        if(start<end1){
            int temp=arr[start];
            arr[start]=arr[end1];
            arr[end1]=temp;
        }
    }
    int t=arr[lb];
    arr[lb]=arr[end1];
    arr[end1]=t;
    return end1;

}
int partition_r(int arr[], int low, int high)
{
    srand(time(NULL));
    int random = low + rand() % (high - low);
    int p=arr[high];
    arr[high]=arr[random];
    arr[random]=p;

    return partition1(arr, low, high);
}
void quicksort(int arr[],int lb,int hb){
    if(lb<hb){
  int loc=partition_r(arr,lb,hb);
  quicksort(arr,lb,loc-1);
  quicksort(arr,loc+1,hb);
  }

}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int lb=0,hb=n-1;
    quicksort(arr,lb,hb);
for(int i=0;i<=hb;i++){
    cout<<" "<<arr[i]<<" ";
   }

}
