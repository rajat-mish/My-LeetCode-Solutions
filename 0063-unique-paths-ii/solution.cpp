// class Solution {
// public:
//     int uniquePathsWithObstacles(vector<vector<int>>& arr) {
//         int m=arr.size();
//         int n=arr[0].size();
//         int dp[m][n];

//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if((i==0 || j==0)&&(arr[i][j]!=1)){
//                     dp[i][j]=1;

//                 }
//                 if(arr[i][j]==1){
//                     dp[i][j]=0;
//                 }
//                 else{
//                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
//                 }
//             }
//         }
//         return dp[m-1][n-1];
//     }
// };








class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));

        // Initialize the first cell
        if (arr[0][0] == 0) {
            dp[0][0] = 1;
        }

        // Initialize the first column
        for (int i = 1; i < m; i++) {
            if (arr[i][0] == 0) {
                dp[i][0] = dp[i-1][0];
              
            }
        }

        // Initialize the first row
        for (int j = 1; j < n; j++) {
            if (arr[0][j] == 0) {
                dp[0][j] = dp[0][j-1];
            }
        }

        // Fill the dp table
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (arr[i][j] == 0) {
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
            }
        }

        return dp[m-1][n-1];
    }
};

