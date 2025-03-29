class Solution {
public:
void fun(int i,vector<int>&temp,vector<int>&v,vector<vector<int>>&ans){
   
        ans.push_back(temp);
      
   
    for(int j=i;j<v.size();j++){
        if(j>i && v[j]==v[j-1])continue;
        temp.push_back(v[j]);
        fun(j+1,temp,v,ans);
        temp.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        fun(0,temp,nums,ans);
       
        return ans;
    }
};
