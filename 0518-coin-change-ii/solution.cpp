class Solution {
public:
int fun(int i,int t,vector<int>&coins,vector<vector<int>>&dp){
    if(i==0){
        if(t%coins[i]==0)return 1;
        return 0;
    }

    if(dp[i][t]!=-1)return dp[i][t];
    int ntake=fun(i-1,t,coins,dp);
    int take=0;

    if(coins[i]<=t){
        take=fun(i,t-coins[i],coins,dp);
    }
    return dp[i][t]=take+ntake;
}
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return fun(n-1,amount,coins,dp);
    }
};
