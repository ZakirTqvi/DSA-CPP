// Program to print the common elements in two arrays.

#include<iostream>
using namespace std;

void intersection(int arr1[], int size1, int arr2[], int size2){
    cout << "Common Elements:";
     for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++)
        if(arr1[i] == arr2[j]){
           cout << arr1[i] << " ";
           break;
        }
     }
}

int main(){
    int arr1 [] = {2,4,5,6,7,1,3,8};
    int arr2 [] = {3,4,9,2,7,8};

    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    intersection(arr1,size1,arr2,size2);
}