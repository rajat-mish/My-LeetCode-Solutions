int trailingZeroes(int n){
   int a=0;
   while(n){
       a=a+n/5;
       n=n/5;
   }
   return a;
}
