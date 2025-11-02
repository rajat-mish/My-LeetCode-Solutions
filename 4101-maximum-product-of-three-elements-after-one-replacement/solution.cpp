class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long ans=0;
        const long long mul=100000LL;
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(nums[0]>=0){
         ans=(long long )nums[n-1]*nums[n-2]*mul;
         
        }
        else{
            if(nums[1]<0){
                ans=max(ans,(long long)nums[0]*nums[1]*mul);
            }

               ans=max(ans,(long long )nums[n-1]*nums[n-2]*mul);
               ans=max(ans,(long long )nums[n-1]*nums[0]*mul*(-1));

        }
        return ans;
      
    }
};
