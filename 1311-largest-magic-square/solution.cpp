class Solution {
public:
  bool checkSum(vector<vector<int>>& mat, int r, int c, int k) {
        int target = 0;

        // sum of first row
        for (int j = c; j < c + k; j++)
            target += mat[r][j];

        // check all rows
        for (int i = r; i < r + k; i++) {
            int rowSum = 0;
            for (int j = c; j < c + k; j++)
                rowSum += mat[i][j];
            if (rowSum != target) return false;
        }
         // check all columns
        for (int j = c; j < c + k; j++) {
            int colSum = 0;
            for (int i = r; i < r + k; i++)
                colSum += mat[i][j];
            if (colSum != target) return false;
        }

        // main diagonal
        int diag1 = 0;
        for (int i = 0; i < k; i++)
            diag1 += mat[r + i][c + i];
        if (diag1 != target) return false;
          // secondary diagonal
        int diag2 = 0;
        for (int i = 0; i < k; i++)
            diag2 += mat[r + i][c + k - 1 - i];
        if (diag2 != target) return false;

        return true;
    }
    int largestMagicSquare(vector<vector<int>>& mat) {
         int n = mat.size();
        int m = mat[0].size();

        int maxK = min(n, m);

        // try larger k first
        for (int k = maxK; k >= 2; k--) {
            for (int i = 0; i + k <= n; i++) {
                for (int j = 0; j + k <= m; j++) {
                    if (checkSum(mat, i, j, k))
                        return k;
                }
            }
        }

        return 1; // minimum always possible
    }
};
