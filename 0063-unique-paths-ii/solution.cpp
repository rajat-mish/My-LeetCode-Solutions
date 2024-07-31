class Solution {
public:
vector<vector<int>>grid;

int n,m;
vector<vector<int>>dp;
 int fun(int i,int j){
    
    if(i==n-1 && j==m-1)return 1;
    if(i<0 || j<0 || i>=n || j>=m)return 0;
    if(grid[i][j]==1)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    return dp[i][j]= fun(i,j+1)+fun(i+1,j);

 }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        grid=obstacleGrid;
        n=grid.size();
        m=grid[0].size();
        dp.clear();
        dp.resize(100,vector<int>(100,-1));
        
        if(grid[n-1][m-1]==1)return 0;
        return fun(0,0);
    }
};
