class Solution {
    public int search(int[] nums, int target) {
        int t=-1;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==target){
                t=i;
            }
          
        }
         return t; 
    }
}
