//find the given number all divisor
#include<iostream>
using namespace std;
int divisor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0)
            cout<<i<<" ";
    }
    return 0;
}

int divisor1(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i)
                cout<<n/i<<" ";}
    }
    return 0;
}
int divisor2(int n){
    int i;
    for(i=1;i*i<n;i++){
        if(n%i==0){
            cout<<i<<" ";}}
    for(;i>=1;i--){
            if(n%i==0){
                cout<<n/i<<" ";}
    }
    return 0;
}
int main(){
   int n;
   cout<<"enter the number ";
   cin>>n;
   divisor2(n);
}
