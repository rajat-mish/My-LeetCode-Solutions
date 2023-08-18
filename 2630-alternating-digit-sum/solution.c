int alternateDigitSum(int n){
int count=0,sum=0,x;
x=n;
while(x!=0){
    x=x/10;
    count++;
}
if(count%2 ==0){
    int i=1;
    while(n>0){
        int r=n%10;
         int s= (int) pow(-1,i);
         sum=sum + s*r;
        n=n/10;
        i++;
    }
    return sum;
}
else{
     int i=0;
    while(n>0){
        int r=n%10;
        int s= (int) pow(-1,i);
        sum=sum + s*r;
        n=n/10;
        i++;
    }
    return sum;
}



}
