class Solution {
public:
    int trap(vector<int>& arr) {
                int left=0;
        int right=arr.size()-1;
        int lmax=arr[left];
        int rmax=arr[right];
        
        int ans=0;
        while(left<right){
            if(arr[right]>arr[left]){
                lmax=max(lmax,arr[left]);
                ans+=lmax-arr[left];
                left++;
            }
            else{
                rmax=max(rmax,arr[right]);
                ans+=rmax-arr[right];
                right--;
            }
        }
        return ans;
    }
};
