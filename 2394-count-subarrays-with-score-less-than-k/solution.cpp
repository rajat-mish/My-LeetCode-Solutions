class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long sum=0;
        long long count=0;
        int n=nums.size();
        for(int i=0,j=0;j<n;j++){
          
            sum+=nums[j];
            while(sum*(j-i+1)>=k){
            
                sum-=nums[i];
               
                i++;
            }
            count+=j-i+1;
          
        }
        return count;
    }
};


