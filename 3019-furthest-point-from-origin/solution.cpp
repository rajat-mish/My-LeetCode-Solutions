class Solution {
public:
    int furthestDistanceFromOrigin(string mov) {
        int lc=0,rc=0,uc=0;
        for(int i=0;i<mov.size();i++){
            if(mov[i]=='L')lc++;
            else if(mov[i]=='R')rc++;
            else uc++;
        }
        if(lc>rc){
            return lc+uc-rc;
        }
        return rc+uc-lc;
    }
};
