class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int n=intervals.size();
        int i=0;
        while(i<n && intervals[i][1]<newInterval[0]){
            ans.push_back(intervals[i]);
            i++;
        }
        int a=newInterval[0];
        int b=newInterval[1];
        while(i<n && intervals[i][0]<=newInterval[1]){
            a=min(a,intervals[i][0]);
            b=max(b,intervals[i][1]);
            i++;
        }
            ans.push_back({a,b});
        while(i<n ){
            ans.push_back(intervals[i]);
            i++;
        }

        return ans;
    }
};
