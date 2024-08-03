class Solution {
public:
vector<vector<int>>dp;
bool fun(vector<int>&nums,int sum,int i ){
    if(i==0)return(nums[i]==sum);
    if(sum==0)return true;
    if(dp[i][sum]!=-1)return dp[i][sum];
    bool take=false;
    bool ntake=fun(nums,sum,i-1);
    if(nums[i]<=sum){
        take=fun(nums,sum-nums[i],i-1);
    }
    return dp[i][sum]= take||ntake;
}
    bool canPartition(vector<int>& nums) {
        int n=nums.size();

        long long sum=0;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0)return false;
        int target=sum/2;
        dp.assign(n,vector<int>(target+1,-1));
        return fun(nums,sum/2,nums.size()-1);
        
    }
};


