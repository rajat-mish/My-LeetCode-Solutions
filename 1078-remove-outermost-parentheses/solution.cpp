class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int d=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(d>0)ans+=s[i];
                d++;
            }
            else{
                d--;
                if(d>0)ans+=s[i];
            }
        }
        return ans;
    }
};
