class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=INT_MIN;
        int pre=0;
        for(int i=0;i<gain.size();i++){
            ans=max(ans,gain[i]+pre);
            pre+=gain[i];
        }
        if(ans<0)return 0;
        return ans;
    }
};
