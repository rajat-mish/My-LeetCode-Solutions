class Solution {
public:
double fun(double x,int n){
    if(n==0)return 1;
    if(n==1)return x;
    if(n%2!=0)return x*fun(x*x,n/2);
    return fun(x*x,n/2);
}

    double myPow(double x, int n) {
         long long a=n;
         if(n<0){
        
         a = -1LL * n; 
            return 1/fun(x,a);
         }
         return fun(x,n);
    }
};
