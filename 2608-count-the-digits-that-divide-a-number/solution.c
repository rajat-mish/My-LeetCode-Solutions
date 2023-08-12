int countDigits(int num){
int r,count=0;
int x=num;
while(num>0){
    r=num%10;
    if(x%r==0){
        count++;
    }num=num/10;
}return count;
}
