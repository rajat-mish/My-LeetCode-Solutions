class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n=nums.size();
        long long total=(long long)n*(n-1)/2;
        long long count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]-i]++;
        }
        for(auto ele:mp){
            if(ele.second>=2){
                count+=(long long)ele.second*(ele.second-1)/2;
            }
        }
        return total-count;
    }
};
