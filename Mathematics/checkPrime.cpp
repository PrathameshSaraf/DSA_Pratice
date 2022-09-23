//check prime
#include<iostream>
using namespace std;

bool checkPrime(int n){
     if(n==1) return false;
  for(int i=2;i<n;i++){
    if(n%i==0)
        return false;
  }
  return true;
}
bool checkPrime1(int n){
     if(n==1) return false;
  for(int i=2;i*i<=n;i++){
    if(n%i==0)
        return false;
  }
  return true;
}

bool checkPrime2(int n){
    if(n==1) return false;
    if(n==2 || n==3) return false;
    if(n%2==0 && n%3==0)return true;
  for(int i=5;i*i<=n;i+6){
    if(n%i==0)
        return false;
  }
  return true;
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;

    bool s=checkPrime2(n);
    if(s){
        cout<<"number is prime ";
    }
    else{
        cout<<"number is not prime";
    }
}
