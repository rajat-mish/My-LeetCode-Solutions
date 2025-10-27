class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(nums[i]);
        }
        int n=nums.size();
        sort(nums.begin(),nums.end());
    long long odd=0,eve=0;
    
             for(int i=0;i<n/2;i++){
                eve+=pow(nums[i],2);
            }
            for(int i=n/2;i<n;i++){
                odd+=pow(nums[i],2);
            }
            return odd-eve;
      
    }
};
