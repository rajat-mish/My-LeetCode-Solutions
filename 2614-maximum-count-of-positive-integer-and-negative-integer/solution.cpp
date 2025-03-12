class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int negc=0,posc=0;
        int n=nums.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<0){
                negc=mid+1;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

           low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>0){
                posc=n-mid;
               high=mid-1;
            }
            else{
               low=mid+1;
            }
        }
        return max(negc,posc);
    }
};
