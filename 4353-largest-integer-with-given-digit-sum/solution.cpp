class Solution {
public:
    int largestInteger(int n, int s) {
        if(n*9<s)return -1;
   int start=9;
int ans=0;
   while(n>0 && s>0 ){
      while( s>=9){
        if(n<=0)return -1;
        s-=9;
        n--;
        ans=ans*10+9;
        // if(s==0)return ans;
      }

      while(n>0){
        ans=ans*10+s;
        s=0;
        n--;
      }
      
        if(n==0 && s==0)return ans;
       else return -1;
      

   }
   return ans;
    }
};
