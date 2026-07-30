class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int ans=0;
        int cnt=1;

        while(n>0){
            if(n>=8){
                ans+=8*cnt;
                n-=8;
            }
            else{
                ans+=n*cnt;
                n=0;
            }
            cnt++;
        }
        return ans;
    }
};
