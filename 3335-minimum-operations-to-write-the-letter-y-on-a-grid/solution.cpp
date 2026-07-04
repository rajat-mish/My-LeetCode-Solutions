class Solution {
public:
    int minimumOperationsToWriteY(vector<vector<int>>& grid) {
        int t0=0,t1=0,t2=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[i][j]==0)t0++;
                else if(grid[i][j]==1)t1++;
                else t2++;
            }
        }
        int n=grid.size();
        int y0=0,y1=0,y2=0;
        for(int i=0;i<=n/2;i++){
             if(grid[i][i]==0)y0++;
                else if(grid[i][i]==1)y1++;
                else y2++;
        }
        for(int i=n/2+1;i<n;i++){
              if(grid[i][n/2]==0)y0++;
                else if(grid[i][n/2]==1)y1++;
                else y2++;
        }
        for(int i=0;i<n/2;i++){
              if(grid[i][n-1-i]==0)y0++;
                else if(grid[i][n-1-i]==1)y1++;
                else y2++;
        }

        int x0=t0-y0;
        int x1=t1-y1;
        int x2=t2-y2;

        int ans=INT_MAX;
        ans=min(ans,y1+y2+x0+x2);
        ans=min(ans,y1+y2+x0+x1);
        ans=min(ans,y0+y2+x1+x2);
        ans=min(ans,y0+y2+x0+x1);
        ans=min(ans,y0+y1+x1+x2);
        ans=min(ans,y0+y1+x0+x2);
        return ans;
    }
};
