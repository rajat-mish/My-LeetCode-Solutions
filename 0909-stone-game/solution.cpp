class Solution {
public:
int dp[501][501][2];
int fun(int i,int j,bool flag,vector<int>&piles){
    if(i>j)return 0;
      if(dp[i][j][flag]!=-1)return dp[i][j][flag];
    if(flag){
return dp[i][j][flag]= max({piles[i]+fun(i+1,j,0,piles),piles[j]+fun(i,j-1,0,piles)});
    }
    else {
        return dp[i][j][flag]= max({-piles[i]+fun(i+1,j,1,piles),-piles[j]+fun(i,j-1,1,piles)});
    }
}
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        return fun(0,n-1,1,piles)>=0;
    }
};
