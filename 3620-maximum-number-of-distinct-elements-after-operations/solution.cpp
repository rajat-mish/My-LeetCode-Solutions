class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long lastUsed = LLONG_MIN;  
        int count = 0;

        for (int num : nums) {
            long long pos = max(lastUsed + 1, (long long)num - k);
            if (pos <= (long long)num + k) {
                count++;
                lastUsed = pos;
            }
        }
        return count;
    }
};

