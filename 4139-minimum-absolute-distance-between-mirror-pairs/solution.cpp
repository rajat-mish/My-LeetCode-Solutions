class Solution {
public:
int rev(int n){
    int ans=0;
    while(n!=0){
        int r=n%10;
        ans=ans*10+r;
        n=n/10;

    }
    return ans;
}
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int n=rev(nums[i]);
            if(mp.find(nums[i])!=mp.end()){
                ans=min(ans,abs(mp[nums[i]]-i));
            }
            mp[n]=i;
        }
        if(ans==INT_MAX)return -1;
        return ans;

    }
};
