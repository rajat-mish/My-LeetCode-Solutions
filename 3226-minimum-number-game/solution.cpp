class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        //reverse(nums.begin(),nums.end());
        vector<int>v;

        for(int i=0;i<nums.size();i+=2){
            int x=nums[i];
            int y=nums[i+1];
            v.push_back(y);
            v.push_back(x);
            // nums.pop_back();
            // nums.pop_back();

        }
        return v;
    }
};
