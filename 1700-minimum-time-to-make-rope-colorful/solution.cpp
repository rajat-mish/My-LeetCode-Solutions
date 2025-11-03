class Solution {
public:
    int minCost(string col, vector<int>& need) {
        stack<int>st;
        st.push(0);
        int ans=0;
        for(int i=1;i<col.size();i++){
        if(!st.empty() && col[i]==col[st.top()]){
              
                if(need[i]<need[st.top()]){
                    ans+=need[i];
                  
                   // st.push(i);
                }
                else{
                    ans+=need[st.top()];
                      st.pop();
                    st.push(i);
                }
           
        }
        else{
            st.push(i);
        }
        }
        return ans;
    }
};
