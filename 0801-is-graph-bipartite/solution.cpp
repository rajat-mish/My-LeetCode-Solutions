class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
      
           int n=graph.size();
        vector<pair<int,int>>vis(n,{0,0});
        
     for(int i=0;i<n;i++){
        if(vis[i].first)continue;
  queue<pair<int,int>>q;
           q.push({i,0});
           vis[i]={1,0};
        while(!q.empty()){
            int node=q.front().first;
            int color=q.front().second;

            q.pop();
            for(auto ele:graph[node]){
                if(!vis[ele].first){
                    vis[ele].first=1;
                    vis[ele].second=!color;
                    q.push({ele,!color});
                }
                else {
                    if(vis[ele].second==color)return false;
                }
            }
        }
     }
        return true;
    }
};
