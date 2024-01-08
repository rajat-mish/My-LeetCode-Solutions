class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>v;
        int i=0;
        while(i<nums.size()){
            int ci=nums[i]-1;
            if(nums[i]==nums[ci]||i==ci){
                i++;
            }
            else{
                swap(nums[i],nums[ci]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1){
                v.push_back(i+1);
            }
        }
        return v;
    }
};
