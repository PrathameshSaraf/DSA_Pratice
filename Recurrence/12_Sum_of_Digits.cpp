#include<iostream>
using namespace std;
int sumDigits(int n){
 if(n<=9)return n;
  else return sumDigits(n/10)+n%10;
}
int main(){
int n;
cout<<"enter the number";
cin>>n;
int res=sumDigits(n);
cout<<"Sum  of digits "<<res;
}
