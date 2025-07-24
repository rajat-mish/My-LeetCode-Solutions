class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
         vector<vector<int>>vis(n,vector<int>(m));
        queue<pair<int,pair<int,int>>>q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2){
                    q.push({0,{i,j}});
                    vis[i][j]=2;
                }
                else vis[i][j]=0;
            }
        }
    
        int ans=0;
       
        while(!q.empty()){
            int time=q.front().first;
            int row=q.front().second.first;
            int col=q.front().second.second;

            q.pop();
            ans=max(ans,time);
            int delr[]={0,-1,0,1};
            int delc[]={-1,0,1,0};
            for(int i=0;i<4;i++){
                int nr=row+delr[i];
                int nc=col+delc[i];

                if(nr<n && nr>=0 && nc<m && nc>=0){
                    if(grid[nr][nc]==1 && vis[nr][nc]==0){
                        q.push({time+1,{nr,nc}});
                        vis[nr][nc]=2;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]==1)return -1;
            }
        }
        return ans;
    }
};
