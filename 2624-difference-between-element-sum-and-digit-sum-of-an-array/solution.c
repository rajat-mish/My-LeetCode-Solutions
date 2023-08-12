int differenceOfSum(int* nums, int numsSize){
int sum=0,ans=0,r;
for(int i=0;i<numsSize;i++){
    sum=sum+nums[i];
    if(nums[i]>9){
        while(nums[i]>0){
            r=nums[i]%10;
            ans=ans+r;
            nums[i]=nums[i]/10;
        }
    }else{
        ans=ans+nums[i];
    }

}if(sum>ans){
    return(sum-ans);
}

else{
return(ans-sum);}
}
