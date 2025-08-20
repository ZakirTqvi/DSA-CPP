#include<iostream>
#include<vector>

using namespace std;

int maxSubArraySum(vector<int>& nums){
    int maxSum = INT16_MIN;
    for(int str=0; str < nums.size(); str++){
        int currSum = 0;
        for(int end=str; end < nums.size(); end++){
           currSum += nums[end];
           maxSum = max(currSum, maxSum);
        }
    }

    return maxSum;
}

int main(){
    vector<int>nums = {1, -2, 3, 5, -1, 2};
    cout << maxSubArraySum(nums);
    return 0;
}