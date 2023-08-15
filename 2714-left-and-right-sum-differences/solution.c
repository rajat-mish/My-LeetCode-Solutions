/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize){
*returnSize=numsSize;
int sum1,sum2;
int* lsum=malloc(numsSize*sizeof(int));
int* rsum=malloc(numsSize*sizeof(int));
int* ans=malloc(numsSize*sizeof(int));
lsum[0]=0;
for(int i=1;i<numsSize;i++){
    sum1=0;
    for(int j=0;j<i;j++){
        sum1=sum1+nums[j];
    }lsum[i]=sum1;
}for(int i=0;i<numsSize;i++){
    sum2=0;
    for(int j=i+1;j<numsSize;j++){
        sum2=sum2+nums[j];
    }rsum[i]=sum2;
}
for(int i=0;i<numsSize;i++){
    if(lsum[i]>rsum[i]){
       ans[i]=lsum[i]-rsum[i]; 
    }else{
        ans[i]=rsum[i]-lsum[i];
    }
}return ans;
}
