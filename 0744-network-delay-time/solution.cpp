class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>adj[n+1];
        for(auto ele:times){
            adj[ele[0]].push_back({ele[1],ele[2]});
        }
    queue<pair<int,int>>q;
    q.push({k,0});
    vector<int>dist(n+1,1e9);
    dist[k]=0;
    while(!q.empty()){
        int node=q.front().first;
        int cost=q.front().second;
    q.pop();
    for(auto ele:adj[node]){
        if(dist[ele.first]>(cost+ele.second)){
            dist[ele.first]=cost+ele.second;
            q.push({ele.first,cost+ele.second});
        }
    }
    }
    int mxtime=0;
    for(int i=1;i<=n;i++){
        if(dist[i]==1e9)return -1;
        mxtime=max(mxtime,dist[i]);
    }
   return mxtime;
    }
};







