class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size(); i++) {
            string reversed = words[i];
            reverse(reversed.begin(), reversed.end());
            if(words[i] == reversed) {
                return words[i];
            }
        }
        return "";
    }
};

