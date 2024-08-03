// class Solution {
// public:
//     long long dp[100005][3][2]; 
    
//     long long fun(vector<int>& prices, int i, int k, bool on) {
//         if (k < 0) return 0;  
//         if (i >= prices.size()) return 0;  
//         if (dp[i][k][on] != -1) return dp[i][k][on];
        
//         long long ans = fun(prices, i + 1, k, on);
        
//         if (on) {
//             ans = max({ans, prices[i] + fun(prices, i + 1, k - 1, false),fun(prices,i+2,k-1,true)});
//         } else {
//             ans = max(ans, fun(prices, i + 1, k, true) - prices[i]);
//         }
        
//         return dp[i][k][on] = ans;
//     }

//     int maxProfit(vector<int>& prices) {
//         memset(dp, -1, sizeof dp);
//         return fun(prices, 0, 2, false);
//     }
// };



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;

        // DP arrays
        vector<int> dp0(n, 0);  // dp0[i] = max profit on day i without holding a stock
        vector<int> dp1(n, 0);  // dp1[i] = max profit on day i holding a stock
        
        // Initialize for the first day
        dp0[0] = 0;
        dp1[0] = -prices[0];

        for (int i = 1; i < n; ++i) {
            dp0[i] = max(dp0[i - 1], dp1[i - 1] + prices[i]);
            dp1[i] = max(dp1[i - 1], dp0[i - 1] - prices[i]);
        }

        return dp0[n - 1];  // Maximum profit on the last day without holding any stock
    }
};

