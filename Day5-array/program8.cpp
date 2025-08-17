// Program to find unique values in an array.

#include<iostream>
using namespace std;

void uniqueValues(int arr[], int size){
  
   for(int i = 0; i < size; i++){
    bool isUnique = true;
     for(int j = 0; j < size; j++){
        if(i != j && arr[i] == arr[j]){
          isUnique = false;
          break; 
        }
     }

     if(isUnique){
      cout << arr[i] << " ";
     }
   }
}

int main(){
  int arr [] = {2,4,2,6,7,6,2,7,10};
  int size = sizeof(arr)/sizeof(int);
  
  uniqueValues(arr,size);
}