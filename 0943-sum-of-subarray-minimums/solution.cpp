class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        stack<int>st;
        vector<int>nse(n,0),pse(n,0);
        for(int i=n-1;i>=0;i--){
            while(st.size()>0 && arr[st.top()]>=arr[i])st.pop();
           nse[i]=st.size()==0?n:st.top();
            st.push(i);
        }
        while(!st.empty())st.pop();
        for(int i=0;i<n;i++){
            while(st.size()>0 && arr[st.top()]>arr[i])st.pop();
            pse[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        
        long long total=0;
        for(int i=0;i<n;i++){
            long long  left=i-pse[i];
            long long  right=nse[i]-i;
            total=(total+left*right*arr[i])%1000000007;
        }
        return (int)total;
    }
};
