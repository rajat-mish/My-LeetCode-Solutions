// class Solution {
// public:
// bool isp(int i,int j,string s){
// while(i<j){
//     if(s[i]!=s[j])return false;
//         i++;j--;
    

// }
// return true;
// }
// int fun(int i,string &s,vector<int>&dp){
//           if(i==s.size())return 0;
//            if(dp[i]!=-1)return dp[i];
//           int minc=INT_MAX;
          
        
//           for(int j=i;j<s.size();j++){
            
//             if(isp(i,j,s)){
//              int   cost=1+fun(j+1,s,dp);
//                 minc=min(minc,cost);
//             }

//           }
//           return dp[i]= minc;
// }
//     int minCut(string s) {
//         int n=s.size();
//         vector<int>dp(n,-1);
//         return fun(0,s,dp)-1;
//     }
// };


class Solution {
public:
    // Precompute palindrome table
    void precomputePalindromes(string &s, vector<vector<bool>> &palindrome) {
        int n = s.size();
        for (int i = 0; i < n; i++) {
            palindrome[i][i] = true; // Single character is always a palindrome
        }
        for (int i = 0; i < n - 1; i++) {
            palindrome[i][i + 1] = (s[i] == s[i + 1]); // Two-character palindrome
        }
        for (int length = 3; length <= n; length++) {
            for (int i = 0; i <= n - length; i++) {
                int j = i + length - 1;
                palindrome[i][j] = (s[i] == s[j] && palindrome[i + 1][j - 1]);
            }
        }
    }

    // Recursive function with memoization
    int fun(int i, string &s, vector<int> &dp, vector<vector<bool>> &palindrome) {
        if (i == s.size()) return 0;  // Base case: no cuts needed if we reach the end
        if (dp[i] != -1) return dp[i];  // Use memoized result

        int minCuts = INT_MAX;
        for (int j = i; j < s.size(); j++) {
            if (palindrome[i][j]) {  // If substring s[i...j] is a palindrome
                int cost = 1 + fun(j + 1, s, dp, palindrome);
                minCuts = min(minCuts, cost);
            }
        }
        return dp[i] = minCuts;  // Memoize result and return
    }

    int minCut(string s) {
        int n = s.size();
        vector<int> dp(n, -1);  // Memoization table
        vector<vector<bool>> palindrome(n, vector<bool>(n, false));  // Palindrome table

        precomputePalindromes(s, palindrome);  // Precompute all palindromic substrings
        return fun(0, s, dp, palindrome) - 1;  // We subtract 1 as the result adds one extra cut
    }
};

