int searchInsert(int* nums, int numsSize, int target){ int t=0;
if(nums[numsSize-1]<target){
    return numsSize;
}
for(int i=0;i<numsSize;i++){
if(nums[i]==target){
    return i;
}
else{
    if(nums[i]>target){
        t=i;
        break;
    }
} 
}

return t;

}
