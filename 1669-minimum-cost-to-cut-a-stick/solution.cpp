class Solution {
public:
int fun(int i,int j,vector<int>&cuts,vector<vector<int>>&dp){
    if(i>j)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int mini=INT_MAX;
    for(int k=i;k<=j;k++){
        int cost=cuts[j+1]-cuts[i-1]+fun(i,k-1,cuts,dp)+fun(k+1,j,cuts,dp);
        mini=min(mini,cost);
    }
    return dp[i][j]= mini;
}
    int minCost(int n, vector<int>& cuts) {
        int m=cuts.size();
        vector<vector<int>>dp(m+1,vector<int>(m+1,-1));
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        sort(cuts.begin(),cuts.end());
        return fun(1,cuts.size()-2,cuts,dp);
    }
};
