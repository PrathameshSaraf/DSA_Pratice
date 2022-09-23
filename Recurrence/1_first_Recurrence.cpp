//Write a program to print a numbers given format
// 3 2 1  1 2 3

#include<iostream>
using namespace std;
void fun(int n){
if(n==0) return ;
cout<<n<<endl;
fun(n-1);
cout<<n<<endl;

}
int main(){
  int n=3;
  fun(n);
  cout<<"All recurrence completed";
}
