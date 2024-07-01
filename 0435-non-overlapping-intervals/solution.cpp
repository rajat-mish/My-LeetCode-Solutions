bool cmp(vector<int>&a,vector<int>&b){
    return a[0]<b[0];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count=0;
        sort(intervals.begin(),intervals.end(),cmp);
        int lastendtime=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(lastendtime>intervals[i][0]){
                //overlapping
                count++;
                lastendtime=min(lastendtime,intervals[i][1]);
            }
            else{
                lastendtime=intervals[i][1];
            }
        }
        return count;
    }
};
