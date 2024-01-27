class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(abs(nums[i]-nums[j])>=valueDifference && abs(i-j)>=indexDifference){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        if(v.size()==0){
            v.push_back(-1);
            v.push_back(-1);
        }
        return v;
    }
};
