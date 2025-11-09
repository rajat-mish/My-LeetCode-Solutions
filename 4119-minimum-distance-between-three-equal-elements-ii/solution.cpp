class Solution {
public:
    int minimumDistance(vector<int>& nums) {
       int maxi=*max_element(nums.begin(),nums.end());
       vector<vector<int>>adj(maxi+1);
       for(int i=0;i<nums.size();i++){
        adj[nums[i]].push_back(i);
       }
       int ans=INT_MAX;
       
       for(auto ele:adj){
        if(ele.size()>=3){
            vector<int>v=ele;
            //sort(v.begin(),v.end());
          for(int i=0;i<v.size()-2;i++){
              int a=v[i],b=v[i+1],c=v[i+2];
            ans=min(ans,2*(max({a,b,c})-min({a,b,c})));
          }
        }
       }
       return (ans==INT_MAX)?-1:ans;
    }
};
