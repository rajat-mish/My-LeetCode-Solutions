class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        vector<long long> ans(n, 0);

        for (auto &it : mp) {
            vector<int>& v = it.second;
            int m = v.size();

            vector<long long> prefix(m, 0);
            prefix[0] = v[0];

            for (int i = 1; i < m; i++)
                prefix[i] = prefix[i - 1] + v[i];

            for (int i = 0; i < m; i++) {
                long long left = 1LL * i * v[i] - (i ? prefix[i - 1] : 0);
                long long right = (prefix[m - 1] - prefix[i]) - 1LL * (m - i - 1) * v[i];
                ans[v[i]] = left + right;
            }
        }

        return ans;
    }
};
