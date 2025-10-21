// Pointer Arithmetic: substract (ptr1 - ptr2)
// It gives no. of blocks of type (eg., int, double)
#include<iostream>
using namespace std;

int main(){
    double* ptr2;
    double* ptr1 = ptr2 + 2;

    cout << ptr1 << endl;
    cout << ptr2 << endl;
    
    cout << ptr1 - ptr2 << endl;
}