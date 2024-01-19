int findMiddleIndex(int* nums, int numsSize) {
     int left[numsSize];
    int right[numsSize];
left[0]=nums[0];
right[numsSize-1]=nums[numsSize-1];

    for(int i=1;i<numsSize;i++){
        left[i]=nums[i]+left[i-1];
    }
    for(int i=numsSize-2;i>=0;i--){
        right[i]=right[i+1]+nums[i];
    }

    for(int i=0;i<numsSize;i++){
        if(right[i]==left[i]){
            return i;
        }
    }
    return -1;
}
