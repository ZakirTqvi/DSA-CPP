#include<iostream>
#include<cmath>
using namespace std;

void prime(int n){
    if(n >= 2) cout << 2 << " ";
    
    for(int i=3;i<=n;i++){
        bool isPrime = true;

            for(int j=2;j<=sqrt(i);j++){
                if(i % j == 0){
                    isPrime = false;
                    break;
                }

            }
          
        if(isPrime) cout << i << " ";
           
        }

        cout << endl;
    }


int main(){
    int n = 21;
    prime(n);
    return 0;
}