class Solution {
public:
int n,m;
vector<vector<vector<int>>>dp;
const int mod=1e9+7;
int fun(int row,int col,vector<vector<int>>&grid,int k,int sum){
    if(row>=n || col>=m || row<0 || col<0)return 0;
    if(row==n-1 && col==m-1){
        if((sum+grid[row][col])%k==0)return 1;
        return 0;

    }
    if(dp[row][col][sum%k]!=-1)return dp[row][col][sum%k];
   int down= fun(row+1,col,grid,k,sum+grid[row][col]);
   int right=fun(row,col+1,grid,k,sum+grid[row][col]);

   return dp[row][col][sum%k]= (down%mod+right%mod)%mod;
}
    int numberOfPaths(vector<vector<int>>& grid, int k) {
         n=grid.size();
         m=grid[0].size();
        int sum=0;
        dp.resize(n+1,vector<vector<int>>(m+1,vector<int>(k+1,-1)));
        return fun(0,0,grid,k,sum);
    }
};
