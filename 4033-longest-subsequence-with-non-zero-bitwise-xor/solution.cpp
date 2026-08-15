class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
  int cnt=0;
  for(auto ele:nums)if(ele==0)cnt++;
  if(cnt==nums.size())return 0;

    long long xr=nums[0];
    for(int i=1;i<nums.size();i++){
        xr=(long long)(xr^nums[i]);
    }
    if(xr==0)return nums.size()-1;
    return nums.size();
    }
};
