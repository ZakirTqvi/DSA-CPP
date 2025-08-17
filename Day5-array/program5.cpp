// Reverse an Array (2 Pointers)

#include <iostream>
using namespace std;

void  reverseArray(int arr[], int size){
   int start = 0;
   int end = size-1;

   while(start < end) {
      swap(arr[start], arr[end]);
      start++;
      end--;
   }
}

int main(){
    int arr[] = {12,43,25,67,89,11};
    int size = sizeof(arr)/sizeof(int);

    reverseArray(arr,size);

    for(int val:arr) {
        cout << val << " ";
    }

    cout << endl;
}