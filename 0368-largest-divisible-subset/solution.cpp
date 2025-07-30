class Solution {
public:
vector<vector<vector<int>>>dp;
vector<int>fun(int i,int prev,vector<int>&nums){
    if(i>=nums.size())return {};
     if(!dp[i][prev+1].empty())return dp[i][prev+1];
    vector<int>exc=fun(i+1,prev,nums);
    vector<int>incl;
    if(prev==-1 || (nums[i]%nums[prev]==0 )){
         incl=fun(i+1,i,nums);
        incl.push_back(nums[i]);
        //ans= max(ans,fun(i+1,i,nums));
       
    }
    //ans.pop_back();
    return dp[i][prev+1]= (incl.size()>exc.size())?incl:exc;
}
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        dp.resize(n+1,vector<vector<int>>(n+1));
        return fun(0,-1,nums);
    }
};
