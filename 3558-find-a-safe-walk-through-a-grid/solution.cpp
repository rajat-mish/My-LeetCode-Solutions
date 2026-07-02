class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int h) {
        queue<pair<int,pair<int,int>>>q;
         int n=grid.size();
         int m=grid[0].size();
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
         vector<vector<int>>best(n,vector<int>(m,-1));
         h-=grid[0][0];
         if(h<=0)return false;
         best[0][0]=h;
        q.push({h,{0,0}});
        while(!q.empty()){
            int h=q.front().first;
            int row=q.front().second.first;
            int col=q.front().second.second;
           q.pop();
          
            if( row==n-1 && col==m-1)return true;

            for(int i=0;i<4;i++){
                int nr=row+delr[i];
                int nc=col+delc[i];

                if(nr<n && nr>=0 && nc<m && nc>=0){
                    int nh=h-grid[nr][nc];
                  if(nh>0 && nh>best[nr][nc]){
                    best[nr][nc]=nh;
                    q.push({nh,{nr,nc}});
                  }
                }
            }
        }
        return false;
    }
};
