#include<iostream>
using namespace std;
int findpower(int x,int n){
    int res=1;;
   for(int i=1;i<=n;i++){
    res=res*x;
   }
   return res;
}

int findpower1(int x,int n){
    if(n==0)return 1;
    int temp=findpower1(x,n/2);
    temp=temp*temp;
    if(n%2==0)return temp;
    else return temp*x;
}
int findpower2(int x,int n){
     int res=1;
     while(n>0){
        if(n%2!=0){
            res=res*x;
        }
        x=x*x;
        n=n/2;
     }
     return res;
}
int main(){
int n,x;
cout<<"Enter the number";
cin>>x;
cout<<"enter the power";
cin>>n;

int res=findpower2(x,n);
cout<<res;
}
