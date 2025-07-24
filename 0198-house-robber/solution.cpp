class Solution {
public:
vector<int>dp;
int fun(int i,vector<int>&nums){
    if(i<0)return 0;
    //if(i==0)return nums[i];
    if(dp[i]!=-1)return dp[i];

    int ntake=fun(i-1,nums);
    int take=nums[i]+fun(i-2,nums);
    return dp[i]= max(take,ntake);
}
    int rob(vector<int>& nums) {

        int n=nums.size();
       dp.resize(n,-1);
        return fun(n-1,nums);
    }
};
