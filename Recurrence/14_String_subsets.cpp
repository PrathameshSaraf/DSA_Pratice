#include<iostream>
using namespace std;
void subsets(string s,string cur="",int i=0){
if(i==s.length()){
    cout<<cur<<endl;
    return ;
}
subsets(s,cur,i+1);
subsets(s,cur+s[i],i+1);

}
int main(){
string s;
cout<<"enter the string";
cin>>s;
int i=0;string cur="";
subsets(s,cur,i);
cout<<"completed";

}
