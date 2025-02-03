class Solution {
public:
  bool fun(int idx,int sum,int target,vector<int>&arr,vector<vector<int>>&dp){
       if(sum==target)return true;
     if(idx==arr.size()||sum>target){
      
         return false;
     }
   
   
        if(dp[idx][sum]!=-1)return dp[idx][sum];
      int ntake=fun(idx+1,sum,target,arr,dp);
      int take=false;
      if(sum+arr[idx] <=target){
          take=fun(idx+1,sum+arr[idx],target,arr,dp);
      }
      return dp[idx][sum]= max(take,ntake);
      
  }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto ele:nums){
            sum+=ele;
        }
        if(sum%2!=0)return false;
        int target=sum/2;
          int n=nums.size();
   vector<vector<int>> dp(n, vector<int>(target + 1, -1));

        return fun(0,0,target,nums,dp);
    }
};
