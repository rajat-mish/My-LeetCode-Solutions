class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long res=0;
        int mxc=0;
        int l=0;
        int maxe=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++ ){
            if(nums[i]==maxe)mxc++;
            while(mxc>k ||(l<i && mxc==k && nums[l]!=maxe)){
                if(nums[l]==maxe)mxc--;
                l++;
            }
            if(mxc==k)res+=l+1;
        }
        return res;
    }
};
