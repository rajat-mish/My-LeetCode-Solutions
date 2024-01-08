class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        if(nums.size()==1 && nums[0]!=0)return 1;
       sort(nums.begin(),nums.end());
       int count=0;
       for(int i=0;i<nums.size()-1;i++){
           if(nums[i]!=nums[i+1] && nums[i]!=0){
               count++;
           }
           if(nums[i]==nums[i+1] && i+1==nums.size()-1 && nums[i]!=0){
            count++;
           }

            if(nums[i]!=nums[i+1] && i+1==nums.size()-1 && nums[i]!=0){
            count++;
           }
       }
       return count;
    }
};
