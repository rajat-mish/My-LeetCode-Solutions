class Solution {
public:

 void helper(vector<vector<int>>&v,vector<int>ans,vector<int>& candidates, int target,int i){
            if(target==0){
            
                 v.push_back(ans);
           
         }
if(target<0)return;
  
       for(int j=i;j<candidates.size();j++){
           ans.push_back(candidates[j]);
             helper(v,ans,candidates,target-candidates[j], j);
             ans.pop_back();
       }
        
 }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>>v;
         vector<int>ans;
     helper(v,ans, candidates,  target,0);    
         
return v;
  

    }
};
