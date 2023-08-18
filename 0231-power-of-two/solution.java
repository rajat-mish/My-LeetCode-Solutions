class Solution {
    public boolean isPowerOfTwo(int n) {
        double x=n;
         double c= Math.log10(n)/Math.log10(2);
   int a=(int)c;
   int m=1;
   for(int i=1;i<=a;i++){
    m=m*2;
   }
   if(m==n){
    return true;
   }else{
    return false;
   }
    } 
}
