// Program to convert decimal to binary

#include <iostream>

using namespace std;

int  decToBinary(int decNum){

    int ans = 0, pow = 1;
    
    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (pow*rem);
        pow *= 10;
    }
   
    return ans;

}

int main(){
    int num = 20;
    cout << decToBinary(num) << endl;
}