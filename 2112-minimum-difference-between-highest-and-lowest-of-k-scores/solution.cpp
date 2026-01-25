class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
   
        int i=0,j=k-1;
        int ans=INT_MAX;
        while(j<nums.size()){
                 int maxi=INT_MIN, mini=INT_MAX;
            for(int t=i;t<=j;t++){
              maxi=max(maxi,nums[t]);
              mini=min(mini,nums[t]);}
              ans=min(ans,maxi-mini);
              i++;
              j++;
        }
        return ans;
      
    }
};
