class Solution {
public:
    int smallestNumber(int n, int t) {
        
        for(int i=n;i<=500;i++){
            int num=i;
            int pro=1;

            while(num>0){
                int r=num%10;
                pro=pro*r;
                num=num/10;
            }
            if(pro%t==0)return i;
            
        }
        return -1;
    }
};
