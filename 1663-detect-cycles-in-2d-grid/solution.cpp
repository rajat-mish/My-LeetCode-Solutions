class Solution {
public:
    int n, m;

    bool dfs(int row, int col, int pr, int pc,
             vector<vector<int>>& vis,
             vector<vector<char>>& grid) {

        vis[row][col] = 1;

        int delr[] = {0, 1, 0, -1};
        int delc[] = {1, 0, -1, 0};

        for (int i = 0; i < 4; i++) {
            int nr = row + delr[i];
            int nc = col + delc[i];

            if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                grid[nr][nc] == grid[row][col]) {

                if (!vis[nr][nc]) {
                    if (dfs(nr, nc, row, col, vis, grid))
                        return true;
                }
                else if (nr != pr || nc != pc) {
                    return true;
                }
            }
        }

        return false;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j]) {
                    if (dfs(i, j, -1, -1, vis, grid))
                        return true;
                }
            }
        }

        return false;
    }
};
