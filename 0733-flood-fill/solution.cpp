class Solution {
    private:
    void dfs(int row,int col,vector<vector<int>>& ans,vector<vector<int>>& image,int inicolor,int color,int delr[],int delc[]){
        ans[row][col]=color;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){
            int nr=row+delr[i];
            int nc=col+delc[i];
            if(nr>=0 && nr<n && nc>=0 && nc<m && image[nr][nc]==inicolor && ans[nr][nc]!=color ){
                dfs(nr,nc,ans,image,inicolor,color,delr,delc);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor=image[sr][sc];
        vector<vector<int>>ans=image;
        int delr[]={-1,0,1,0};
        int delc[]={0,-1,0,1};
        dfs(sr,sc,ans,image,inicolor,color,delr,delc);
        return ans;
    }
};
