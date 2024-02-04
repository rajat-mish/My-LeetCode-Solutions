class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        vector<int>v(n,0);
        vector<int>ans;
        stack<int>st;
        v[n-1]=-1;
        st.push(nums2[n-1]);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && st.top()<nums2[i]){
                st.pop();
            }
            if(st.size()==0)v[i]=-1;
            else{
                v[i]=st.top();
               
            }
             st.push(nums2[i]);
        }
    for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();j++){
            if(nums1[i]==nums2[j]){
               ans.push_back(v[j]);
            }
        }
    }
    return ans;

    }
};
