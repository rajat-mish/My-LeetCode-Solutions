class Solution {
public:
void helper(vector<int>& nums,vector<int>ans,  vector<vector<int>>&finalans,int i){
    if(i==nums.size()){
        finalans.push_back(ans);
        return;
    }
    helper(nums,ans,finalans,i+1);
    ans.push_back(nums[i]);
    helper(nums,ans,finalans,i+1);

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
         vector<vector<int>>finalans;
         helper(nums,ans,finalans,0);
         return finalans;
    }
};
