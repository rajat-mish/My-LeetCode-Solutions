class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        int arr[m+n];
        int i=0;
        int j=0;
        int k=0;
        for(int a=0;a<n;a++){
            nums1.pop_back();
        }
        while(i<m && k<n){
            if(nums1[i]>nums2[k]){
                
                arr[j++]=nums2[k++];
            }
            else{
                arr[j++]=nums1[i++];
            }

        }
        for(;i<m;i++){
            arr[j++]=nums1[i];
        }

           for(;k<n;k++){
            arr[j++]=nums2[k];
        }
 for(int a=0;a<n;a++){
            nums1.push_back(0);
        }
        for(int i=0;i<(m+n);i++){
            nums1[i]=arr[i];
        }
    }
};
