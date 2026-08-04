class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto ele:nums)mp[ele]++;

        vector<int>ans;
        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());

        for(int i=mn;i<=mx;i++){
            if(mp.find(i)==mp.end())ans.push_back(i);
        }
        return ans;
    }
};
