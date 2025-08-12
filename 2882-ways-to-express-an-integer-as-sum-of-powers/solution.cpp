class Solution {
public:
int mod=1e9 +7;
vector<vector<int>>dp;
int fun(int n,int x,int i,int sum){
    if(sum==n)return 1;
    if(i>n || sum>n)return 0;
    if(dp[i][sum]!=-1)return dp[i][sum];
    int ntake=fun(n,x,i+1,sum);
    int take=0;
  if(pow(i,x)+sum<=n){
       take=fun(n,x,i+1,(sum+pow(i,x)));
  }
    return dp[i][sum]= (take+ntake)%mod;
}
    int numberOfWays(int n, int x) {
        dp.resize(n+1,vector<int>(n+1,-1));
        return fun(n,x,1,0);
    }
};
