class Solution {
public:
vector<int> fun(int i,int prev,vector<int>&nums,vector<vector<vector<int>>>&dp){
    if(i==nums.size())return {};

    if(!dp[i][prev+1].empty())return dp[i][prev+1];
    vector<int>exclude=fun(i+1,prev,nums,dp);
    vector<int>include;

    if(prev==-1|| nums[i]%nums[prev]==0){
        include=fun(i+1,i,nums,dp);
        include.push_back(nums[i]);
    }
    return dp[i][prev+1]=(include.size()>exclude.size())?include:exclude;
}
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
      vector<vector<vector<int>>>dp(n,vector<vector<int>>(n+1));
        vector<int>ans= fun(0,-1,nums,dp);

        return ans;

    }
};


