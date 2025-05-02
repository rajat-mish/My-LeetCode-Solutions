class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int> prevGreater(n), nextGreater(n), prevSmaller(n), nextSmaller(n);
        stack<int> s;

        // Previous Greater
        for (int i = 0; i < n; ++i) {
            while (!s.empty() && nums[s.top()] < nums[i]) s.pop();
            prevGreater[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }
        while (!s.empty()) s.pop();

        // Next Greater
        for (int i = n - 1; i >= 0; --i) {
            while (!s.empty() && nums[s.top()] <= nums[i]) s.pop();
            nextGreater[i] = s.empty() ? n : s.top();
            s.push(i);
        }
        while (!s.empty()) s.pop();

        // Previous Smaller
        for (int i = 0; i < n; ++i) {
            while (!s.empty() && nums[s.top()] > nums[i]) s.pop();
            prevSmaller[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }
        while (!s.empty()) s.pop();

        // Next Smaller
        for (int i = n - 1; i >= 0; --i) {
            while (!s.empty() && nums[s.top()] >= nums[i]) s.pop();
            nextSmaller[i] = s.empty() ? n : s.top();
            s.push(i);
        }

        long long maxSum = 0, minSum = 0;

        for (int i = 0; i < n; ++i) {
            long long leftMax = i - prevGreater[i];
            long long rightMax = nextGreater[i] - i;
            maxSum += (long long)nums[i] * leftMax * rightMax;

            long long leftMin = i - prevSmaller[i];
            long long rightMin = nextSmaller[i] - i;
            minSum += (long long)nums[i] * leftMin * rightMin;
        }

        return maxSum - minSum;
    }
};

