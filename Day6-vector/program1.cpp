#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int>vec;
    
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(6);

    for(int val: vec){
        cout << val << " ";
    }

    return 0;
}