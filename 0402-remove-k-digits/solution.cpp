class Solution {
public:
    string removeKdigits(string s, int k) {
              stack<char>st;
        for(int i=0;i<s.size();i++){
            if(st.empty() || s[i]>=st.top()){
                st.push(s[i]);
            }
            else{
              while(k>0 && !st.empty()&& st.top()>s[i]){
               if(!st.empty())st.pop();
                  k--;
              }
              st.push(s[i]);
            }
        }
        while(k--){
           if(!st.empty()) st.pop();
        }
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
      
        reverse(ans.begin(),ans.end());
        int idx = 0;
        while (idx < ans.size() && ans[idx] == '0') idx++;
        ans = ans.substr(idx);

        return ans.empty() ? "0" : ans;
        return ans;
    }
};
