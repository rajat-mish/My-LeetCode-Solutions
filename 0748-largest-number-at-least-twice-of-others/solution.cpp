class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=nums[0];
        int idx=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
                idx=i;
            }
        }
        sort(nums.begin(),nums.end());
        if(2*nums[nums.size()-2]<=nums[nums.size()-1]){
          return idx;
        }
        return -1;
    }
};
