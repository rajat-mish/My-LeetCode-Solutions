int climbStairs(int n){
int a[n+1];
if(n==0){
    return 0;
}else if(n==1){
    return 1;
}
else if(n==2){
    return 2;
}
else{
a[0]=0;
a[1]=1;
a[2]=2;
for(int i=3;i<=n;i++){
    a[i]=a[i-1]+a[i-2];
}}
return a[n];
}
