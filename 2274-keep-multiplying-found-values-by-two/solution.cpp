class Solution {
public:
    int findFinalValue(vector<int>& nums, int ori) {
        unordered_map<int,int>mp;
        for(auto ele:nums){
            mp[ele]++;
        }
        while(mp.find(ori)!=mp.end()){
            ori=ori*2;
        }
        return ori;
    }
};
