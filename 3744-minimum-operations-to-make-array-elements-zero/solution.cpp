class Solution {
public:
    int fun(int x) {
        int k = 0;
        while (x >= 4) {
            x /= 4;
            k++;
        }
        return k+1;
    }

    long long pow4(int exp) {
        return 1LL << (2 * exp); // exact 4^exp using bit shift
    }

    // Total operations for numbers in [1..n]
    long long getOperations(long long n) {
        if (n <= 0) return 0;
        long long res = 0;
        long long ops = 0;
        // iterate blocks [4^k, 4^{k+1}-1]
        for (long long pw = 1; pw <= n; ) {
            ops++;
            long long l = pw;
            long long r = min(n, pw * 4 - 1);
            res += (r - l + 1) * ops;
            // advance pw safely
            if (pw > LLONG_MAX / 4) break;
            pw *= 4;
        }
        return res;
    }

    long long minOperations(vector<vector<int>>& que) {
        long long ans = 0;
        for (auto &q : que) {
            int l = q[0];
            int r = q[1];
            long long val = (getOperations(r) - getOperations((long long)l - 1) + 1) / 2;
            ans += val;
        }
        return ans;
    }
};

