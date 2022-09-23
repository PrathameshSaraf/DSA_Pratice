#include<iostream>
using namespace std;
bool ispow(int n){
   if(n==0)return false;
   while(n!=1){
    if(n%2!=0)return false;
    n=n/2;
   }
   return true;
}

bool ispow1(int n){
   if(n==0){return false;}

   return ((n&(n-1))==0);
}

int main(){
int n,k;
cout<<"enter the number";
cin>>n;

k=ispow1(n);
if(k)cout<<"true";
else cout<<"false";
}
