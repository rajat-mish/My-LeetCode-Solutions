class Solution {
public:
    double average(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.pop_back();
        reverse(nums.begin(),nums.end());
         nums.pop_back();
         double sum=0;
         for(int i=0;i<nums.size();i++){
             sum+=nums[i];
         }
         return sum/nums.size();

    }
};
