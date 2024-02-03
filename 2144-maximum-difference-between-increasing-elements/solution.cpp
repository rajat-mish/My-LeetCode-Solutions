class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]>nums[i]){
                    v.push_back(nums[j]-nums[i]);
                }
            }
        }
        if(v.size()>0){
            return *max_element(v.begin(),v.end());
        }
        return -1;
    }
};
