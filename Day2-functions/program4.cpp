#include<iostream>

using namespace std;

int sumOfDigits(int num){
    
    int lastDigit = 0;
    int sum = 0;

    while(num != 0) {
    lastDigit = num % 10;
    sum = sum + lastDigit;
    num = num / 10;
    }
    
   return sum;
}

int main(){
  cout << sumOfDigits(345);
  
  return 0;
}