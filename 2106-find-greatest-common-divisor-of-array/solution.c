int findGCD(int* nums, int numsSize){
int min=nums[0],max=nums[0],x;
for(int i=0;i<numsSize;i++){
    if(nums[i]>max){
        max=nums[i];
    }if(nums[i]<min){
        min=nums[i];
    }
}for(int j=1;j<max;j++){
    if(min==max){
        return max;
    }
    if(min%j==0 && max%j==0){
        x=j;
    }
}return x;
}

