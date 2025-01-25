class Solution {
public:

    int maxSubArray(vector<int>& b) {
           int T = INT_MIN; // Initialize T to 0, which will store the maximum sum subarray
    int prv = 0; // Initialize prv to 0, which will store the current maximum sum subarray ending at b[i]
 
    for (int i = 0; i < b.size(); ++i) {
        int current = max(prv + b[i], b[i]);
        //current = max(current, 0);
        prv = current;
        T = max(T, current);
    }
 
    return T;
    }
};
