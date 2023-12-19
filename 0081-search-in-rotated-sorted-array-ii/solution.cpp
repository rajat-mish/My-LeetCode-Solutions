class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());

        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==target){
                return true;
            }
            else if(nums[m]<target){
                l=m+1;
            }
            else{
                h=m-1;
            }

        }
        return false;
    }
};
