class Solution {
public:
vector<vector<int>>dp;
bool fun(int i,int cnt,string s){
    if(cnt<0)return false;
    if(i>=s.size())return (cnt==0);
    
    if(dp[i][cnt]!=-1)return dp[i][cnt];
    if(s[i]=='(')return dp[i][cnt]= fun(i+1,cnt+1,s);
    else if(s[i]==')')return dp[i][cnt]= fun(i+1,cnt-1,s);
    return dp[i][cnt]= fun(i+1,cnt+1,s)|fun(i+1,cnt,s)|fun(i+1,cnt-1,s);

}
    bool checkValidString(string s) {
        int n=s.size();
        dp.assign(n+1,vector<int>(n+1,-1));
        return fun(0,0,s);
    }
};
