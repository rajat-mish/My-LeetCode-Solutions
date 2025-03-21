class Solution {
public:
 bool fun(int i,int j,string &s,vector<vector<int>>&dp){
    if(i>=j)return dp[i][j]= 1;
    if(dp[i][j]!=-1)return dp[i][j];
    if(s[i]==s[j]){
       return dp[i][j]=fun(i+1,j-1,s,dp);
    }
   return dp[i][j]=0;
 }
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int startindex=0,maxlen=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(fun(i,j,s,dp)){
                    if((j-i+1)>maxlen ){
                        startindex=i;
                        maxlen=j-i+1;
                    }
                }
            }
        }
        return s.substr(startindex,maxlen);
    }
};


// class Solution {
// public:
//     bool fun(int i, int j, string &s, vector<vector<int>> &dp) {
//         if (i >= j) return dp[i][j] = 1; // Single character or empty string is palindrome
        
//         if (dp[i][j] != -1) return dp[i][j];

//         if (s[i] == s[j]) {
//             return dp[i][j] = fun(i + 1, j - 1, s, dp);
//         }
        
//         return dp[i][j] = 0; // Store false explicitly
//     }

//     string longestPalindrome(string s) {
//         int n = s.size();
//         vector<vector<int>> dp(n, vector<int>(n, -1)); // Correct size

//         int startIndex = 0, maxLen = 0;

//         for (int i = 0; i < n; i++) {
//             for (int j = i; j < n; j++) {
//                 if (fun(i, j, s, dp)) {
//                     if (j - i + 1 > maxLen) {
//                         startIndex = i;
//                         maxLen = j - i + 1;
//                     }
//                 }
//             }
//         }

//         return s.substr(startIndex, maxLen);
//     }
// };

