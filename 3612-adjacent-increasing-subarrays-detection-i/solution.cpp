class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>v(n,1);
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                v[i]=v[i-1]+1;
            }
        }
        for(int i=0;i+2*k-1<n;i++){
            if(v[i+k-1]>=k && v[i+2*k-1]>=k)return true;
        }
        return false;
    }
};
