class Solution {
public:
// without using extra space
// 0,0,1,1,1 isme for k=3 kitni subarrays hongi?
// answer is number of zeros just phle+1
// 3
// same concept here

    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans=0,initialgap=0,qsize=0,start=0;
        int j=0;
        int n=nums.size();
        while(j<n){
            if(nums[j]%2==1)qsize++;
            if(qsize==k){
             initialgap=0;
             while(qsize==k){
                qsize-=nums[start]%2;
                initialgap++;
                start++;
             }

            }
            ans+=initialgap;
            j++;
        }
        return ans;
    }
};
