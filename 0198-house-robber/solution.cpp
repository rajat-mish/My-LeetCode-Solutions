class Solution {
public:
int fun(int i,vector<int>&nums,vector<int>&dp){
    if(i==0)return nums[i];
    if(i<0)return 0;
    if(dp[i]!=-1)return dp[i];
    return dp[i]= max(fun(i-1,nums,dp),nums[i]+fun(i-2,nums,dp));
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return fun(n-1,nums,dp);
    }
};
