int findNonMinOrMax(int* nums, int numsSize){
if(numsSize>2){
for(int i=1;i<numsSize;i++){
    int j=i-1,x=nums[i];
    while(j>=0 && nums[j]>x){
        nums[j+1]=nums[j];
        j--;
    }nums[j+1]=x;
}return(nums[1]);
}else{
    return(-1);
}
}
