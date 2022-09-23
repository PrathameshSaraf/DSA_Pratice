#include<iostream>
using namespace std;
float calfahrenheit(float cel){
  float f;
 f=( (cel*9)/5)+32;
    return f;
}
int main(){
float cel;
cout<<"enter the celsius in degree";
cin>>cel;

float res=calfahrenheit(cel);
cout<<res;
}
