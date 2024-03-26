class Solution {
public:typedef     pair<int,vector<int>>p;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    
        priority_queue< p >pq;
        for(int i=0;i<points.size();i++){
            int dis=(points[i][0]*points[i][0])+(points[i][1]*points[i][1]);
            pq.push({dis,points[i]});
            if(pq.size()>k)pq.pop();
        }
        vector<vector<int>>ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
