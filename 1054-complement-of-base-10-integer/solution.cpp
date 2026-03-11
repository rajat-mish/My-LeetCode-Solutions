class Solution {
public:
    int bitwiseComplement(int n) {
        int cnt=0;
        int ans=0;
        if(n==0)return 1;
        while(n>0){
            int a=n%2;
            if(!a){
                ans+=pow(2,cnt);
                cnt++;
            }
            else cnt++;
            n=n/2;
        }
        return ans;
    }
};
