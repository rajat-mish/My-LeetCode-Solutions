int countKDifference(int* nums, int numsSize, int k){ int count1=0,count2=0;
for(int i=0;i<numsSize;i++){
    for(int j=i+1;j<numsSize;j++){
        if((nums[i]-nums[j])==k){
            count1++;
        }
        if((nums[i]-nums[j])== -k){
            count2++;
        }
    }
}return count1 + count2;
}
