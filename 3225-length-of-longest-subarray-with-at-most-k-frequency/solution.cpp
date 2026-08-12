class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i=0,j=0;
        int maxi=0;
        int ans=0;
        int ele=-1;
        int n=nums.size();
        while(j<n){
            mp[nums[j]]++;
            maxi=max(maxi,mp[nums[j]]);
            if(mp[nums[j]]==maxi){
                ele=nums[j];
            }
            if(maxi<=k){
                ans=max(ans,j-i+1);

            }
            else{
                while(mp[ele]>k){
                    mp[nums[i]]--;
                    if(mp[nums[i]]==0)mp.erase(nums[i]);
                    i++;

                }
                 ans=max(ans,j-i+1);
            }
            j++;
        }
        return ans;
    }
};
