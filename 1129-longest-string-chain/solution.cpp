class Solution {
public:
bool comp(string &s1,string &s2){
    if(s1.size()!=s2.size()+1){
        return false;
    }
    int i=0,j=0;
    while(i<s1.size()){
        if(s1[i]==s2[j]){
            i++;j++;
        }
        else {
            i++;
        }

    }
    if(i==s1.size()&& j==s2.size())return true;
    return false;
}
static bool cmp(string &s1,string &s2){
    return s1.size()<s2.size();
}
int fun(int i,int prev,vector<string>&words,vector<vector<int>>&dp){
    if(i==words.size())return 0;
    if(dp[i][prev+1]!=-1)return dp[i][prev+1];
    int take=fun(i+1,prev,words,dp);

   
    if(prev==-1 || comp(words[i],words[prev])==true){
        take=max(take,1+fun(i+1,i,words,dp));
    }
    return dp[i][prev+1]= take;

}
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),cmp);
        int n=words.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return fun(0,-1,words,dp);
    }
};
