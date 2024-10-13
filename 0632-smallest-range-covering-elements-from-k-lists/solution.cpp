class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        // Min-heap to store (value, list index, element index)
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> minHeap;
        int maxNum = INT_MIN;
        
        // Initialize the heap with the first element of each list
        for (int i = 0; i < nums.size(); i++) {
            minHeap.push({nums[i][0], {i, 0}});
            maxNum = max(maxNum, nums[i][0]);
        }
        
        // Initialize the smallest range
        int minRange = INT_MAX;
        vector<int> result(2);
        
        // While we can pop elements from the heap
        while (minHeap.size() == nums.size()) {
            auto [minNum, indexes] = minHeap.top(); // Smallest number
            int listIdx = indexes.first;
            int elementIdx = indexes.second;
            minHeap.pop();
            
            // Update the range if a smaller range is found
            if (maxNum - minNum < minRange) {
                minRange = maxNum - minNum;
                result = {minNum, maxNum};
            }
            
            // If there is a next element in the list, add it to the heap
            if (elementIdx + 1 < nums[listIdx].size()) {
                int nextNum = nums[listIdx][elementIdx + 1];
                minHeap.push({nextNum, {listIdx, elementIdx + 1}});
                maxNum = max(maxNum, nextNum); // Update the max number in the current window
            } else {
                // If we can't add more elements from this list, stop
                break;
            }
        }
        
        return result;
    }
};
