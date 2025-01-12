class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n=s.size();
        if(n%2!=0)return false;
        int open=0;
        int close=0;
        for(int i=0;i<n;i++){
            if(locked[i]=='1'){
                if(s[i]=='(')open++;
                else open--;
            }
            else open++;
            if(open<0)return false;
        }
        for(int i=n-1;i>=0;i--){
            if(locked[i]=='1'){
                if(s[i]==')')close++;
                else close--;
            }
            else close++;
            if(close<0)return false;
        }
        return true;
        
    }
};
