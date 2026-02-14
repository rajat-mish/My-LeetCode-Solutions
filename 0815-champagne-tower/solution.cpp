class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<double> dp(1, poured);

        for(int r = 1; r <= query_row; r++) {
            vector<double> next(r + 1, 0.0);

            for(int c = 0; c < dp.size(); c++) {
                if(dp[c] > 1) {
                    double extra = dp[c] - 1;
                    next[c] += extra / 2;
                    next[c+1] += extra / 2;
                }
            }

            dp = next;
        }

        return min(1.0, dp[query_glass]);
    }
};

