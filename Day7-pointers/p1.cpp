#include<iostream>
using namespace std;

void changeA(int* ptr){ // pass by reference using pointer
   *ptr = 20;
}

int main(){
    int a = 5;
    changeA(&a);
    cout << a << endl;
    return 0;
}

