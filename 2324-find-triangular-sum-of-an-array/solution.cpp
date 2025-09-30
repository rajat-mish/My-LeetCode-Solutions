class Solution {
public:
int ans=0;
void fun(vector<int>&nums){
   vector<int>temp;
    if(nums.size()==1){
        ans=nums[0];
        return;
    }
    for(int i=0;i<nums.size()-1;i++){
        temp.push_back((nums[i]+nums[i+1])%10);
    }
    fun(temp);

}
    int triangularSum(vector<int>& nums) {
        fun(nums);
        return ans;
    }
};
