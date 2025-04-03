class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n,0);
        vector<int>suff(n,0);
        pre[0]=nums[0];
        suff[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            pre[i]=max(nums[i],pre[i-1]);
        }

        for(int i=n-2;i>=0;i--){
            suff[i]=max(suff[i+1],nums[i]);
        }

        long long maxi=LLONG_MIN;
        for(int i=1;i<n-1;i++){
            maxi=max(maxi,((long long)(pre[i-1]-nums[i])*suff[i+1]));
        }
        if(maxi>0)return maxi;
        return 0;
    }
};
