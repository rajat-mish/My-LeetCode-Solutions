class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int n = s.size();
        
        // Store the index of the last occurrence of each digit (0-9)
        vector<int> last(10, -1);
        for (int i = 0; i < n; ++i) {
            last[s[i] - '0'] = i;
        }
        
        // Traverse the number from left to right
        for (int i = 0; i < n; ++i) {
            // Check if there is a larger digit later in the string
            for (int d = 9; d > s[i] - '0'; --d) {
                if (last[d] > i) {
                    // Swap the digits
                    swap(s[i], s[last[d]]);
                    return stoi(s); // Return the new number after swapping
                }
            }
        }
        
        // If no swap is performed, return the original number
        return num;
    }
};

