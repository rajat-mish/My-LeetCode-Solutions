class Solution {
public:
    int pivotInteger(int n) {
        if(n==1)return 1;
        int sum=(n*(n+1))/2;
        int s=sqrt(sum);

        if(s*s==sum)return s;
        return -1;

    }
};
