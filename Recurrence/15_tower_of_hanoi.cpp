#include<iostream>
using namespace std;
void TOH(int n,char frod,char trod,char arod){
if(n==0)return;
TOH(n-1,frod,arod,trod);
cout<<"Move Disk "<<n<<" from rod "<<frod<<" to road "<<trod<<endl;
TOH(n-1,arod,trod,frod);
}
int main(){
int n=3;
TOH(n,'A','C','B');
}
