class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        if (grid[0][0] == 1 || grid[n-1][m-1] == 1) return -1;
        if (n == 1 && m == 1 && grid[0][0] == 0) return 1;


        vector<vector<int>>dist(n,vector<int>(m,1e9));
        queue<pair<int,pair<int,int>>>q;
        dist[0][0]=1;
        q.push({1,{0,0}});
        int delr[]={-1,-1,0,1,1,1,0,-1};
        int delc[]={0,1,1,1,0,-1,-1,-1};
        while(!q.empty()){
              auto it=q.front();
              int dis=it.first;
              int row=it.second.first;
              int col=it.second.second;
              q.pop();
              for(int i=0;i<8;i++){
                int newr=row+delr[i];
                int newc=col+delc[i];
                if(newr>=0 && newr<n && newc>=0 && newc<m && grid[newr][newc]==0 && dis+1<dist[newr][newc]){
                    dist[newr][newc]=1+dis;
                    if(newr==n-1 && newc==m-1)return dis+1;
                    q.push({dis+1,{newr,newc}});
                }
              }
        }
        return -1;
    }
};
