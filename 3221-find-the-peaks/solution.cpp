class Solution {
public:
    vector<int> findPeaks(vector<int>& nums) {vector<int>v;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                if(i!=nums.size()-1){
                v.push_back(i);}
            }
        }
        return v;
    }
};
