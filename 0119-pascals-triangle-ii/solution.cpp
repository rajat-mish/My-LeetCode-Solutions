class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>a;
        long long n=rowIndex;
        
        for(long long i=0;i<=n;i++){ long long curr=1;
            for(long long j=0;j<=i;j++) {
                a.push_back(curr);
              curr=curr*(i-j)/(j+1);
            }
        }vector<int>f(n+1);
        long long t=a.size();
        for(long long i=0;i<=n;i++){
            f[i]=a[t-n-1+i];
        }
        return f;
        
    }
};
