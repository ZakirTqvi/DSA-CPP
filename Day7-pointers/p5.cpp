#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int* ptr = &a;

    cout << ptr << endl;
    ptr++;
    cout << ptr << endl; // 4 (1 byte) is added in ptr.


}