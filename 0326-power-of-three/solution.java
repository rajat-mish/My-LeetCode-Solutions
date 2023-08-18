class Solution {
    public boolean isPowerOfThree(int n) {
        double x=n;
        
        double c= Math.log10(n)/Math.log10(3);
   int a=(int)c;
   int m=1;
   for(int i=1;i<=a;i++){
    m=m*3;
   }
   if(m==n){
    return true;
   }else{
return false;
   }
    }
}
