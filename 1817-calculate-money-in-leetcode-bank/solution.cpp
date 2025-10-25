class Solution {
public:
    int totalMoney(int n) {
        if(n<=7)return n*(n+1)/2;

        int tot=0;
        for(int i=0;i<n/7;i++){
            tot+=(28+i*7);
        }
        int d=n/7;
        int m=n%7;
        int newn=d+m;
        tot+=(newn*(newn+1)/2);
        tot-=(d*(d+1)/2);
        return tot;
    }
};
