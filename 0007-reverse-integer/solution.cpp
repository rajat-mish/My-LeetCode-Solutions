class Solution {
public:
    int reverse(int x) {
        if(x==INT_MIN)return 0;
        int num=abs(x);
        //int  ans=0;
        long rem,ans=0;
        while(num>0){
             rem=num%10;
            ans=rem+ans*10;
            num=num/10;
            if(ans>INT_MAX)return 0;
        }
        
       
        if(x<0)return -ans;
        return ans;
    }
};
