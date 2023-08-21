int tribonacci(int n){
    int a[n+1],i;
if(n==0){
    return 0;
} 
else if(n==1 || n==2){
    return 1;
}
else{
    a[0]=0;
    a[1]=1;
    a[2]=1;
     
     for( i=3;i<=n;i++){
         a[i]=a[i-1]+a[i-2]+a[i-3];
     }
}return a[n];
}
