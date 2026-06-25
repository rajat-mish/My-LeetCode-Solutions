class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
     
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
             int tc=0;
            for(int j=i;j<n;j++){
              if(nums[j]==target)tc++;

              int len=j-i+1;
              if(tc>len/2)cnt++;
            }
        }
        return cnt;
    }
};
