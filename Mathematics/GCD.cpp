//Greatest Common Factor
#include<math.h>
#include<iostream>
using namespace std;
//function 1
int gcd(int a,int b){
    int res=min(a,b);
    while(res>0){
        if(a%res==0 && b%res==0){
        break;}
        res--;
    }

    return res;
}

//function 2
int gcd2(int a,int b){
    while(a!=b){
    if(a>b)
        a=a-b;
    else
        b=b-a;
    }
    return a;
}

//function 3
 gcd3(int a,int b){
}
int main(){
   int a,b;
   cout<<"enter the two number for finding the GCD ";
   cin>>a>>b;

  int res= gcd(a,b);
  cout<<"greatest common factor is "<<res<<endl;

  int res2=gcd2(a,b);
  cout<<" second function "<<res2;

  int res3=gcd3(a,b);
  cout<<"third function "<<res3;
}
