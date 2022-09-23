//palindrome
#include<iostream>
using namespace std;
bool checkPalindrome(int n){
int temp=n;
int res,r;

while(n>0){
    r=n%10;
    res=res*10+r;
    n=n/10;
}
if(res==temp)
    return 1;
else
    return 0;
}
int main(){
  int n;
  cout<<"Enter the Number";
  cin>>n;

  int res=checkPalindrome(n);
  if(res){
    cout<<"number is palindrome";
  }
  else
    cout<<"number is not palindrome";
}
