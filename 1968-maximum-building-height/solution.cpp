class Solution {
public:
    int maxBuilding(int n, vector<vector<int>>& restrictions) {
        // Add starting point
        restrictions.push_back({1, 0});

        // Sort by index
        sort(restrictions.begin(), restrictions.end());

        // Add end point if missing
        if (restrictions.back()[0] != n) {
            restrictions.push_back({n, n - 1});
        }

        int m = restrictions.size();

        // Left to right pass
        for (int i = 1; i < m; i++) {
            int dist = restrictions[i][0] - restrictions[i - 1][0];
            restrictions[i][1] = min(
                restrictions[i][1],
                restrictions[i - 1][1] + dist
            );
        }

        // Right to left pass
        for (int i = m - 2; i >= 0; i--) {
            int dist = restrictions[i + 1][0] - restrictions[i][0];
            restrictions[i][1] = min(
                restrictions[i][1],
                restrictions[i + 1][1] + dist
            );
        }

        // Find maximum peak between adjacent restrictions
        int ans = 0;

        for (int i = 1; i < m; i++) {
            long long x1 = restrictions[i - 1][0];
            long long h1 = restrictions[i - 1][1];
            long long x2 = restrictions[i][0];
            long long h2 = restrictions[i][1];

            long long d = x2 - x1;

            long long peak = (h1 + h2 + d) / 2;

            ans = max(ans, (int)peak);
        }

        return ans;
    }
};
