class Solution {
public:
    long long maximumHappinessSum(vector<int>& hap, int k) {
               long long ans=0;
               sort(hap.begin(),hap.end());
               int j=0;
               for(int i=hap.size()-1;i>=0 && k>0;i--,k--){
          long long cur=hap[i]-j;
          if(cur<=0)break;
              ans+=cur;
                j++;
               }

               return ans;

    }
};
