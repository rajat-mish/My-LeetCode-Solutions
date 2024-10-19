class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        int maxOr = 0, count = 0;
        
        // Step 1: Find the maximum possible OR value by ORing all numbers
        for (int num : nums) {
            maxOr |= num;
        }
        
        // Step 2: Use a recursive function to find all subsets and count those with maxOr
        function<void(int, int)> findSubsets = [&](int idx, int currOr) {
            if (idx == n) {
                if (currOr == maxOr) {
                    count++;
                }
                return;
            }
            
            // Include nums[idx] in the subset
            findSubsets(idx + 1, currOr | nums[idx]);
            
            // Exclude nums[idx] from the subset
            findSubsets(idx + 1, currOr);
        };
        
        findSubsets(0, 0);
        return count;
    }
};

