// Linear Search Algorithm

#include<iostream>
using namespace std;

int linearSearch(int arr[],int target,int size){
   for(int i=0;i<size;i++){
     if(arr[i] == target){
        return i;
     }
   }

   return -1;
}

int main(){
    int marks [] = {12,4,21,65,9,21,100};
    int target = 100;
    int size = 7;

    cout << linearSearch(marks,target,size) << endl;
}