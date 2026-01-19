class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int thr) {
        int m = mat.size(), n = mat[0].size();

        // prefix sum
        vector<vector<int>> pref(m + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                pref[i][j] = mat[i-1][j-1]
                           + pref[i-1][j]
                           + pref[i][j-1]
                           - pref[i-1][j-1];
            }
        }

        int lo = 0, hi = min(m, n), ans = 0;

        while (lo <= hi) {
            int k = (lo + hi) / 2;
            bool ok = false;

            for (int i = 0; i + k <= m && !ok; i++) {
                for (int j = 0; j + k <= n; j++) {
                    int sum = pref[i+k][j+k]
                            - pref[i][j+k]
                            - pref[i+k][j]
                            + pref[i][j];

                    if (sum <= thr) {
                        ok = true;
                        break;
                    }
                }
            }

            if (ok) {
                ans = k;
                lo = k + 1;   // try bigger
            } else {
                hi = k - 1;   // try smaller
            }
        }

        return ans;
    }
};

