class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        
        // Declare dp vector of vectors
        vector<vector<int>> dp(n, vector<int>(m, 0));
        
        // If the starting point is an obstacle, no paths are possible
        if (arr[0][0] == 1) return 0;

        // Initialize the first cell
        dp[0][0] = 1;

        // Initialize the first row
        for (int i = 1; i < m; ++i) {
            if (arr[0][i] == 1) {
                dp[0][i] = 0;
            } else {
                dp[0][i] = dp[0][i-1];
            }
        }

        // Initialize the first column
        for (int i = 1; i < n; ++i) {
            if (arr[i][0] == 1) {
                dp[i][0] = 0;
            } else {
                dp[i][0] = dp[i-1][0];
            }
        }

        // Fill the rest of the dp table
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                if (arr[i][j] == 1) {
                    dp[i][j] = 0;  // If there's an obstacle, no paths here
                } else {
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];  // Sum of ways from top and left
                }
            }
        }

        // Return the number of unique paths to the bottom-right corner
        return dp[n-1][m-1];
    }
};

