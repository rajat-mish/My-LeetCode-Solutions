// class Solution {
// public:
//     int minOperations(vector<int>& nums, int x) {
//         int sum=0;
//         for(int i=0;i<nums.size();i++){
//             sum+=nums[i];
//         }
//         int s=sum-x;
//         for(int i=0;i<nums.size();i++){
//             int su=0;
//             int count=0;
//             for(int j=i;j<nums.size();j++){
//                 su+=nums[j];
//                 count++;
//                 if(su==s){
//                     return count;
//                 }
//             }
//         }
//         return -1;
//     }
// };


class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = 0;
        for (int num : nums) {
            total += num;
        }

        int target = total - x;
        if (target < 0) {
            return -1;  // Not possible to remove x if x is larger than the total sum
        }

        if (target == 0) {
            return nums.size();  // Need to remove all elements to make sum 0
        }

        unordered_map<int, int> prefixSum;
        prefixSum[0] = -1;  // To handle the case when a subarray from the beginning forms the target
        int currentSum = 0;
        int maxLength = -1;

        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];
            if (prefixSum.find(currentSum - target) != prefixSum.end()) {
                maxLength = max(maxLength, i - prefixSum[currentSum - target]);
            }
            prefixSum[currentSum] = i;
        }

        return maxLength == -1 ? -1 : nums.size() - maxLength;
    }
};

