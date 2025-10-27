class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2) {
        long long ans=0;
        int n=nums1.size();
        int last=nums2.back();
        int lc=INT_MAX; // extracost for appending last element
        for(int i=0;i<n;i++){
            int low=min(nums1[i],nums2[i]);
            int high=max(nums1[i],nums2[i]);

            if(low<=last && high>=last){
                lc=0; // aise me keval last element ko append krne ki 1 cost lgegi usko 
                      // update krne ki alag se nhi lgegi cost
            }
            else{
                lc=min({lc,abs(high-last),abs(low-last)});
            }
            ans+=abs(nums1[i]-nums2[i]);
        }
        return ans+1+lc;
    }
};
