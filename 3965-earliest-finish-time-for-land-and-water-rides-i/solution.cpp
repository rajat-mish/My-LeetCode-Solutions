class Solution {
public:
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd) {
        int ans=INT_MAX;
        for(int i=0;i<ls.size();i++){
            for(int j=0;j<ws.size();j++){
                int landend=max(ls[i],0)+ld[i];
                int waterstart=max(landend,ws[j]);
                int f1=waterstart+wd[j];
                ans=min(ans,f1);

                int waterend=max(ws[j],0)+wd[j];
                int landstart=max(waterend,ls[i]);
                int f2=landstart+ld[i];
                ans=min(ans,f2);
            }
        }
        return ans;
    }
};
