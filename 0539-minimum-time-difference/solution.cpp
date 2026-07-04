class Solution {
public:
    int findMinDifference(vector<string>& tp) {
        sort(tp.begin(),tp.end());
        int ans=INT_MAX;
        for(int i=1;i<tp.size();i++){
           int cur=stoi(tp[i].substr(0,2))*60+stoi(tp[i].substr(3,2));
           int pre=stoi(tp[i-1].substr(0,2))*60+stoi(tp[i-1].substr(3,2));

           ans=min(ans,cur-pre);

        }
        int n=tp.size();
        int f=stoi(tp[0].substr(0,2))*60+stoi(tp[0].substr(3,2));
        int l=stoi(tp[n-1].substr(0,2))*60+stoi(tp[n-1].substr(3,2));
        ans=min(ans,1440-l+f);
        return ans;
    }
};
