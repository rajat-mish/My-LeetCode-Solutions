class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int>st;
        int n=temp.size();
        st.push(n-1);
        vector<int>ans;
        ans.push_back(0);
        for(int i=n-2;i>=0;i--){
            if(temp[i]<temp[st.top()]){
                ans.push_back(st.top()-i);
                st.push(i);
            }
            else{
                while(st.size()>0 && temp[i]>=temp[st.top()]){
                    st.pop();
                }
                if(st.size()==0)ans.push_back(0);
                else ans.push_back(st.top()-i);
                st.push(i);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
