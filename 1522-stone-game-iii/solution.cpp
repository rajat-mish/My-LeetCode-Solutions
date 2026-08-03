class Solution {
public:
    string stoneGameIII(vector<int>& stone) {
        int n = stone.size();

        vector<vector<int>> dp(n + 3, vector<int>(2, 0));

        // dp[i][1] -> Alice's turn (maximize)
        // dp[i][0] -> Bob's turn (minimize)

        for (int i = n - 1; i >= 0; i--) {

            // Alice's turn
            int ans = stone[i] + dp[i + 1][0];

            if (i + 1 < n)
                ans = max(ans, stone[i] + stone[i + 1] + dp[i + 2][0]);

            if (i + 2 < n)
                ans = max(ans, stone[i] + stone[i + 1] + stone[i + 2] + dp[i + 3][0]);

            dp[i][1] = ans;

            // Bob's turn
            ans = -stone[i] + dp[i + 1][1];

            if (i + 1 < n)
                ans = min(ans, -stone[i] - stone[i + 1] + dp[i + 2][1]);

            if (i + 2 < n)
                ans = min(ans, -stone[i] - stone[i + 1] - stone[i + 2] + dp[i + 3][1]);

            dp[i][0] = ans;
        }

        int ans = dp[0][1];

        if (ans > 0)
            return "Alice";
        if (ans == 0)
            return "Tie";
        return "Bob";
    }
};
