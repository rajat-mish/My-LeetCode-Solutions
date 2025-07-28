class Solution {
public:
vector<vector<vector<int>>>dp;
int fun(int i,int buy,int cnt,vector<int>&prices){
    if(i>=prices.size() || cnt==1)return 0;
      int profit=0;
      if(dp[i][buy][cnt]!=-1)return dp[i][buy][cnt];
    if(buy){
        profit= max(-prices[i]+fun(i+1,0,0,prices),fun(i+1,1,0,prices));
    }
    else{
        profit= max(prices[i]+fun(i+1,1,1,prices),fun(i+1,0,0,prices));
    }
    return dp[i][buy][cnt]= profit;
}
    int maxProfit(vector<int>& prices) {
        dp.resize(prices.size()+1,vector<vector<int>>(2,vector<int>(2,-1)));
        return fun(0,1,0,prices);
    }
};
