#include<iostream>
using namespace std;
void print(int n,int k){
    if(n==0)return ;
    cout<<k;
    print(n-1,k+1);
}
int main(){
int n=5;
print(5,1);
}
