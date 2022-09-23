//Analysis Of Common Loop :-
/*
//Loop 1:-
#include <iostream>
using namespace std;
int main(){
    int n=10,c=2;
    for(int i=0;i<=n;i=i+c){
        cout<<i<<'\n';
    }
}
//TIME Complexity :=O(n)

//Loop 2:
  #include<iostream>
  using namespace std;
  int main(){
      int n=33,c=2;
  for(int i=1;i<n;i=i*c){
    cout<<i<<'\n';
  }
  }
  //Time Complexity:= O(log n)

//Loop 3:-
#include <iostream>
using namespace std;
int main(){
    int n=33,c=2;
    for (int i=n;i>1;i=i/c)
        cout<<i<<'\n';

}
//Time Complexity:= O(log n)

//Loop 4 :-
#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n=33,c=2;
    for (int i=2;i<n;i=pow(i,c))
        cout<<i<<'\n';

}
//TIme Complexity:= log*log n;
*/
