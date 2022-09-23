//bubble sort
#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    int temp;
    for(int i = 0; i < n; i++)
    {
      for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i];
}
int main(){
    int n;
    cout<<"enter the Size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the Elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
}
