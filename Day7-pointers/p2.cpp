#include<iostream>
using namespace std;

void changeA(int &b){ // pass by reference using alias
   b = 30;
}

int main(){
    int a = 5;
    changeA(a);
    cout << a << endl;
    return 0;
}

