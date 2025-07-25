class Solution {
public:
void dfs(int r,int c,vector<vector<int>>&grid,vector<vector<int>>&vis){
    int n=grid.size();
    int m=grid[0].size();
    vis[r][c]=1;
    int delr[]={-1,0,1,0};
    int delc[]={0,1,0,-1};
    for(int i=0;i<4;i++){
        int nr=r+delr[i];
        int nc=c+delc[i];
        if(nr>=0 && nr<n && nc<m && nc>=0 && !vis[nr][nc] && grid[nr][nc]==1 ){
            dfs(nr,nc,grid,vis);
        }
    }
}
    int numEnclaves(vector<vector<int>>& grid) {
          int n=grid.size();
    int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));

        for(int i=0;i<n;i++){
            if(!vis[i][0] && grid[i][0]==1){
                dfs(i,0,grid,vis);
            }
        }
        for(int j=0;j<m;j++){
            if(!vis[0][j] && grid[0][j]==1)dfs(0,j,grid,vis);
        }

          for(int i=0;i<n;i++){
            if(!vis[i][m-1] && grid[i][m-1]==1){
                dfs(i,m-1,grid,vis);
            }
        }
        for(int j=0;j<m;j++){
            if(!vis[n-1][j] && grid[n-1][j]==1)dfs(n-1,j,grid,vis);
        }
int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1)count++;
            }
        }

        return count;


    }
};
