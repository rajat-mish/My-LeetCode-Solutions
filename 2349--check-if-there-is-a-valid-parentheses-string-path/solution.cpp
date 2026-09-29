class Solution {
public:
    int n, m;
    int dp[100][100][205];

    bool fun(int r, int c, int bal, vector<vector<char>>& grid) {
        if (r < 0 || c < 0 || r >= n || c >= m)
            return false;

        if (grid[r][c] == '(')
            bal++;
        else
            bal--;

        if (bal < 0)
            return false;

        int rem = (n - 1 - r) + (m - 1 - c);

        if (bal > rem)
            return false;

        if (r == n - 1 && c == m - 1)
            return bal == 0;

        if (dp[r][c][bal] != -1)
            return dp[r][c][bal];

        bool ans = fun(r + 1, c, bal, grid) ||
                   fun(r, c + 1, bal, grid);

        return dp[r][c][bal] = ans;
    }

    bool hasValidPath(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();

        if (grid[0][0] == ')' || grid[n - 1][m - 1] == '(')
            return false;

        memset(dp, -1, sizeof(dp));

        return fun(0, 0, 0, grid);
    }
};
