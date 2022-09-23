#include<iostream>
using namespace std;
bool isSparse(int n){
  if(n==0) return 0;
   return (n&(n>>1));
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
 bool res=isSparse(n);
 if(res)cout<<"is not sparse number";
 else cout<<"is sparse number";

}
