class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans;
        if(nums[n-1]<0){
            ans=nums[n-1]*nums[n-2]*nums[n-3];
        }
        else{
            ans=max({nums[n-1]*nums[n-2]*nums[0],nums[n-1]*nums[n-2]*nums[n-3],nums[n-1]*nums[0]*nums[1]});
        }
        return ans;
    }
};
