class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {int i=0;
    if(nums.size()==1){
        return nums[0];
    }
        while(i<nums.size()){
            if(nums[i]==nums[i+1]){
                i+=2;
            }
            else{
                return nums[i];
            }
           // i++;
        }
        return 0;
    }
};
