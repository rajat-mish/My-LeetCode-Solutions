class Solution {
public:
    int distributeCandies(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                count++;
            }
        }
        if(count>=n/2){
            return n/2;
        }
        return count;
    }
};
