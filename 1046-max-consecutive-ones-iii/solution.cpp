class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int cnt=0;
        int ans=INT_MIN;
        while(j<n){
           
             if(nums[j]==0)cnt++;
            
              if(cnt>k){
                ans=max(ans,j-i);
                while(cnt>k){
                    if(nums[i]==0)cnt--;
                    i++;
                }
            }
             j++;
        }
        ans=max(ans,j-i);
        return ans;
    }
};
