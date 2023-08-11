/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
int x,y,i;

// returnSize[]={0,0};
int *retarr=malloc(2*sizeof(int));
retarr[0]=0;
retarr[1]=0;
for( i=0;i<numsSize;i++){
 x=nums[i];
    for(int j=i+1;j<numsSize;j++){
        
        if((x+nums[j])==target){
            *returnSize=2;
            retarr[0]=i;
            retarr[1]=j;
            return retarr;
            
        }
    }

}
*returnSize=0;
return 0;
}
