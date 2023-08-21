int countPrimes(int n){ int count=0;
if(n==0){
    return 0;
}
int a[n+1];
for(int i=0;i<n+1;i++){
    a[i]=1;
}
a[1]=a[0]=0;
for(int j=1;j<n;j++){
    if(a[j]==1){
        count++;
        for(int k=2*j;k<=n;k=k+j){
            a[k]=0;
        }
    }
}

return count;
}
