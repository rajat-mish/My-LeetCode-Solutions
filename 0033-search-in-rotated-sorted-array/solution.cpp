class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1){
            if(nums[0]==target)return 0;
            return -1;
        }
        int i=0,j=nums.size()-1;
        while(i<j){
            if(nums[i]==target)return i;
            else if(nums[j]==target)return j;
            else if(nums[i]>target && nums[j]>target){
           i++;
            }
            else if(nums[i]<target && nums[j]<target){
                i++;j--;
            }
            else if(nums[i]>target && nums[j]<target){
                return -1;
            }
            else if(nums[i]<target && nums[j]>target)i++;
        }
        if(nums[i]==target)return i;
        return -1;
    }
};
