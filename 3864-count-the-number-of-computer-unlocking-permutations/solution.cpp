class Solution {
public:
     const int MOD = 1e9 + 7;
long long fact(long long n) {
   
    long long result = 1;
    for (long long i = 2; i <= n; ++i) {
        result = (result * i) % MOD;
    }
    return result;
}

    int countPermutations(vector<int>& complexity) {
        int n=complexity.size();
        for(int i=1;i<n;i++){
            if(complexity[i] <=complexity[0])return 0;
        }

        return fact(n-1)%MOD;
        
    }
};
