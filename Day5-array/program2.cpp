#include<iostream>
using namespace std;

int main(){
    int marks [] = {12,31,54,9,8,13,4,-12,76,3};
    int smallest = INT16_MAX;
    int size = sizeof(marks)/sizeof(int);

    for(int i=0;i<size;i++){
        if(marks[i] < smallest){
            smallest = marks[i];
        }
    }

    cout << "Smallest value in array:" << smallest;

    return 0;
}