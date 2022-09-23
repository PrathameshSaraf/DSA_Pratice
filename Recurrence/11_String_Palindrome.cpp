#include<iostream>
using namespace std;
bool isPalindrome(string str,int start,int en){

    if(str[start]>=str[en]) return true;

    return (str[start]==str[en]&&isPalindrome(str,start+1,en-1));
}
int main(){
    string str;
    cout<<"enter the Palindrome String";
    getline(cin,str);
int start=0;

bool res=isPalindrome(str,start,str.length()-1);
cout<<res<<endl;
 if(res) cout<<"string is palindrom";
else cout<<"string not palindrome";
}
