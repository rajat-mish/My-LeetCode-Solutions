class Solution {
public:
vector<int>dp;
int fun(vector<int>v,int i){
    if(i==v.size()-1)return v[i];
    if(i==v.size()-2)return max(v[i],v[i+1]);
    if(dp[i]!=-1)return dp[i];
    return dp[i]=max((v[i]+fun(v,i+2)),0+fun(v,i+1));
}
    int rob(vector<int>& nums) {
        dp.clear();
        dp.resize(105,-1);
        return fun(nums,0);
    }
};
