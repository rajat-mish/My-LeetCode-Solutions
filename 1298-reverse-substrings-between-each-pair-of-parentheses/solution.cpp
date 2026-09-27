class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        int n=s.size();
         int i=0;
        while(i<n){

            while(i<n && s[i]!=')'){
                st.push(s[i]);
                i++;
            }

            if(s[i]==')'){
                string temp="";
                while(st.size()>0 && st.top()!='(' ){
                    temp+=st.top();
                    st.pop();
                }
                if(!st.empty() && st.top()=='(')st.pop();
                for(int j=0;j<temp.size();j++)st.push(temp[j]);
                i++;
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
