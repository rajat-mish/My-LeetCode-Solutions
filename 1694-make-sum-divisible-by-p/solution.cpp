class Solution {
public:
  int minSubarray(vector<int>& nums, int p) {
    int n = nums.size();
    long long total_sum = 0;
    
    // Calculate the total sum of the array
    for (int num : nums) {
        total_sum = (total_sum + num) % p;
    }
    
    // If the total sum is already divisible by p, return 0
    if (total_sum == 0) return 0;
    
    // We need to find a subarray whose sum, when removed, makes the total sum divisible by p
    long long target_rem = total_sum; // This is the remainder we need to remove
    
    // Map to store the first occurrence of prefix_sum % p
    unordered_map<int, int> prefix_map;
    prefix_map[0] = -1; // Initialize with a prefix sum of 0 at index -1
    
    long long prefix_sum = 0;
    int min_len = n; // The smallest subarray length to remove
    
    for (int i = 0; i < n; ++i) {
        prefix_sum = (prefix_sum + nums[i]) % p;
        
        // The remainder we are looking for in the prefix sums
        long long target = (prefix_sum - target_rem + p) % p;
        
        if (prefix_map.find(target) != prefix_map.end()) {
            min_len = min(min_len, i - prefix_map[target]);
        }
        
        // Store the current prefix_sum % p in the map
        prefix_map[prefix_sum] = i;
    }
    
    // If we found a valid subarray, return its length; otherwise return -1
    return (min_len == n) ? -1 : min_len;
}
};
