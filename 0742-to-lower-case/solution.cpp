class Solution {
public:
    string toLowerCase(string s) {
        string ans=s;
        for(int i=0;i<s.size();i++){
            if(65<=ans[i] && ans[i]<=90){
              ans[i]=ans[i]+32;
            }
        }
        return ans;
    }
};
