int sumBase(int n, int k){
int res=0,r,i=1,x,ans=0;
while(n!=0){
    r=n%k;
    res=r*i +res;
    n=n/k;
    i=i*10;
}
while(res>0){
    x=res%10;
    ans=ans +x;
    res =res/10;
}
return ans;
}
