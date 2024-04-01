class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<char>st;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' ' ){
                
                st.push(s[i]);
            }
            if(i>=1){
                if(s[i]!=' '&& s[i-1]==' '){
                   
                    break;
                }
            }

        }
        return st.size();
    }
};
