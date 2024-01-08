class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        while(i<nums.size()){
            //int ci=nums[i]-1;
            if(nums[i]<=0)i++;
            else if(nums[i]<=0 || nums[i]>nums.size()||nums[nums[i]-1]==nums[i] || nums[i]==i+1){
                i++;
            }
            else swap(nums[i],nums[nums[i]-1]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1)return i+1;
        }
        return n+1;
    }
};
