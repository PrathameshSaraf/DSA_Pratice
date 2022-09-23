#include<iostream>
using namespace std;
int countConsecutive(int n){
  int co=0;
    if(n==0) return 0;
    while (n!=0){
        n=(n&(n<<1));
        co++;
    }
    return co;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;

    int res=countConsecutive(n);
    cout<<"total consecutive is "<<res;
}
