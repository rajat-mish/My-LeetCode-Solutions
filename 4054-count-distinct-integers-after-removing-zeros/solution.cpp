class Solution {
public:
    long long countDistinct(long long n) {
        int d=0;
        long long a=n;
        while(a){
            d++;
            a/=10;
        }
        int d1=d-1;
        long long ans=0;
        long long p=1;
        while(d1){
            p=p*9;
            ans+=p;
            d1--;
        }
        long long div=1;
        for(int i=0;i<d-1;i++){
            div*=10;
        }
        while(div){
            int g=(n/div)%10;
            if(g==0)break;
            if(g>1)ans+=(g-1)*1LL*p;
            p/=9;
            div/=10;
            if(div==0 && g!=0)ans++;
        }
        return ans;

    }
};
