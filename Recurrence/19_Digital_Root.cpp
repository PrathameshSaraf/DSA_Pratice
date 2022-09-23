#include<iostream>
using namespace std;

int sumDigits(int n){

if(n<=9)return n;
return sumDigits((n%10)+sumDigits(n/10));
}
int main(){
int n;
cout<<"enter the number";
cin>>n;

cout<<sumDigits(n);
}
