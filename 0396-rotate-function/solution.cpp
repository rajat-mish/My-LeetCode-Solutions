class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        int a=0;
        for(int i=0;i<n;i++){
         a+=i*nums[i];
        }
        int res=a;
        for(int i=n-1;i>0;i--){
            a+=sum-n*nums[i];
            res=max(res,a);
        }
        return res;

    }
};
