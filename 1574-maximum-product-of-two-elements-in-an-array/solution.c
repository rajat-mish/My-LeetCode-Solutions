int maxProduct(int* nums, int numsSize){
for(int i=1;i<numsSize;i++){
    int j=i-1,x=nums[i];
    while(j>=0 && nums[j]>x){
        nums[j+1]=nums[j];
        j--;
    }nums[j+1]=x;
}return((nums[numsSize-1]-1)*(nums[numsSize-2]-1));
}
