class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
    
        int maxsum=nums[0];
        int pre=0;
        int pmin=0;
        int minsum=nums[0];
        for(int i=0;i<nums.size();i++){
            int cur=max(nums[i],pre+nums[i]);
            int cmin=min(nums[i],pmin+nums[i]);
            pre=cur;
            pmin=cmin;
            maxsum=max(maxsum,cur);
            minsum=min(minsum,cmin);
        }
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(maxsum<0)return maxsum;
        return max(maxsum,sum-minsum);
      
    }
};
