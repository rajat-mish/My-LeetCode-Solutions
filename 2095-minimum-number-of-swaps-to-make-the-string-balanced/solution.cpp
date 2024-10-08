class Solution {
public:
    int minSwaps(string s) {
        int open=0,unb=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='[')open++;
            else if(open>0)open--;
            else unb++;
        }
        return (unb+1)/2;
    }
};
