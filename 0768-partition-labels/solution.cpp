
class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> lastIndex;
        
       
        for (int i = 0; i < s.size(); i++) {
            lastIndex[s[i]] = i;
        }

        vector<int> ans;
        int maxEnd = 0, prev = -1;

       
        for (int i = 0; i < s.size(); i++) {
            maxEnd = max(maxEnd, lastIndex[s[i]]); 

          
            if (i == maxEnd) {
                ans.push_back(i - prev);
                prev = i;
            }
        }

        return ans;
    }
};

