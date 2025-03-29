class Solution {
public:

void fun(int i,int target,vector<int>&temp,vector<int>&v,vector<vector<int>>&ans){
   
        if(target==0){
            ans.push_back(temp);
        
        return;
    }

    for(int j=i;j<v.size();j++){
        if(j>i && v[j]==v[j-1])continue;
        if(v[j]>target)break;
        temp.push_back(v[j]);
        fun(j+1,target-v[j],temp,v,ans);
        temp.pop_back();
    }
   
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        fun(0,target,temp,candidates,ans);
        return ans;
    }
};
