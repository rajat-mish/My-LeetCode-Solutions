class Solution {
public:

    long long numOfSubsequences(string s) {
        int n=s.size();
        vector<long long>prefix(n+1,0);
        vector<long long>suffix(n+1,0);

        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                prefix[i+1]=1;
            }
            prefix[i+1]+=prefix[i];
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='T'){
                suffix[i]=1;
            }
            suffix[i]+=suffix[i+1];
        }

        long long resWithC=0;
        long long bestforc=0;
        long long reswithL=0;
        long long reswithT=0;
        for(int i=0;i<n;i++){
            if(s[i]=='C'){
                resWithC+=prefix[i]*suffix[i+1];
                reswithL+=(prefix[i]+1)*suffix[i+1];
                reswithT+=prefix[i]*(suffix[i+1]+1);
            }
            else{
                bestforc=max(bestforc,prefix[i]*suffix[i]);
            }
        }
        resWithC+=bestforc;
        return max({resWithC,reswithL,reswithT});
    }
};
