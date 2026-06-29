class Solution {
public:
    int numOfStrings(vector<string>& pat, string word) {
        int cnt=0;
        for(int i=0;i<pat.size();i++){
            if(word.contains(pat[i]))cnt++;
        }
        return cnt;
    }
};
