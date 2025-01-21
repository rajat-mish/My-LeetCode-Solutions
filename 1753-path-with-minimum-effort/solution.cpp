class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>>dist(n,vector<int>(m,1e9));
        dist[0][0]=0;
        pq.push({0,{0,0}});
           int delr[]={-1,0,1,0};
           int delc[]={0,1,0,-1};
        while(!pq.empty()){
            auto it=pq.top();
            int diff=it.first;
            int row=it.second.first;
            int col=it.second.second;
            pq.pop();
          if(row==n-1 && col==m-1)return diff;
            for(int i=0;i<4;i++){
                int nr=row+delr[i];
                int nc=col+delc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m){
                    int neweff=max(abs(heights[row][col]-heights[nr][nc]),diff);
                    if(neweff<dist[nr][nc]){
                        dist[nr][nc]=neweff;
                        pq.push({neweff,{nr,nc}});
                    }
                }
            }

        }
        return 0;
    }
};
