class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char, int> mp;
        int i = 0, j = 0, n = s.size(), count = 0;

        while (j < n) {
            mp[s[j]]++;  // Expand the window

            while (mp.size() == 3) {  // Valid window with 'a', 'b', 'c'
                count += (n - j);  // All substrings from i to n-1 are valid
                mp[s[i]]--;  // Shrink the window from the left
                if (mp[s[i]] == 0) 
                    mp.erase(s[i]);  // Remove character if count becomes zero
                i++;
            }
            j++;
        }
        return count;
    }
};

