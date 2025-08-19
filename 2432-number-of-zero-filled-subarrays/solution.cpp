class Solution {
public:
long long solve(long long n){
    return n*(n+1)/2;
}
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        int temp=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==0)temp++;
           else{
            ans+=solve(temp);
            temp=0;
           }
        }
        if(temp!=0){
            ans+=solve(temp);
        }
        return ans;
    }
};
