int countEven(int num){
int r,count=0,x;

for(int i=1;i<=num;i++){
    x=i;
    int sum=0;
    while(x!=0){
        r=x%10;
        sum=sum+r;
        x=x/10;
    }
    if(sum%2==0){
        count++;
    }
}return count;
}
