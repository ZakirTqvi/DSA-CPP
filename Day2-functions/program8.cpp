// program to print fibonacci series

#include<iostream>

using namespace std;

void fibonacci(int n){
    int a = 0, b = 1, temp = 0;
    cout << a << " " << b << " ";
 for(int i=0;i<n-2;i++){
    temp = a + b;
    cout << temp << " "; 
    a = b;
    b = temp;   
 }
 cout << endl;

}

int main(){
    int n = 7;
    fibonacci(n);
}