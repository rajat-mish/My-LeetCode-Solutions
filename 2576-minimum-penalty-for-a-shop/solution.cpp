class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        int pre[n+1];
        int suf[n+1];
        pre[0]=0;
        for(int i=0;i<n;i++){int count=0;
            if(customers[i]=='N')count++;
            pre[i+1]=pre[i]+count;
        }
        suf[n]=0;
        for(int i=n-1;i>=0;i--){int c=0;
            if(customers[i]=='Y')c++;
            suf[i]=suf[i+1]+c;
        }
        for(int i=0;i<=n;i++){
            pre[i]+=suf[i];
        }
        int min=pre[0];
        
         for(int i=0;i<=n;i++){
            if(pre[i]<min){
                min=pre[i];
                
            }
        }
         for(int i=0;i<=n;i++){
            if(pre[i]==min)return i;
        }
        return n;
    }
};
