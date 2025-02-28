class Solution {
public:
int fun1(int i,vector<int>&nums,vector<int>&dp1){
    if(i==0)return nums[i];
    if(i<0)return 0;
    if(dp1[i]!=-1)return dp1[i];
    return dp1[i]= max(fun1(i-1,nums,dp1),nums[i]+fun1(i-2,nums,dp1));
}

int fun2(int i,vector<int>&nums,vector<int>&dp2){
    if(i==1)return nums[i];
    if(i<=0)return 0;
    if(dp2[i]!=-1)return dp2[i];
    return dp2[i]= max(fun2(i-1,nums,dp2),nums[i]+fun2(i-2,nums,dp2));
}


    int rob(vector<int>& nums) {
          int n=nums.size();
        if(n==1)return nums[0];
      
        vector<int>dp1(n+1,-1);
        vector<int>dp2(n+1,-1);
        return max(fun1(n-2,nums,dp1),fun2(n-1,nums,dp2));
    }
};
