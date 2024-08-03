class Solution {
public:
    long long dp[100005][3][2];  
    
    long long fun(vector<int>& prices, int i, int k, bool on) {
        if (i >= prices.size()) return 0;  
        if (k == 0) return 0;  
        if (dp[i][k][on] != -1) return dp[i][k][on];
        
        long long ans = fun(prices, i + 1, k, on);  
        
        if (on) {
            ans = max(ans, prices[i] + fun(prices, i + 1, k - 1, false));
        } else {
            ans = max(ans, fun(prices, i + 1, k, true) - prices[i]);
        }
        
        return dp[i][k][on] = ans;
    }

    int maxProfit(vector<int>& prices) {
        memset(dp, -1, sizeof dp);
        return fun(prices, 0, 2, false);
    }
};

