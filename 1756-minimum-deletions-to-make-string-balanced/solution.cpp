class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        if(n==1)return 0;
        vector<int>preB(n,0),postA(n,0);
        if(s[0]=='b')preB[0]=1;
        for(int i=1;i<n;i++){
            if(s[i]=='b')preB[i]+=preB[i-1]+1;
            else preB[i]=preB[i-1];
        }
        if(preB[n-1]==0)return 0;
      if(s[n-1]=='a')postA[n-1]=1;
        for(int i=n-2;i>=0;i--){
          if(s[i]=='a')postA[i]+=postA[i+1]+1;
          else postA[i]=postA[i+1];
        }

        for(int i=0;i<n;i++){
            if(preB[i]>0){
                preB[i]-=1;
            }
            // if(postA[i]>0)postA[i]-=1;
        }


        int ans=INT_MAX;
        
        
        for(int i=0;i<n;i++){
            ans=min(ans,preB[i]+postA[i]);
        }
        return ans;

    }
};
