class Solution {
public:
    // Comparator function (static because used inside a class)
    static bool comp(const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first;
    }

    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans(arr.size());
        vector<int> copy = arr;  // Copy of the original array
        sort(copy.begin(), copy.end());  // Sort the copy array

        unordered_map<int, int> rankMap;  // To store ranks of elements

        // Assign ranks based on the sorted order
        int rank = 1;
        for (int i = 0; i < copy.size(); i++) {
            // Only assign a new rank to a distinct element
            if (rankMap.find(copy[i]) == rankMap.end()) {
                rankMap[copy[i]] = rank++;
            }
        }

        // Build the result based on the ranks
        for (int i = 0; i < arr.size(); i++) {
            ans[i] = rankMap[arr[i]];
        }

        return ans;
    }
};

