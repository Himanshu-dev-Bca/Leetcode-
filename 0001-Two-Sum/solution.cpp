class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
for(int i=0;i<nums.size();i++){

    for(int n=i+1;n<nums.size();n++){
        int sum =nums[i]+nums[n];
        if(sum == target){
            return {i,n};
        }
    }
  }
    return {}; }

};