//find the factorial recurrence
#include<iostream>
using namespace std;
int facto(int n,int k){
if(n==0 || n==1) return k;

return facto(n-1,k*n);
}
int main(){
int n=4,k=1;
int res=facto(n,k);
cout<<res;
}
