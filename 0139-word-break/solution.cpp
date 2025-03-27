class Solution {
public:
bool fun(int i,string &s,set<string>&st,vector<int>&dp){
    if(i==s.size())return 1;
    if(dp[i]!=-1)return dp[i];
    string temp="";
    for(int j=i;j<s.size();j++){
        temp+=s[j];
        if(st.find(temp)!=st.end()){
            if(fun(j+1,s,st,dp))return dp[i]=1;
        }
    }
    return dp[i]=0;
}
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        vector<int>dp(n+1,-1);
        set<string>st(wordDict.begin(),wordDict.end());
        return fun(0,s,st,dp);
    }
};
