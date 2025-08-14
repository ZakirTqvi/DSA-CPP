// program to check whether the number is power of two or not

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n){
    if(n<=0) return false;

    while(n % 2 == 0){
        n = n / 2;
    }
    
    return 1 == n;
}

int main() {

    int n = 10;
  if(isPowerOfTwo(n)){
      cout << "power of 2";
  } else {
     cout << "not power of 2";
  }

  cout <<"\n" << 5/2;
}
