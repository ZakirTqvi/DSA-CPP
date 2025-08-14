#include <iostream>
using namespace std;

int reverseInt(int n){
    int result = 0;
    while(n>0){
        int rem = n%10;
        n = n/10;
        result = (result * 10) + rem;
    }

    return result;

}

int main(){
    int num = 1234;
    cout << "Reverse String: " << reverseInt(num);
}