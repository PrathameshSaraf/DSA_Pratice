//print the following output using recurrence
//1 2 1 3 1 2 1

#include<iostream>
using namespace std;
void print(int n){
    if(n==0)return;

    print(n-1);
    cout<<n<<endl;
    print(n-1);
}
int main()
{
int n=3;
print(n);
}
