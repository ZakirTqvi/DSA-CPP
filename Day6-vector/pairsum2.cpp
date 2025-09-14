#include<iostream>
#include<vector>
#include <chrono> // for high_resolution_clock

using namespace std;
using namespace std::chrono;

vector<int> pairSum(vector<int>& nums, int target){
   int i=0, j=nums.size()-1;
   vector<int>ans;

   while(i < j){
      int pairSum = nums[i] + nums[j];

      if(pairSum < target) i++;
      else if(pairSum > target) j--;
      else {
        ans.push_back(i);
        ans.push_back(j);
        return ans;
      }
   }
}

int main(){
      // Start time
 auto start = high_resolution_clock::now();
 vector<int>nums = {2,3,2,5,6};
  int target = 11;
  vector<int>ans = pairSum(nums, target);
  cout << ans[0] << "," << ans[1] << endl;

  // End time
    auto stop = high_resolution_clock::now();

    // Duration calculation
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Execution time: " << duration.count() << " ms" << endl;

  return 0;
}