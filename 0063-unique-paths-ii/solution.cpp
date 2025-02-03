class Solution {
public:
int fun(int i,int j,vector<vector<int>>&arr,vector<vector<int>>&dp){
         int n=arr.size();
        int m=arr[0].size();
       
    if(i==n-1 && j==m-1)return 1;
    if(i>=n || i<0 || j>=m || j<0)return 0;
     if(dp[i][j]!=-1)return dp[i][j];
    if(arr[i][j]==1)return 0;
    return dp[i][j]= fun(i+1,j,arr,dp)+fun(i,j+1,arr,dp);
}
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        if(arr[0][0]==1 ||arr[n-1][m-1]==1)return 0;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return fun(0,0,arr,dp);

    }
};
