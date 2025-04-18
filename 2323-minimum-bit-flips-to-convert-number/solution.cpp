class Solution {
public:
    int minBitFlips(int start, int goal) {
        int temp=start^goal;
        int ans =__builtin_popcount(temp);
        return ans;
    }
};
