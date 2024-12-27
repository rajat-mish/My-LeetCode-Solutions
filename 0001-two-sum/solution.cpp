class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int num=target-nums[i];
            if(mp.find(num)!=mp.end()){
            
                             v.push_back(i);
                v.push_back(mp[num]);
                return v;
             
            }
            mp[nums[i]]=i;
        }
        return v;

    }
};
