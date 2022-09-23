//Sum of n nation numbers
/*
//Solution 1:-
//   n=100
#include <iostream>
using namespace std;
int fun1(int n){
   return n*(n+1)/2;
}
int main() {
    int n;
    cout<<"Enter the national number";
    cin>>n;
   int x=fun1(n);
   cout<<"Sum of nation number is "<<x;

}
//so this function excute time is 1.100s*/
//============================================================================
//Solution 2:-
/*
#include <iostream>

using namespace std;
int fun1(int n){
   int sum=0;
   for (int i=0;i<=n;i++){
    sum=sum+i;
   }
   return sum;
}
int main() {
    int n;
    cout<<"Enter the national number";
    cin>>n;
   int x=fun1(n);
   cout<<"Sum of nation number is "<<x;

}
//if n=100 so this function excute time is 1.250s*/

//==============================================================================
//Solution 3:-

#include <iostream>

using namespace std;
int fun1(int n){
   int sum=0;
   for (int i=0;i<=n;i++){
     for(int j=0;j<i;j++)
        sum++;
   }
   return sum;
}
int main() {
    int n;
    cout<<"Enter the national number";
    cin>>n;
   int x=fun1(n);
   cout<<"Sum of nation number is "<<x;

}
//if n=100 so this function excute time is 1.550s*/
