class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
    vector<long long> days(n + 1, 0);
        long long total = 0;
        const int DIV = (int)1e9 + 7;

        days[1] = 1;
        
        for (int i = delay + 1; i <= n; ++i) {

            if (i - forget > 0)
                total = (total - days[i - forget] + DIV) % DIV;

            total = (total + days[i - delay]) % DIV;
            days[i] = total;
        }

        for (int i = n - delay + 1; i <= n; ++i) 
                total = (total + days[i]) % DIV;
    
        return (int)(total);
    }
};
