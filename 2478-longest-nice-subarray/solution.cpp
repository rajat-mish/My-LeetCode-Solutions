class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int i=0;
        int ans=0;
        int bitmask=0;
        for(int j=0;j<nums.size();j++){
            while((bitmask & nums[j])!=0){
                bitmask=bitmask^nums[i];
                i++;
            }
            bitmask=bitmask | nums[j];
            ans=max(ans,j-i+1);

        }
        return ans;
    }
};
