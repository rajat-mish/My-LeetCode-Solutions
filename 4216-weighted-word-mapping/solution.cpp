class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        unordered_map<char,int>mpp;
        unordered_map<int,char>mp;

        for(int i=0;i<26;i++){
            char ch='z'-i;
            mp[i]=ch;
        }
        string ans="";
        for(int i=0;i<26;i++){
             char ch='a'+i;
             mpp[ch]=i;
        }

        for(int i=0;i<words.size();i++){
            string temp=words[i];
            int len=0;
            for(int j=0;j<temp.size();j++){
                len+=weights[mpp[temp[j]]];
            }
            ans+=mp[len%26];
        }
        return ans;
    }
};
