#include<iostream>
using namespace std;
int maxPieces(int n,int a, int b, int c){

    if(n==0)return 0;
    if(n<0)return -1;
    int A=maxPieces(n-a,a,b,c);
    int B=maxPieces(n-b,a,b,c);
    int C=maxPieces(n-c,a,b,c);
    int res1=(A>B)?A:B;
    int res=max(res1,C);
  if(res==-1)return -1;

  return res+1;

}int main(){
int a,b,c,n;
cout<<"enter the rope length";
cin>>n;

cout<<"enter the 3 length of pieces A,B,C (options)";
cin>>a>>b>>c;

int res=maxPieces(n,a,b,c);
cout<<res;
}
