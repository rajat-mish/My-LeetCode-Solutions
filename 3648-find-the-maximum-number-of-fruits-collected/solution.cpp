class Solution {
public:
int n;
vector<vector<int>>dp1,dp2;
int fun1(int i,int j,vector<vector<int>>&fruits){
    if(i==n-1 && j==n-1)return 0;
    if(i>=j)return 0;
    if(dp1[i][j]!=-1)return dp1[i][j];
    int maxi=0;
    if(j-1>=0)maxi=max(maxi,fruits[i][j]+fun1(i+1,j-1,fruits));
    if(i+1<n)maxi=max(maxi,fruits[i][j]+fun1(i+1,j,fruits));
    if(j+1<n)maxi=max(maxi,fruits[i][j]+fun1(i+1,j+1,fruits));
    return dp1[i][j]=maxi;
}

int fun2(int i,int j,vector<vector<int>>&fruits){
    if(i==n-1 && j==n-1)return 0;
    if(i<=j)return 0;
    if(dp2[i][j]!=-1)return dp2[i][j];
    int maxi=0;
    if(i-1>=0)maxi=max(maxi,fruits[i][j]+fun2(i-1,j+1,fruits));
    if(j+1<n)maxi=max(maxi,fruits[i][j]+fun2(i,j+1,fruits));
    if(i+1<n)maxi=max(maxi,fruits[i][j]+fun2(i+1,j+1,fruits));
    return dp2[i][j]=maxi;
}
    int maxCollectedFruits(vector<vector<int>>& fruits) {
        n=fruits.size();
        int ans=0;
        dp1.resize(n+1,vector<int>(n+1,-1));
         dp2.resize(n+1,vector<int>(n+1,-1));
        for(int i=0;i<n;i++){
            ans+=fruits[i][i];
        }
        ans+=fun1(0,n-1,fruits);
        ans+=fun2(n-1,0,fruits);
        return ans;
    }
};
