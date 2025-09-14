#include<iostream>
#include<vector>

using namespace std;

vector<int> pairSum(vector<int>nums, int target) {
    vector<int>result;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j] == target) {
                result.push_back(i);
                result.push_back(j);
                return result;

            }
        }
    }
}

int main(){
  vector<int>nums = {2,3,2,5,6};
  int target = 9;
  vector<int>result = pairSum(nums, target);
  for(int val : result){
    cout << val << endl;
  }
}