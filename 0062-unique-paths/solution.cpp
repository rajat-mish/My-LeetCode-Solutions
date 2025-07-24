class Solution {
public:
vector<vector<int>>dp;
int fun(int i,int j,int m,int n){
    if(i>=m || i<0 || j>=n || j<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
    if(i==m-1 && j==n-1)return 1;

    return dp[i][j]= fun(i+1,j,m,n)+fun(i,j+1,m,n);
}
    int uniquePaths(int m, int n) {
        dp.resize(m,vector<int>(n,-1));
        return fun(0,0,m,n);
    }
};
