class Solution {
public:
    string longestPrefix(string s) {
        int suf=1;
        int pre=0;
        int n=s.size();
        vector<int>lps(n,0);
        while(suf<n){
            if(s[suf]==s[pre]){
                lps[suf]=pre+1;
                pre++;
                suf++;
            }
            else{
                if(pre!=0){
                    pre=lps[pre-1];
                }
                else{
                    lps[suf]=0;
                    suf++;
                }
            }
        }
        int sz=lps[n-1];
        string ans="";
        for(int i=0;i<sz;i++){
            ans.push_back(s[i]);
        }
        return ans;
    }
};
