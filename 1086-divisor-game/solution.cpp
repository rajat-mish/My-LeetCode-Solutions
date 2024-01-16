class Solution {
public:
    bool divisorGame(int n) {
        int count=0;
        
        while(n!=1){ for(int x=1;x<n;x++){
            if(n%x==0){
                count++;
              n=n-1;
            }
            else{
             if(x%2!=0){
                n=n-x;
              count++;}
            }
            
            }
        }
        if(count%2!=0)return true;
        return false;
    }
};
