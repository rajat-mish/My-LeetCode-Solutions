class Solution {
public:
int fun(int i,vector<int>&dp){
    if(i==0)return 0;
    if(i==1)return 1;
    if(i==2)return 2;

    if(dp[i]!=-1)return dp[i];
    return dp[i]=fun(i-1,dp)+fun(i-2,dp);
}
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return fun(n,dp);

    }
};
