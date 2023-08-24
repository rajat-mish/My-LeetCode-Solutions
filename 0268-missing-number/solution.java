class Solution {
    public int missingNumber(int[] nums) {
        
        Arrays.sort(nums);
        int t=0,i;
        for( i=0;i<nums.length;i++){
            if(nums[i]==i){
                

                t=i;
                

            }else{
                break;
            }
        }
        return i;
    }
}
