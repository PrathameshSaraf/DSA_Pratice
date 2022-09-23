#include<iostream>
using namespace std;
int allchoco=0;
int wrapperChoco(int wrapper,int wrap,int chocs){
   wrapper +=chocs;
   if(wrapper<wrap)return 1;
   allchoco=allchoco+wrapper/wrap;
   wrapperChoco(wrapper%wrap,wrap,wrapper/wrap);
   return allchoco;
}
int main(){

int ruppes,price,wrap;
cout<<"enter the price of chocolate";
cin>>price;
cout<<"enter the total money";
cin>>ruppes;
cout<<"enter the number of wrapper to get chocolate";
cin>>wrap;
int wrapper=ruppes/price;
     if(wrapper<wrap)
        { cout<<wrapper;}
    else{
        int res=wrapperChoco(wrapper,wrap,0);
        cout<<wrapper+res;}

}
