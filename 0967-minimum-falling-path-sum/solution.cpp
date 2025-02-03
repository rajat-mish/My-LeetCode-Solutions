class Solution {
public:
int fun(int i,int j,vector<vector<int>>&arr,vector<vector<int>>&dp){
        int n=arr.size();
        int m=arr[0].size();
          if(j<0||j>=m)return INT_MAX;
    if(i==n-1)return arr[i][j];
  
    if(dp[i][j]!=1e9)return dp[i][j];
    int left=fun(i+1,j-1,arr,dp);
    int down=fun(i+1,j,arr,dp);
    int right=fun(i+1,j+1,arr,dp);
    return dp[i][j]= arr[i][j]+min({left,down,right});
}
    int minFallingPathSum(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        vector<vector<int>>dp(n,vector<int>(m,1e9));
int mini=INT_MAX;
       
            for(int j=0;j<m;j++){
                mini=min(mini,fun(0,j,arr,dp));
            }
     
        return mini;
    }
};


