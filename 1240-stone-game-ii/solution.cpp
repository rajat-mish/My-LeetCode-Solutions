class Solution {
public:
    int n;
    vector<vector<int>> dp;
    vector<int> suffix;

    int solve(int i, int M, vector<int>& piles) {
        // No piles left
        if (i >= n)
            return 0;

        // Already calculated
        if (dp[i][M] != -1)
            return dp[i][M];

        // Total stones remaining
        int totalRemaining = suffix[i];

        int best = 0;

        // Take X piles
        for (int X = 1; X <= 2 * M && i + X <= n; X++) {

            int opponent = solve(
                i + X,
                max(M, X),
                piles
            );

            int current = totalRemaining - opponent;

            best = max(best, current);
        }

        return dp[i][M] = best;
    }

    int stoneGameII(vector<int>& piles) {
        n = piles.size();

        dp.assign(n, vector<int>(n + 1, -1));

        // suffix[i] = sum of piles from i to n-1
        suffix.resize(n);

        suffix[n - 1] = piles[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = piles[i] + suffix[i + 1];
        }

        return solve(0, 1, piles);
    }
};
