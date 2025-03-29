class Solution {
public:
 void helper(vector<vector<int>>&v,vector<int>ans,vector<int>& candidates, int target,int i,int k){
            if(target==0){
             if(ans.size()==k) v.push_back(ans);
                
           
         }
if(target<0)return;
  
       for(int j=i;j<candidates.size();j++){
           ans.push_back(candidates[j]);
             helper(v,ans,candidates,target-candidates[j], j+1,k);
             ans.pop_back();
       }
        
 }
    vector<vector<int>> combinationSum3(int k, int target) {
              vector<vector<int>>v;
         vector<int>ans;
         vector<int>arr;
         for(int i=1;i<=9;i++){
            arr.push_back(i);
         }
     helper(v,ans, arr,  target,0,k);    
         
return v;
    }
};
