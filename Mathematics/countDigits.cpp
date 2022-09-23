//count digits
#include<iostream>
using namespace std;

int countDigits(int n){
    int res=0;
    while(n>0){
    n=n/10;
    res++;
    }
    return res;
}
int main(){
int n;
    cout<<"Enter the Number ";
    cin>>n;

   int res=countDigits(n);
   cout<<res;
}
