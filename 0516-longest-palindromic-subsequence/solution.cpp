class Solution {
public:
    int fun(string &s1, string &s2,int i,int j,  vector<vector<int>>& dp) {
          
        if (i == 0 || j == 0) return 0;

      
        if (dp[i][j] != -1) return dp[i][j];
        
      
        if (s1[i-1] == s2[j-1]) {
            return dp[i][j] = 1 + fun(s1, s2, i-1, j-1, dp);
        } else {
          
            return dp[i][j] = max(fun(s1, s2, i-1, j, dp), fun(s1, s2, i, j-1, dp));
        }
    }
    int longestPalindromeSubseq(string s) {
       int n=s.size();
       string str=s;
       reverse(str.begin(),str.end());
           vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
            return fun(s, str,s.size(),s.size(),  dp);
    }
};
