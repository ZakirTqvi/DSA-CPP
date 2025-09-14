#include<iostream>
#include<vector>

using namespace std;

int majorityElement(vector<int>nums){
   int n = nums.size();

   for(int val : nums){
    int frq = 0;
      for(int ele : nums){
        if(val == ele){
         frq++;
        }
        
      }
    if(frq > n/2){
        return val;
    }  
   }
}

int main(){
    vector<int>nums = {1,1,4,1,5,1,2,1};
   cout << "Majority element is:" << majorityElement(nums);
    return 0;
}