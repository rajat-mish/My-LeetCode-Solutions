class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        int maxl=a+b+c;
        int ca=0,cb=0,cc=0;
        string s;
        for(int i=0;i<maxl;i++){
            if((ca!=2 && a>=b && a>=c)||(cb==2 && a>0)||(cc==2 && a>0)){
                s.push_back('a');
                ca++;
                a--;
                cb=0;cc=0;
            }
            else if((cb!=2 && b>=a && b>=c)||(ca==2 && b>0)||(cc==2 && b>0)){
                s.push_back('b');
                b--;
                cb++;
                ca=0;cc=0;
            }

            else if((cc!=2 && c>=b && c>=a)||(cb==2 && c>0)||(ca==2 && c>0)){
                s.push_back('c');
                c--;
                cc++;
                cb=0;ca=0;
            }
        }
        return s;
    }
};
