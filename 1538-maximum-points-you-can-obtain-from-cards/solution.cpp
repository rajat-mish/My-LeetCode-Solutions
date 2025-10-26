class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int n=card.size();
        vector<int>pre(n,0);
        pre[0]=card[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+card[i];
        }
        int tot=accumulate(card.begin(),card.end(),0);
        if(k>=n)return tot;
        int i=0,j=n-k-1;
        int ans=INT_MIN;
        while(j<n){
           if(i>0)  ans=max(ans,tot-(pre[j]-pre[i-1]));
           else ans=max(ans,tot-pre[j]);
           
           i++;
           j++;
        }
        return ans;
    }
};
