class Solution {
public:
vector<vector<int>>dp;
int fun(int i,int j,string &word1,string &word2){
    // if(i<0 || j<0)return 0;
    if(i==0 && j==0){
        if(word1[i]==word2[j])return 0;
        return 1;
    }
    if(i<0 && j>=0)return j+1;
    if(i>=0 && j<0)return i+1;
     if(dp[i][j]!=-1)return dp[i][j];
    int ans=INT_MAX;
    if(word1[i]==word2[j]){
        ans=min(ans,fun(i-1,j-1,word1,word2));
    }
    else{
        ans=1+min({ans,fun(i-1,j,word1,word2),fun(i,j-1,word1,word2),fun(i-1,j-1,word1,word2)});
    }
    return dp[i][j]= ans;
}
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        if(word1==word2)return 0;
        if(m==0)return n;
        if(n==0)return m;
        dp.resize(n+1,vector<int>(m+1,-1));
        return fun(n-1,m-1,word1,word2);
    }
};
