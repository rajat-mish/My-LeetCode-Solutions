class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       return nums[0];
        // int l=0;
        // int h=nums.size()-1;
        // while(l<=h){
        //     int mid=l+(h-l)/2;
        //     if(nums[mid]==)
        // }
    }
};
