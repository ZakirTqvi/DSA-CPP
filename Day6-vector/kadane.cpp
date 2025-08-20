#include<iostream>
#include<vector>

using namespace std;

int maxSubArraySum(vector<int>& nums){

    int maxSum = INT16_MIN, currSum = 0;

    for(int i=0;i<nums.size();i++){
       currSum += nums[i];
       maxSum = max(currSum, maxSum);
       if(currSum < 0){
        currSum = 0;
       }
    }

    return maxSum;
}

int main(){
    vector<int>nums = {1,-2,4,5};
    cout << "Maximum subarray sum:" << maxSubArraySum(nums);
    return 0;
}