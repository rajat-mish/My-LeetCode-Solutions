class Solution {
public:

vector<vector<int>>g,dp;
int n,m;
int fun(int i,int j){
    
    if(i==n-1 && j==m-1){
        
        return  g[n-1][m-1];
    }
    if(i<0 || j<0 || i>=n || j>=m)return INT_MAX;
    if(dp[i][j]!=-1)return dp[i][j];
    return dp[i][j]= g[i][j]+ min(fun(i+1,j),fun(i,j+1));
}
    int minPathSum(vector<vector<int>>& grid) {
        g=grid;
         n=g.size();
         m=g[0].size();
         dp.clear();
         dp.resize(200,vector<int>(200,-1));
        return fun(0,0);
    }
};
