class Solution {
public:
bool fun(vector<int>&v,int k){
    int n=v.size();
 for(int i=0;i+2*k-1<n;i++){
    if(v[i+k-1]>=k && v[i+2*k-1]>=k){
        return true;
    }
 }
 return false;
}
    
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,1);
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1])v[i]=v[i-1]+1;
        }
        int ans=INT_MIN;
    

        int low=1,high=n/2;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(fun(v,mid)){
                ans=max(ans,mid);
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
     
        return ans;
    }
};
