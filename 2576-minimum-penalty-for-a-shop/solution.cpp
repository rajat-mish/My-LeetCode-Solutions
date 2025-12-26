class Solution {
public:
    int bestClosingTime(string cus) {
        int n=cus.size();
        vector<int>pre(n+1),suf(n+1);
    pre[0]=0;
        for(int i=1;i<=cus.size();i++){
           
                pre[i]=pre[i-1]+(cus[i-1]=='N');
            
           
        }

        suf[n]=0;
        for(int i=n-1;i>=0;i--){
          
                suf[i]=suf[i+1]+(cus[i]=='Y');
           
        }
        int ans=INT_MAX;
        int idx=0;
        for(int i=0;i<=n;i++){
          if(ans>suf[i]+pre[i]){
            ans=suf[i]+pre[i];
            idx=i;
          }
        }
      return idx;

    }
};
