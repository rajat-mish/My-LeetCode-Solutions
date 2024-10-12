class Solution {
public:

    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
       priority_queue<int,vector<int>,greater<int>>pq;
       for(const auto &ele:intervals){
        if(!pq.empty()&& ele[0]>pq.top()){
            pq.pop();
        }
        
            pq.push(ele[1]);
        
       }
       return pq.size();

    }
};


