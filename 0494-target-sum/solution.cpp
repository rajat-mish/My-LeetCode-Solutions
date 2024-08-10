class Solution {
public:
// int fun(vector<int>&v,int target,int i){
//     if(i==0)return (v[i]==target);
//     if(target==0)return 1;
//     int ntake=fun(v,target,i-1);
//     int take=0;
//     if(target>=v[i]){
//         take=fun(v,target-v[i],i-1);
//     }
//     return take +ntake;
// }
int dp[10005][105];
int fun(vector<int>&v,int target,int i){
    //if(target==0)return 1;
    if(i==0){
        if(target==0 && v[0]==0)return 2;
        if(target==0 || target==v[0])return 1;
        return 0;
    }
    if(dp[target][i]!=-1)return dp[target][i];
    int take=0;
    int ntake=fun(v,target,i-1);
    if(target>=v[i]){
        take=fun(v,target-v[i],i-1);
    }
    return dp[target][i]= take + ntake;
}

    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
          memset(dp,-1,sizeof dp);
          if((target +sum)%2!=0)return 0;
        return fun(nums,(target +sum)/2,nums.size()-1);
    }
};
