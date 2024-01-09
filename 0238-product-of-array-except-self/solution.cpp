class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n);
        int p=nums[0];
        v[0]=1;
        for(int i=1;i<n;i++){
            v[i]=p;
            p*=nums[i];
        }
        p=nums[n-1];
        for(int i=n-2;i>=0;i--){
            v[i]*=p;
            p*=nums[i];
        }
        return v;
    }
};
