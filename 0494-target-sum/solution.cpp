class Solution {
public:
int fun(int i,int t,vector<int>&nums,vector<vector<int>>&dp){
    if(i==0){
        if(nums[i]==0 && t==0){
            return 2;
        }
        if(t==0 || nums[i]==t)return 1;
        return 0;
    }
    int ntake=fun(i-1,t,nums,dp);
    int take=0;
    if(nums[i]<=t){
        take=fun(i-1,t-nums[i],nums,dp);
    }
    return take+ntake;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size(),sum=0;
        for(auto ele:nums){
            sum+=ele;
        }
       
        int t=(sum+target)/2;
      
        if(sum+target<0 || (sum+target)%2)return 0;
           vector<vector<int>>dp(n,vector<int>(t+1,-1));
        return fun(n-1,t,nums,dp);
    }
};
