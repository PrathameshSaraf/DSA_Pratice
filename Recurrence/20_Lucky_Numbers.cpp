#include<iostream>
using namespace std;
bool isLucky(int n){
int counter=2;
if(counter>n)return 1;

if(n%counter==0)return 0;
int np=n-(n/counter);
counter++;
return isLucky(np);
}

int main(){

    int n;
    cout<<"enter the number";
    cin>>n;
cout<<isLucky(n);
}
