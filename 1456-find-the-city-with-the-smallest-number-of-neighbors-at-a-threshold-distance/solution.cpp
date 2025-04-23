class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        int  minReachable=INT_MAX;

       vector<vector<pair<int,int>>> adj(n); // ✅
        int resultCity=-1;
        for(auto ele:edges){
            int u=ele[0];
            int v=ele[1];
            int wt=ele[2];
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }


       for(int var=0;var<n;var++){
         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({var,0});
        vector<int>dist(n,1e9);
        dist[var]=0;
        while(!pq.empty()){
            int node=pq.top().first;
            int wt=pq.top().second;
            pq.pop();
            for(auto ele:adj[node]){
                if(dist[ele.first]>ele.second+dist[node]){
                    dist[ele.first]=ele.second+dist[node];
                    pq.push({ele.first,ele.second+dist[node]});
                }
            }
        }
         int count=0;
        for(int i=0;i<n;i++){
            if(dist[i]<=distanceThreshold){
                count++;
            }
        }
          if (count <= minReachable) {
                minReachable = count;
                resultCity = var;
            }
       }
       return resultCity;
    }
};
