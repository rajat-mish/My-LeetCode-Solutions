int averageValue(int* nums, int numsSize){
int sum=0,count=0;
for(int i=0;i<numsSize;i++){
    if(nums[i]%3==0){

       if(nums[i]%2==0){
            count++;
        sum=sum+nums[i];
       }
    }
}
if(count>0){
    return(sum/count);
}
else{
    return 0;
}

}
