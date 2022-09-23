//trailing zeros in factorial

#include<iostream>
using namespace std;

int trailingZeros(int n){
    int res=1,p=0;
    for(int i=1;i<=n;i++)
    {
        res=res*i;
    }
    while(res%10==0){
            p++;
        res=res/10;
    }
    return p;
}

int trailinZeros1(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res=res+(n/i);
    }
    return res;
}
int main(){
    int n;
    cout<<"enter the Number ";
    cin>>n;
    int res=trailingZeros(n);
    cout<<"total zeros in "<<n<<" factorial is "<<res<<endl;

    int p=trailinZeros1(n);
    cout<<"2nd function output is"<<p;
}
