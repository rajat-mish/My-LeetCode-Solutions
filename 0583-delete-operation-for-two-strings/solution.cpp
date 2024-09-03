class Solution {
public:
    int fun(string &s1, string &s2, int i, int j, vector<vector<int>>& dp) {
       
        if (i == 0 || j == 0) return 0;

      
        if (dp[i][j] != -1) return dp[i][j];
        
      
        if (s1[i-1] == s2[j-1]) {
            return dp[i][j] = 1 + fun(s1, s2, i-1, j-1, dp);
        } else {
          
            return dp[i][j] = max(fun(s1, s2, i-1, j, dp), fun(s1, s2, i, j-1, dp));
        }
    }
    int minDistance(string text1, string text2) {
                int n=text1.size();
        int m=text2.size();
           vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
            int a= fun(text1, text2, n, m, dp);
           int mx=max(n,m);
         if(a==n || a==m){
            return mx-a;
         }
         return m+n-2*a;
    }
};
