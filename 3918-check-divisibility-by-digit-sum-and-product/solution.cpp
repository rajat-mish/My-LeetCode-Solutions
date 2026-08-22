class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum=0;
        long long pro=1;

        int num=n;
        while(num>0){
            int r=num%10;
            sum+=r;
            pro*=r;
            num/=10;
        }

        int d=sum+pro;
        if(n%d==0)return true;
        return false;
    }
};
