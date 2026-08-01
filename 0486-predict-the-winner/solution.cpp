class Solution {
public:
int dp[21][21][2];
    int fun(int i, int j, bool flag, vector<int>& nums) {
        if (i > j) return 0;
          if(dp[i][j][flag]!=-1)return dp[i][j][flag];
        if (flag) { // Player 1 turn
            return dp[i][j][flag]= max(
                nums[i] + fun(i + 1, j, 0, nums),
                nums[j] + fun(i, j - 1, 0, nums)
            );
        } else { // Player 2 turn
            return dp[i][j][flag]= min(
                -nums[i] + fun(i + 1, j, 1, nums),
                -nums[j] + fun(i, j - 1, 1, nums)
            );
        }
    }

    bool predictTheWinner(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return fun(0, nums.size() - 1, 1, nums) >= 0;
    }
};
