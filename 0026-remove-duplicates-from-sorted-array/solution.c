int removeDuplicates(int* nums, int numsSize){
int k=1;
int *a=nums;
int *b=nums;
int *c=nums+numsSize-1;
while(b<c){
    while((*b == *a) && b<c){
        b++;
    }if(*b != *a){
        a++;
        *a= *b;
        k++;
    }
}return k;
}
