class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        if (n < 3 || m < 3) return 0;

        int ans = 0;

        for (int row = 0; row <= n - 3; row++) {
            for (int col = 0; col <= m - 3; col++) {

                vector<int> freq(10, 0);
                bool ok = true;

                // check 1 to 9
                for (int i = row; i < row + 3; i++) {
                    for (int j = col; j < col + 3; j++) {
                        int v = grid[i][j];
                        if (v < 1 || v > 9 || freq[v]++) {
                            ok = false;
                            break;
                        }
                    }
                }
                if (!ok) continue;

                int sum = grid[row][col] + grid[row][col+1] + grid[row][col+2];

                // rows
                for (int i = row; i < row + 3; i++) {
                    int rsum = 0;
                    for (int j = col; j < col + 3; j++)
                        rsum += grid[i][j];
                    if (rsum != sum) ok = false;
                }

                // cols
                for (int j = col; j < col + 3; j++) {
                    int csum = 0;
                    for (int i = row; i < row + 3; i++)
                        csum += grid[i][j];
                    if (csum != sum) ok = false;
                }

                // diagonals
                int d1 = grid[row][col] + grid[row+1][col+1] + grid[row+2][col+2];
                int d2 = grid[row][col+2] + grid[row+1][col+1] + grid[row+2][col];

                if (d1 != sum || d2 != sum) ok = false;

                if (ok) ans++;
            }
        }
        return ans;
    }
};

