class Solution {
public:
const int MOD=1e9+7;
long long modexp(long long base,long long exp,long long MOD){
    long long res=1;
    while(exp>0){
        if(exp%2==1){
            res=(res*base)%MOD;
        }
        base=(base*base)%MOD;
        exp/=2;
    }
    return res;
}
    int countGoodNumbers(long long n) {
        long long ans=1;
      long long even=(n+1)/2;
      long long odd=n/2;

      long long a=modexp(5,even,MOD);
      long long b=modexp(4,odd,MOD);
      return (a*b)%MOD;
    }
};
