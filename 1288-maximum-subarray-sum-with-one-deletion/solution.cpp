class Solution {
public:

    int maximumSum(vector<int>& arr) {
     
       int n=arr.size();
       int keep=arr[0];
       int del=-10000;
       int ans=arr[0];
       for(int i=1;i<n;i++){
        int prevk=keep;
        int prevd=del;

        del=max(prevk,prevd+arr[i]);
        keep=max(arr[i],prevk+arr[i]);
        ans=max({ans,del,keep});
       }
       return ans;
    }
};
