class Solution {
public:
    int minInsertions(string s) {
        stack<char>st;
        int ans=0;
        int n=s.size();
        int i=0;
        while(i<n){
            if(s[i]=='('){
                st.push('(');
                i++;
            }
            else{
                if(s[i]==')' && i!=n-1 && s[i+1]==')'){
                    if(!st.empty())st.pop();
                    else ans++;
                    i+=2;
                }
                else if(s[i]==')' && i==n-1){
                    if(!st.empty()){
                        st.pop();
                        ans++;
                    }
                    else{
                        ans+=2;
                    }
                    i++;
                }
                else{
                 if(!st.empty()){
                       ans++;
                    i++;
                    st.pop();
                 }
                 else{
                    ans+=2;
                    i++;
                 }
                    
                }
            }
        }
        if(!st.empty()){
            ans+=st.size()*2;
        }
        return ans;
    }
};
