class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int count=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                count++;
            }
            else if(s[i]==')'){
                ans=max(ans,count);
                count--;
                st.pop();
            }
        }
        return ans;
    }
};
