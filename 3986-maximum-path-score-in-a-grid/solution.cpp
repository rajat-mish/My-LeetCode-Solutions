class Solution {
public:
int n,m;
vector<vector<vector<int>>>dp;
int fun(int i,int j,vector<vector<int>>&grid,int k){
    if(i>=n || j>=m || k<0)return INT_MIN;
     int score=(grid[i][j]==2)?2:grid[i][j];
      if(grid[i][j]==1 || grid[i][j]==2)k-=1;
      if(k<0)return INT_MIN;
        


    if(i==n-1 && j==m-1)return score;
      if(dp[i][j][k]!=-1)return dp[i][j][k];
     
    int take;
    int right=fun(i,j+1,grid,k);
    int down=fun(i+1,j,grid,k);
   take=max(right,down);
   if(take==INT_MIN)return dp[i][j][k]=INT_MIN;
    return dp[i][j][k]= score+take;
}
    int maxPathScore(vector<vector<int>>& grid, int k) {
        n=grid.size();
        m=grid[0].size();
        dp.resize(n+1,vector<vector<int>>(m+1,vector<int>(k+1,-1)));
        int ans=fun(0,0,grid,k);
        return (ans==INT_MIN)?-1:ans;
       
    }
};
