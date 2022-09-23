#include<iostream>
using namespace std;
int getSum(int n){
 if(n==0)return 0;
 return n+getSum(n-1);
}
int main(){
int m;
cout<<"enter the number";
cin>>m;
int res=getSum(m);
cout<<"sum of natural number is "<<res;
}
