class Solution {
public:
int fun(int i,int j,vector<vector<int>>&arr,vector<vector<int>>&dp){

     if(dp[i][j]!=-1)return dp[i][j];
       int n=arr.size();
        int m=arr[0].size();
         if(i==n-1)return arr[i][j];

    //   if(i<0 || i>=n|| j<0 || j>=m)return 1e9; 
   
      
   

   
    int mini=INT_MAX;

 


      return dp[i][j]=arr[i][j]+min({fun(i+1,j,arr,dp),fun(i+1,j+1,arr,dp)});
    

}
    int minimumTotal(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
     
        return fun(0,0,arr,dp);
    }
};
