//find log 2 value of given number using recurrence
// i/p-: 9        o/p-:3
#include<iostream>
using namespace std;
int sqrtRoot(int n){
if (n==1)return 0;

return 1+sqrtRoot(n/2);
}
int main(){
int n=9;
int res=sqrtRoot(n);
cout<<res;
}
