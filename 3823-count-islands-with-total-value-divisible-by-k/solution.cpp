class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>>&grid,long long &sum){
        int n=grid.size();
        int m=grid[0].size();
        vis[row][col]=1;
sum+=grid[row][col];
       int delr[]={-1,0,1,0};
        int delc[]={0,-1,0,1};
        for(int i=0;i<4;i++){
            int nr=row+delr[i];
            int nc=col+delc[i];
            if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && grid[nr][nc]!=0 ){
                dfs(nr,nc,vis,grid,sum);
            }
        }
    }
    int countIslands(vector<vector<int>>& grid, int k) {
           int n=grid.size();
        int m=grid[0].size();
int count=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               
                if(!vis[i][j] && grid[i][j]!=0){
                     long long sum=0;
                    dfs(i,j,vis,grid,sum);
                    if(sum%k==0)count++;
                    
                }
            }
        }
        return count;
    }
};
