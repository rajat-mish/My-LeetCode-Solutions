class Solution {
    public boolean isPowerOfFour(int n) {
        double x=n;
         double c= Math.log10(n)/Math.log10(4);
   int a=(int)c;
   int m=1;
   for(int i=1;i<=a;i++){
    m=m*4;
   }
   if(m==n){
    return true;
   }else{
    return false;
   }
    }
}
