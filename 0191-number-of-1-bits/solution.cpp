class Solution {
public:
    int hammingWeight(int n) {
        long long count=0;
        while(n){
            long long bit =n&1;
            if(bit==1)count++;
            n=n>>1;
        }
        return count;
    }
};
