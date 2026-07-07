class Solution {
public:
int i=0,j=0;
int getmin(vector<int>&nums1,vector<int>&nums2){
    if(i<nums1.size() && j<nums2.size()){
        return nums1[i]<nums2[j]?nums1[i++]:nums2[j++];
    }
    else if(i<nums1.size())return nums1[i++];
    else if(j<nums2.size()) return nums2[j++];

    return -1;
}
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();

        if((n+m)%2==0){
            for(int i=0;i<(n+m)/2-1;i++){
                int gb=getmin(nums1,nums2);
            }
            return (double)(getmin(nums1,nums2)+getmin(nums1,nums2))/2.0;
        }
        else{
            for(int i=0;i<(n+m)/2;i++){
                int gb=getmin(nums1,nums2);
            }
            return (double)getmin(nums1,nums2);
        }
        return -1;
    }
};
