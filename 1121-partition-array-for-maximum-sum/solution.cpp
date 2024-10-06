class Solution {
public:
int fun(int idx,vector<int>&nums,int k,vector<int>&dp){
    int n=nums.size();
    if(idx==nums.size())return 0;
    if(dp[idx]!=-1)return dp[idx];
    int len=0;
    int maxi=INT_MIN;
    int maxans=INT_MIN;

    for(int j=idx;j<min((idx+k),n);j++){
        len++;
        maxi=max(maxi,nums[j]);
        int sum=len*maxi+fun(j+1,nums,k,dp);
        maxans=max(maxans,sum);
    }
    return dp[idx]= maxans;
}
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int>dp(arr.size(),-1);
        int n=arr.size();
        return fun(0,arr,k,dp);
    }
};
