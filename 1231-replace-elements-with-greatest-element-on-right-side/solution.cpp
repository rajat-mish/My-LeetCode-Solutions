class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>v(arr.size(),0);
        v[arr.size()-1]=-1;
        if(v.size()>1){
           //v.push_back(arr[arr.size()-1]);
           int mx=INT_MIN;
           for(int i=arr.size()-1;i>0;i--){
               mx=max(mx,arr[i]);
               v.push_back(mx);
           }
           reverse(v.begin(),v.end());
           for(int i=0;i<arr.size()-1;i++){
               v.pop_back();
           }
           return v;
        }
        else{
            return v;
        }

    }
};
