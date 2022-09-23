#include<iostream>
using namespace std;
int abs1(int n){
    int res;
  if(n<0){
       return res=n*(-1);
     }
  else{
   return res=n*1;
  }
}
int main(){
int n;
cout<<"Enter the number";
cin>>n;
int res=abs(n);
cout<<res;
}
