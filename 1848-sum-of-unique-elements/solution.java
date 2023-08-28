class Solution {
    public int sumOfUnique(int[] nums) {
        int sum=0;
        //  int count=0;
        for(int i=0;i<nums.length;i++){
            int count=0;
            for(int j=0;j<nums.length;j++){
                if(i!=j && nums[i]==nums[j]){
                    count++;
                    break;
                }
            }
            if(count==0){
                sum=sum+nums[i];
            }
        }return sum;
    }
}
