
class Solution {
public:
    int smallestNumber(int n) {
        for(int i=n;i<=1028;i++){
            bool flag=false;
            int x=i;
            while(x>0){
                if((x&1)==0){
                    flag=true;
                    break;
                }
               x>>=1;
            }
            if(flag==false)return i;

        }
        return -1;
    }
};
