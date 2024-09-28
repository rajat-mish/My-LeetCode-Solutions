class Solution {
public:
int fun(vector<int>&v,int i,int pre,vector<vector<int>>&dp){
     if(i==v.size())return 0;
     if(dp[i][pre+1]!=-1)return dp[i][pre+1];
    int len=fun(v,i+1,pre,dp);
   
    if(pre==-1||v[pre]<v[i]){
       
        len=max(len,1+fun(v,i+1,i,dp));
    }
   
    return dp[i][pre+1]= len;
   
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n,-1));
        return fun(nums,0,-1,dp);
    }
};
