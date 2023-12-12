class Solution {
public:
    double myPow(double x, int n) {double res=1.00000;
      if(n==0){
          return 1;
      }
      long long a=n;
      if(n<0){
          x=1/x;
          a=-a;
      }
      if(a%2!=0){
          return x*myPow(x*x,a/2);
      }else{
          return myPow(x*x,a/2);
      }
    }
};
