class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
       
       while(nums.size()>1){
            sort(nums.begin(),nums.end());
        int a=nums[nums.size()-1];
        int b=nums[nums.size()-2];
            if(a==b){
            nums.pop_back();
            nums.pop_back();
        }
        else {
            //nums.pop_back();
            nums[nums.size()-2]=nums[nums.size()-1]-nums[nums.size()-2];
            nums.pop_back();
        }
       }
       if(nums.size()==0)return 0;
       return nums[0];
    }
};
