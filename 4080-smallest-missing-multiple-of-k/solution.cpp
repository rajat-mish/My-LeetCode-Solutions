class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        // int n=nums.size();
        unordered_map<int,int>mp;

        int maxi=*max_element(nums.begin(),nums.end());
        int d=maxi/k;
        for(auto ele:nums)mp[ele]++;
        for(int n=k;n<=(d+1)*k;n+=k ){
            if(mp.find(n)==mp.end())return n;
        }
        return k;
    }
};
