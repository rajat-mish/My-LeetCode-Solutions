class Solution {
public:

    int findMinFibonacciNumbers(int k) {
        if(k<4)return 1;
        long long a[45];
        a[0]=1;
        a[1]=1;

        for(int i=2;i<45;i++){
            a[i]=a[i-1]+a[i-2];

        }
        int count=0;
        int idx=0;
        int sum=0;
        while(idx<k && a[idx]<=k){
            idx++;
        }
            // if(idx>=k)idx--;
            if(a[idx]==k)return 1;
            for(int i=idx;i>=0;i--){
                if((sum + a[i])<=k){
                    sum+=a[i];
                    count++;
                }
                else if(sum==k)break;
            }
            return count;

    }
};
