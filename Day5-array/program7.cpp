// Program to find index of smallest and largeest value in an array
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int marks [] = {12,33,4,520,22,-10,23};

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex;
    int largestIndex;
    
    cout << "Original Array: ";
    for(int i = 0; i< 7; i++){
        cout << marks[i] << " ";
    }
    cout << endl;

    for(int i=0;i<7;i++){
        if(smallest > marks[i]){
           smallest = marks[i];
            smallestIndex = i;
        }

        if(largest < marks[i]) {
            largest = marks[i];
            largestIndex = i;
        }
    }
     
    swap(marks[smallestIndex], marks[largestIndex]);
    
    cout << "After swapping: ";
    for(int i = 0; i < 7; i++){
        cout << marks[i] << " ";
    }
    
}