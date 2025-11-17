class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
    //  if(nums[0]<0){
    //        if(abs(nums[0])>nums[n-1]){
    //         return nums[n-1]+nums[n-2]-nums[0];
    //     }
    //     return nums[n-1]+nums[n-2]-nums[n-3];
    //  }

         return nums[n-1]+nums[n-2]-nums[0];  
    }
};
