class Solution {
public:
int fun(int i,int target,vector<int>&coins,vector<vector<int>>&dp){
    if(i==0){
        if(target%coins[i]==0){
            return target/coins[i];
        }
        return 1e9;
    }
    if(dp[i][target]!=-1)return dp[i][target];
    int ntake=fun(i-1,target,coins,dp);
    int take=INT_MAX;
    if(coins[i]<=target){
        take=1+fun(i,target-coins[i],coins,dp);
    }
    return dp[i][target]=min(take,ntake);
}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
    int ans= fun(n-1,amount,coins,dp);
    if(ans>=1e9)return -1;
    return ans;
    }
};
