class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=m-2;j>=0;j--){
              if(mat[i][j]==1)  mat[i][j]+=mat[i][j+1];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int minwidth=mat[i][j];
                for(int d=i;d<n;d++){
                    if(mat[d][j]==0)break;
                    minwidth=min(minwidth,mat[d][j]);
                    cnt+=minwidth;
                }
            }
        }
        return cnt;
    }
};
