//factorial
#include<iostream>
using namespace std;
int facto(int n){
    int res=1;
    for(int i=1;i<=n;i++){
        res=res*i;
    }
cout<<"factorial without recurrence function"<<res;
}
int facto1(int n){
    if(n==0)
        return 1;
    return n*facto1(n-1);
}
int main(){
int n;
cout<<"enter the number ";
cin>>n;

int res=facto1(n);
cout<<res;
}
