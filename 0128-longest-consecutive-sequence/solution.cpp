class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int ans = 0;

        for (int x : st) {
            if (st.find(x - 1) == st.end()) {
                int cnt = 1;
                long long ele = x;

                while (ele + 1 <= INT_MAX && st.find((int)(ele + 1)) != st.end()) {
                    ele++;
                    cnt++;
                }

                ans = max(ans, cnt);
            }
        }

        return ans;
    }
};
