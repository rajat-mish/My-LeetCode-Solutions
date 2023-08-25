class Solution {
    public int maximumGap(int[] nums) {
        if(nums.length==1){
            return 0;
        }
       Arrays.sort(nums);
       int arr[]=new int[nums.length-1];
       
       for(int i=0;i<nums.length-1;i++){
    arr[i]=nums[i+1]-nums[i];
       } 

       int max=arr[0];
       for(int i=0;i<arr.length;i++){
           if(arr[i]>max){
               max=arr[i];
           }
       }return max;
    }
}
