class Solution {
public:
    int numberOfMatches(int n) { int count=0;
        while(n!=1){
            if(n%2==0){
            n=n/2;
            count=count+n;
        }
        if(n%2!=0){
            n=(n-1)/2 ;
            count=n+count;
            n=n+1;

        }
        }
        return count;
    }
};
