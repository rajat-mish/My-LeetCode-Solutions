int findNumbers(int* nums, int numsSize){
int c2=0,r;
        for(int i=0;i<numsSize;i++){
            int c1=0;
            while(nums[i]>0){
             r=nums[i]%10;
             c1++;
             nums[i]=nums[i]/10;
            }
            if(c1 %2==0){
                c2++;
            }
        }return c2;
}
