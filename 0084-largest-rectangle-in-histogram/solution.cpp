class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
          vector<int>nsr;
        int n=arr.size();
        stack<int>st;
        for(int i=arr.size()-1;i>=0;i--){
            if(st.size()==0){
                nsr.push_back(n);
            }
            else if(st.size()>0 && arr[st.top()]>=arr[i]){
                while(st.size()>0 && arr[st.top()]>=arr[i]){
                    st.pop();
                }
                if(st.size()==0){
                    nsr.push_back(n);
                }
                else{
                    nsr.push_back(st.top());
                }
            }
            else if(st.size()>0 && arr[st.top()]<arr[i]){
                nsr.push_back(st.top());
            }
            st.push(i);
        }
        reverse(nsr.begin(),nsr.end());
 
        
        
        // calculation of next smaller left
        
        vector<int>nsl;
        stack<int>stk;
        
        for(int i=0;i<arr.size();i++){
            if(stk.size()==0){
                nsl.push_back(-1);
            }
            else if(stk.size()>0 && arr[stk.top()]>=arr[i]){
                while(stk.size()>0 && arr[stk.top()]>=arr[i]){
                    stk.pop();
                }
                if(stk.size()==0){
                    nsl.push_back(-1);
                    
                }
                else{
                    nsl.push_back(stk.top());
                }
            }
            else if(stk.size()>0 && arr[stk.top()]<arr[i]){
                nsl.push_back(stk.top());
            }
            stk.push(i);
        }
   
        
        vector<int>width;
        for(int i=0;i<n;i++){
            width.push_back(nsr[i]-nsl[i]-1);
        }
        
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            int area=width[i]*arr[i];
            mx=max(mx,area);
        }
        
        
        return mx;
    }
};
