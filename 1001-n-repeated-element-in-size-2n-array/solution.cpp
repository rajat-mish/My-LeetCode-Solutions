class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
     unordered_map<int,int>mp;
     for(auto ele:nums){
        if(mp.find(ele)!=mp.end())return ele;
        mp[ele]++;
     }
     return -1;

    }
};
