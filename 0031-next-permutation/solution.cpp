class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int j= -1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                j=i;
                break;
            }
        }
        if(j==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        reverse(nums.begin()+1+j, nums.end());
        int p=-1;
        for(int i=j+1;i<n;i++){
            if(nums[i]>nums[j]){
                p=i;
                break;
            }
        }
        int temp=nums[j];
        nums[j]=nums[p];
        nums[p]=temp;
        return;
    }
};
