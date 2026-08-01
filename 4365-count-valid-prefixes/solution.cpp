class Solution {
public:
    int countValidPrefixes(string s) {
        unordered_map<char,int>mp;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            if(abs(mp['0']-mp['1'])>1)continue;
            else cnt++;
        }
        return cnt;
    }
};
