class Solution {
public:
vector<vector<vector<int>>>dp;
    int fun(int i, int j, int neutralized, vector<vector<int>>& coins) {
        int n = coins.size();
        int m = coins[0].size();

        if (i >= n || j >= m) return INT_MIN;
        

        if (i == n - 1 && j == m - 1) {
            if (coins[i][j] < 0 && neutralized < 2)
                return max(0, coins[i][j]);
            return coins[i][j];
        }

        if(dp[i][j][ neutralized]!=INT_MIN)return dp[i][j][ neutralized];

        int current = coins[i][j];
        int ans = INT_MIN;

        // move right
        if (j + 1 < m) {
            ans = max(ans, current + fun(i, j + 1, neutralized, coins));

            if (current < 0 && neutralized < 2)
                ans = max(ans, fun(i, j + 1, neutralized + 1, coins));
        }

        // move down
        if (i + 1 < n) {
            ans = max(ans, current + fun(i + 1, j, neutralized, coins));

            if (current < 0 && neutralized < 2)
                ans = max(ans, fun(i + 1, j, neutralized + 1, coins));
        }

        return dp[i][j][ neutralized]= ans;
    }

    int maximumAmount(vector<vector<int>>& coins) {
        int n=coins.size();
        int m=coins[0].size();

    dp.resize(n, vector<vector<int>>(m, vector<int>(3,INT_MIN)));
        return fun(0,0,0,coins);
    }
};
