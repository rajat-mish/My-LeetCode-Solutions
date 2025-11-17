class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>mat(n,vector<int>(n,0));
        for(auto ele:queries){
            int r1=ele[0];
            int c1=ele[1];
            int r2=ele[2];
            int c2=ele[3];
            for(int i=r1;i<=r2;i++){
                for(int j=c1;j<=c2;j++){
                    mat[i][j]+=1;
                }
            }
        }
        return mat;

    }
};
