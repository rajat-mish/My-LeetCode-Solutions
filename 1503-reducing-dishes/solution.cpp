class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n=satisfaction.size();
        int suff[n];
        suff[n-1]=satisfaction[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]+satisfaction[i];
        }
        int idx=-1;
        for(int i=0;i<n;i++){
            if(suff[i]>=0){
                idx=i;
                break;
            }
        }
        if(idx==-1)return 0;
        int p=1;
        int maxsum=0;
        for(int i=idx;i<n;i++){
            maxsum+= satisfaction[i]*p;
           p++;
        }
        return maxsum;
    }
};
