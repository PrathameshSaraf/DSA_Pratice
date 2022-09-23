/*
Best Case	O(n*logn)
Average Case	O(n*logn)
Worst Case	O(n2)

*/
 #include <iostream>
 #include<cstdlib>
using namespace std;

void quickSortMethod(int arr[],int first ,int last ){
    int i ,j,pivot,temp;
    if(first < last){
        i = first;
        pivot = first;
        j=last;
        while(i<j){

            while(arr[i]<=arr[pivot])
                i++;

            while(arr[j]>arr[pivot])
                j--;


            if (i<j){
                temp = arr[j];
                arr[j]=arr[i];
                arr[i] = temp;

            }
        }
        temp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=temp;



        quickSortMethod(arr,first,j-1);
        quickSortMethod(arr,j+1,last);

    }
}

int main()
{
    cout<<"Enter the Array Size";
   int n;
   cin>>n;
       int arr[n];
        for (int i = 0; i < n; ++i) {
        cin >> arr[i];
  }
        quickSortMethod(arr,0,n-1);


        for (int i = 0 ; i<n; i++) {
            cout<<arr[i];
        }


}
