class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        // there is no need of priority queue , normal queue se kaam chal jayega
      
                vector<pair<int,int>>adj[n];
        for(auto ele:flights){
            adj[ele[0]].push_back({ele[1],ele[2]});
        }
        queue<pair<int,pair<int,int>>>q;  // stops,node,cost
        q.push({0,{src,0}});
        vector<int>dist(n,1e9);
        dist[src]=0;
        while( !q.empty()){
            int stops=q.front().first;
            int node=q.front().second.first;
            int cost=q.front().second.second;
            q.pop();
            if(stops>k)continue;
            for(auto ele:adj[node]){
                if(cost+ele.second <dist[ele.first] && stops<=k){
                    dist[ele.first]=cost+ele.second;
                    q.push({stops+1,{ele.first,cost+ele.second}});
                }
            }
        }
        if(dist[dst]==1e9)return -1;
        return dist[dst];
    }
};
