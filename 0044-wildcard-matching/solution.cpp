class Solution {
public:
int fun(int i,int j,string &s,string &p,vector<vector<int>>&dp){
    if(i<0 && j<0)return true;
    if(i<0 && j>=0)return false;
    if(j<0 && i>=0){
        for(int id=0;id<=i;id++){
            if(s[id]!='*')return false;
        }
        return true;
    }
    if(dp[i][j]!=-1)return dp[i][j];
    if(s[i]==p[j]|| s[i]=='?'){
        return dp[i][j]= fun(i-1,j-1,s,p,dp);
    }
    if(s[i]=='*'){
        return dp[i][j]= fun(i-1,j,s,p,dp)|fun(i,j-1,s,p,dp);
    }
    return false;
}
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return fun(m-1,n-1,p,s,dp);
    }
};
