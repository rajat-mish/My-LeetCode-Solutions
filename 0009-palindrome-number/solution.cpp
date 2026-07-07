class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
       if(x<0)return false;
        long long ans=0;
        while(n>0){
            int r=n%10;
            ans=r+ans*10;
            n=n/10;
        }
        if(ans==x)return true; 
        return false;
    }
};
