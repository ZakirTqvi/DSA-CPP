//Example of pass by value

#include <iostream>

using namespace std;

void increament(int n){
    n = n*2;
    cout << n << endl;
}

int main(){
  int n = 4;
  increament(n);
  cout << n << endl;

  return 0;
}