class Solution {
public:
    int maxUniqueSplit(string s) {
        unordered_set<string> uniqueSubstrings;
        return backtrack(s, 0, uniqueSubstrings);
    }

private:
    int backtrack(const string& s, int start, unordered_set<string>& uniqueSubstrings) {
        if (start == s.length()) {
            return 0; // If we've reached the end of the string, no more splits can be made
        }
        
        int maxSplits = 0;
        string currentSubstring;
        
        for (int i = start; i < s.length(); ++i) {
            currentSubstring += s[i];
            
            // If the current substring is unique, try to include it
            if (uniqueSubstrings.find(currentSubstring) == uniqueSubstrings.end()) {
                uniqueSubstrings.insert(currentSubstring);
                // Recursively split the remaining part of the string
                int splits = 1 + backtrack(s, i + 1, uniqueSubstrings);
                maxSplits = max(maxSplits, splits);
                // Backtrack by removing the substring
                uniqueSubstrings.erase(currentSubstring);
            }
        }
        
        return maxSplits;
    }
};

