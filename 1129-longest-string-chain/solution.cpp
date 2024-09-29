class Solution {
public:
bool compare(string &s1,string &s2){
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
int fun(vector<string>&v,int i,int pre,vector<vector<int>>&dp){
     if(i==v.size())return 0;
     
     if(dp[i][pre+1]!=-1)return dp[i][pre+1];
    int len=fun(v,i+1,pre,dp);
   
    if(pre==-1||compare(v[i],v[pre])){
       
        len=max(len,1+fun(v,i+1,i,dp));
    }
   
    return dp[i][pre+1]= len;
   
}
    int longestStrChain(vector<string>& words) {
                int n=words.size();
                sort(words.begin(),words.end(),cmp);
        vector<vector<int>>dp(n+1,vector<int>(n,-1));
        return fun(words,0,-1,dp);
    }
};





// class Solution {
// public:
//     bool compare(string &s1, string &s2) {
//         if (s1.size() != s2.size() + 1) {
//             return false;
//         }
//         int i = 0, j = 0;
//         while (i < s1.size() && j < s2.size()) {
//             if (s1[i] == s2[j]) {
//                 i++; j++;
//             } else {
//                 i++;
//             }
//         }
//         return j == s2.size();
//     }

//     bool cmp(string &s1, string &s2) {
//         return s1.size() < s2.size();
//     }

//     int fun(vector<string>& v, int i, int pre, vector<vector<int>>& dp) {
//         if (i == v.size()) return 0;

//         if (dp[i][pre + 1] != -1) return dp[i][pre + 1];
//         int len = fun(v, i + 1, pre, dp);

//         if (pre == -1 || compare(v[i], v[pre])) {
//             len = max(len, 1 + fun(v, i + 1, i, dp));
//         }

//         return dp[i][pre + 1] = len;
//     }

//     int longestStrChain(vector<string>& words) {
//         int n = words.size();
//         sort(words.begin(), words.end(), cmp);
//         vector<vector<int>> dp(n, vector<int>(n + 1, -1));
//         return fun(words, 0, -1, dp);
//     }
// };

