#include<iostream>
using namespace std;
int sumDigits(int n){

if(n<=9)return n;



return sumDigits((n%10)+sumDigits(n/10));
}
int main(){
    long n=99999;
    int res=sumDigits(n);
    cout<<res;
}
