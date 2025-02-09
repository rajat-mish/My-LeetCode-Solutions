class Solution {
public:
int fun(int i,int buy,int rem,vector<int>&prices,vector<vector<vector<int>>>&dp){
    if(i>=prices.size()||rem==0)return 0;
    if(dp[i][buy][rem]!=-1)return dp[i][buy][rem];
    int profit=0;
    if(buy){
        profit=max(-prices[i]+fun(i+1,0,rem,prices,dp),fun(i+1,1,rem,prices,dp));
    }
    else{
        profit=max(prices[i]+fun(i+1,1,rem-1,prices,dp),fun(i+1,0,rem,prices,dp));
    }
    return dp[i][buy][rem]=profit;
}
    int maxProfit(vector<int>& prices) {
    //    vector<vector<vector<int>>>dp(prices.size(),vector<vector<int>>(2,vector<int>(2,-1)));
    vector<vector<vector<int>>> dp(prices.size(), vector<vector<int>>(2, vector<int>(3, -1)));

       return fun(0,1,2,prices,dp); 
    }
};
