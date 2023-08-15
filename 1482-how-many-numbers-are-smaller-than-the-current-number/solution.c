/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    *returnSize=numsSize;
int count,x;
int* ans=malloc(numsSize*sizeof(int));
for(int i=0;i<numsSize;i++){
    count=0;
    for(int j=0;j<numsSize;j++){
        x=nums[i];
        if(nums[j]<x){
            count++;
        }
    }ans[i]=count;
}return ans;
}
