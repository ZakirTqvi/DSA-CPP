// Implementation of reverse an array using vector

#include<iostream>
#include<vector>

using namespace std;

void reverseArray(vector<int>& nums){
    int start = 0;
    int end = nums.size()-1;
    while(start < end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }

    for(int val: nums){
    cout << val << " ";
   }
}

int main(){
    vector<int>nums = {1,2,3,4,5};
    reverseArray(nums);

   
    return 0;
}