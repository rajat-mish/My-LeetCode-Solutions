class Solution {
public:
    long long sumAndMultiply(int n) {
        
        long long nd=0;
        while(n>0){
            long long r=n%10;
             n=n/10;
            if(r==0)continue;
            nd=r+nd*10;
           
        }

        long long d=0;
        long long sum=0;
        while(nd>0){
            long long r=nd%10;
            sum+=r;
            d=r+d*10;
            nd=nd/10;
        }
return (long long)(sum*d);
    }
};
