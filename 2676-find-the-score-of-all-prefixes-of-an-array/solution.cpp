class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
         vector<long long int> v(nums.size(),0);
           v[0]=2*nums[0];
           int maxi=nums[0];
            //maxi=max(maxi,(long long)nums[0]);
            for(int i=1;i<nums.size();i++){
               maxi= max(maxi,nums[i]);
                v[i]=v[i-1]+maxi+nums[i];
            }
            return v;
    }
};
