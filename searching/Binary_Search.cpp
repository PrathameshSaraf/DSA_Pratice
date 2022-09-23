//Binary Search
#include<iostream>
using namespace std;

int binarySearch(int arr[],int x,int n){  //function for searching

    int mid,beg=0;//initilize the variable begin and mid ;
    int en=n-1;
    int cot=0;
    while(beg<=en){
           cot++;
           cout<<cot<<endl;
        mid=(beg+en)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(x>arr[mid]){
            beg=mid+1;
        }
        else {
            en=mid-1;
        }

    }
return 0;
    }
int main(){
    int n,x;
    cout<<"enter the size of Array";
    cin>>n;

    int arr[n];
    cout<<"enter the array Elements in assending Order";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<"which number you want to find";
    cin>>x;
    int res=binarySearch(arr,x,n);
    if(res){
        cout<<"elements is found  at "<<res+1<<" position";
    }
    else
        {
        cout<<"elements are not found";}
}
