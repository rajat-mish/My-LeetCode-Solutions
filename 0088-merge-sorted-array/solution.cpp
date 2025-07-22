class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0)return;
        int i=0,j=0;
        while(i<nums1.size() && j<n){
            if(nums1[i]>=nums2[j]){
                nums1.insert(nums1.begin()+i,nums2[j]);
                nums1.pop_back();
                i++;
                j++;
                
            }
            else{
                i++;
            }

        }
        int k=n-1;

       if(j!=n){
        int p=nums1.size()-1;
        while(k>=j){
            nums1[p--]=nums2[k--];
        }
       }
    }
};
