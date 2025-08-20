// Implementation of linear search using vector

#include<iostream>
#include<vector>

using namespace std;

bool linearSearch(vector<int>& nums, int target){
   
   for(int val:nums){
     if(target == val){
        return true;
     }
   }

   return false;
}

int main(){
  int target = 2;
  vector<int>nums = {12,3,4,23,2,1};

  if(linearSearch(nums, target)) cout << "Found";
  else cout << "Not Found";

  return 0;
}