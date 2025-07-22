#include<iostream>
using namespace std;

int binToDec(int binNum){
    int ans = 0, pow = 1;

    while(binNum > 0){
        int rem = binNum % 10;
        binNum /= 10;
        
        ans += (pow*rem);
        pow *= 2;

    }

    return ans;

}

int main(){

    int num  = 101;
    cout << binToDec(num) << endl;

    return 0;
}