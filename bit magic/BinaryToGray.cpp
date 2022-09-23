#include<iostream>
using namespace std;
int binryToGray(int n){
    if(n==0)return n;
    return (n^(n>>1));
}
int main(){
int n;
cout<<"Enter the deimal number ";
cin>>n;
int res=binryToGray(n);
cout<<"gray number is "<<res;
}
