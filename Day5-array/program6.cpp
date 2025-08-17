// Sum and Product of Array's elements...
#include<iostream>
using namespace std;

int sumOfArray(int arr[], int size){
   int sum=0;

   for(int i=0; i<size;i++){
      sum += arr[i];
   }

   return sum;
}

int productOfArray(int arr[], int size){
   int product = 1;

   for(int i=0; i<size;i++){
      product *= arr[i];
   }

   return product;
}

int main(){
    int marks[] = {2,4,2,3,5};
    int size = sizeof(marks)/sizeof(int);

    cout << "Sum of array elements:" << sumOfArray(marks,size) << endl;
    cout << "Product of array elements:" << productOfArray(marks,size) << endl;
}