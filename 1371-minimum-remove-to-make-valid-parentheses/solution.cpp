class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char>st;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                count++;
            }
            else if(s[i]==')'){
                if(count==0){
                    continue;
                }
                else{
                    count--;
                    st.push(s[i]);
                }
            }
            else{
                st.push(s[i]);
            }

        }
        string ans="";
        while(st.size()>0){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        



                // int count=0;
                count=0;
        for(int i=ans.size()-1;i>=0;i--){
            if(ans[i]==')'){
                st.push(ans[i]);
                count++;
            }
            else if(ans[i]=='('){
                if(count==0){
                    continue;
                }
                else{
                    count--;
                    st.push(ans[i]);
                }
            }
            else{
                st.push(ans[i]);
            }

        }


         string a="";
        while(st.size()>0){
            a.push_back(st.top());
            st.pop();
        }
       // reverse(a.begin(),a.end());
        return a;
    }
};
