class Solution {
    public int majorityElement(int[] nums) {
        int s=0;
        if(nums.length==1){
            return nums[0];
        }
        for(int i=0;i<nums.length;i++){
            int count=0;
            for(int j=1+i;j<nums.length;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count==Math.floor(nums.length/2)){
                 s=i;
            }
        }
        return nums[s];
    }
}
