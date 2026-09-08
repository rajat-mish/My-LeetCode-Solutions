class Solution {
public:
    long long countCommas(long long n) {
        
        long long cnt=0;
        long long till5=1e5-1000+1;
        if(n<1000)return 0;
        if(n<1e6)return n-1000+1;
        long long ans=0;
        long long num=n;
        while(num>0){
            cnt++;
            num=num/10;
        }

        int r=cnt/3;
        if(cnt%3==0){
            r--;
            if(cnt==6){
                ans=n-1e5;
                ans+=till5;
            }
            else if(cnt==9){
             ans=(n-1e6+1)*2;
             ans+=1e6-1000;
            }

            else if(cnt==12){
                ans=(n-1e9+1)*3;
                ans+=(1e9-1e6)*2;
                ans+=1e6-1000;
            }

            else if(cnt==15){
                  ans=(n-1e12+1)*4;
                  ans+=(1e12-1e9)*3;
                ans+=(1e9-1e6)*2;
                ans+=1e6-1000;
            }

        }

        else{
            if(cnt<9){
                 ans=(n-1e6+1)*2;
             ans+=1e6-1000;
            }
            else if(cnt<12){
                   ans=(n-1e9+1)*3;
                ans+=(1e9-1e6)*2;
                ans+=1e6-1000;
            }
            else if(cnt<15){
                   ans=(n-1e12+1)*4;
                  ans+=(1e12-1e9)*3;
                ans+=(1e9-1e6)*2;
                ans+=1e6-1000;
            }
            
            else if(cnt==16){
                //cout<<"yes"<<endl;
                ans=5+3.6*1e15;
                  ans+=(1e14-1e12)*4;
                  ans+=(1e12-1e9)*3;
                ans+=(1e9-1e6)*2;
                ans+=1e6-1000;
            }
        }
        return ans;
    }
};
