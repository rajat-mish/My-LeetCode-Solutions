class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>v;
        for(int i=0;i<words.size();i++){
            string s=words[i];
        sort(s.begin(),s.end());
            for(int j=0;j<s.size();j++){
                if(s[j]==x && s[j]!=s[j+1]){
                    v.push_back(i);
                }
            }
        }
        return v;
    }
};
