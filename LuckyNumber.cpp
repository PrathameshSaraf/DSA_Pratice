#include<iostream>
using namespace std;
int lucky(int arr[],int k,int n)
{
    if(n==0) return 0;
    int i=0;
    while(n!=0){
    cout<<arr[i]<<endl;
    arr[i+1]=arr[i+2];

    i+=2;
    n=n-2;
    }
    cout<<sizeof(arr)<<endl<<n<<endl<<k<<endl<<i<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i];
}


}


int main(){
    int n=10;
int arr[n];
cout<<"enter the 10 elements";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int k=2;
int res=lucky(arr,k,n);

}
