class Solution {
public:
vector<vector<int>>dp;
int fun(int i,int prev,vector<int>&nums){
    if(i>=nums.size())return 0;
    if(dp[i][prev+1]!=-1)return dp[i][prev+1];
    int len=fun(i+1,prev,nums);

    if (prev==-1 || nums[i]>nums[prev]){
        len=max(len,1+fun(i+1,i,nums));
    }
    return dp[i][prev+1]= len;
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        dp.resize(n+1,vector<int>(n+1,-1));
        return fun(0,-1,nums);
    }
};
