// class Solution {
// public:
//     long long fun(int i,int k,int buy,vector<int>&prices,vector<vector<vector<long long >>>&dp){
//         if(i>=prices.size() || k==0)return 0;
//         if(dp[i][buy][k]!=-1)return dp[i][buy][k];
//         long long profit=0;
//         // if(buy){
//         //     profit=max({-prices[i]+fun(i+1,k,0,prices,dp) , fun(i+1,k,1,prices,dp),-prices[i]+fun(i+1,k-1,1,prices,dp)});
//         // }
//         // else{
//         //     profit=max({prices[i]+fun(i+1,k-1,1,prices,dp) , fun(i+1,k,0,prices,dp),prices[i]+fun(i+1,k,1,prices,dp)});
//         // }


        
//         if (buy == 0) {
//             // Option 1: Buy normally
//             profit = max(profit, -prices[i] + fun(i + 1, 1, k, prices,dp));
//             // Option 2: Short sell
//             profit = max(profit, prices[i] + fun(i + 1, 2, k, prices,dp));
//             // Option 3: Skip
//             profit = max(profit, fun(i + 1, 0, k, prices,dp));
//         }
//         else if (buy == 1) {
//             // Currently holding a normal stock → can sell
//          if(k>0)   profit = max(profit, prices[i] + fun(i + 1, 0, k - 1, prices,dp));
//             // Or skip
//             profit = max(profit, fun(i + 1, 1, k, prices,dp));
//         }
//         else {
//             // Currently in short position → can buy back
//          if(k>0)   profit = max(profit, -prices[i] + fun(i + 1, 0, k - 1, prices,dp));
//             // Or skip
//             profit = max(profit, fun(i + 1, 2, k, prices,dp));
//         }

//         return dp[i][buy][k]=profit;

        
//     }
//     long long maximumProfit(vector<int>& prices, int k) {
//         vector<vector<vector<long long >>>dp(prices.size(),vector<vector<long long>>(3,vector<long long>(k+1,-1)));
//         return fun(0,k,0,prices,dp);
        
//     }
// };


class Solution {
public:
    long long fun(int i, int k, int state, vector<int>& prices, vector<vector<vector<long long>>>& dp) {
        if (i == prices.size()) {
            return (state == 0) ? 0 : LLONG_MIN;
        }

        if (dp[i][state][k] != -1) return dp[i][state][k];

        long long profit = LLONG_MIN;

        if (state == 0) {
          
            long long nextBuy = fun(i + 1, k, 1, prices, dp);
            if (nextBuy != LLONG_MIN)
                profit = max(profit, -prices[i] + nextBuy);  // Buy

            long long nextShort = fun(i + 1, k, 2, prices, dp);
            if (nextShort != LLONG_MIN)
                profit = max(profit, prices[i] + nextShort); // Short sell

            profit = max(profit, fun(i + 1, k, 0, prices, dp)); // Skip
        } else if (state == 1) {
           
            if (k > 0) {
                long long nextSell = fun(i + 1, k - 1, 0, prices, dp);
                if (nextSell != LLONG_MIN)
                    profit = max(profit, prices[i] + nextSell); // Sell
            }
            profit = max(profit, fun(i + 1, k, 1, prices, dp)); // Skip
        } else {
            // In short position → buy back or skip
            if (k > 0) {
                long long nextBuyBack = fun(i + 1, k - 1, 0, prices, dp);
                if (nextBuyBack != LLONG_MIN)
                    profit = max(profit, -prices[i] + nextBuyBack); // Buy back
            }
            profit = max(profit, fun(i + 1, k, 2, prices, dp)); // Skip
        }

        return dp[i][state][k] = profit;
    }

    long long maximumProfit(vector<int>& prices, int k) {
        int n = prices.size();
        vector<vector<vector<long long>>> dp(n + 1, vector<vector<long long>>(3, vector<long long>(k + 1, -1)));
        return fun(0, k, 0, prices, dp);
    }
};

