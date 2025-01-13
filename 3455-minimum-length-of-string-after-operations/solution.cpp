class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>mp;
        int n=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto ele:mp){
            if(ele.second>2){
                if(ele.second %2==1){
                    n+=ele.second-1;
                }
                else{
                    n+=ele.second-2;
                }
            }
        }
        return s.size()-n;
    }
};
