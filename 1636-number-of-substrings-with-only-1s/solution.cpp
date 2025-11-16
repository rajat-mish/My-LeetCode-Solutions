class Solution {
public:
const int mod=1e9+7;
    int numSub(string s) {
     long long cnt=0;
     long long  ans=0;
     for(int i=0;i<s.size();i++){
        if(s[i]=='1')cnt++;
        else{
          ans=(long long)(ans%mod+((cnt%mod)*((cnt+1)%mod)/2)%mod)%mod;
            cnt=0;
        }
     }
 ans=(ans%mod+((cnt%mod)*((cnt+1)%mod)/2)%mod)%mod;
     return (int)ans;
    }
};
