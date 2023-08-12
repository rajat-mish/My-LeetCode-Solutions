int subtractProductAndSum(int n){
int ans=0,mul=1,r;
while(n>0){
    r=n%10;
    mul=mul*r;
    ans=ans+r;
    n=n/10;
}return(mul-ans);
}
