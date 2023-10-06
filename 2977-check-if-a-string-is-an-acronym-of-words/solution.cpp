class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ans="";
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                ans.push_back(words[i][0]);
                break;
            }
        }
        if(ans==s)return true;
        else return false;
    }
};
