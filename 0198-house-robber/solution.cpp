class Solution {
public:
int fun(int i,vector<int>&dp,vector<int>&nums){
    int n=nums.size();
    if(i==0)return nums[i];
    if(i<0)return 0;
    if(dp[i]!=-1)return dp[i];

    int ntake=fun(i-1,dp,nums);
  
   
       int  take=nums[i]+fun(i-2,dp,nums);
    
    return dp[i]=max(take,ntake);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return fun(n-1,dp,nums);
    }
};
