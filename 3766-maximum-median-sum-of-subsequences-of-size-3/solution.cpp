class Solution {
public:

    long long maximumMedianSum(vector<int>& nums) {
        int n=nums.size();
      
        sort(nums.begin(),nums.end());
        int sz=n/3;
       
        long long ans=0;
        for(int i=0;i<sz;i++){
            ans+=nums[n-2-2*i];
        }
      
        return ans;
    }
};
