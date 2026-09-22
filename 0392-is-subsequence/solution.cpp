class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(t.size()<s.size())return false;

        // for(int i=0;i<s.size();i++){

        // }
        int i=0,j=0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else {
                j++;
            }
        }
        if(i<s.size())return false;
        return true;
    }
};
