// Program to print all sub arrays
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int nums[] = {2,4,3,8,5,4,9};
    int size = 7;
    for(int str=0; str<size; str++){
        for(int end = str; end<size; end++){
            for(int i=str; i<end; i++){
                cout << nums[i];
            }
            cout << " ";
        }
        cout << endl;
    }

}