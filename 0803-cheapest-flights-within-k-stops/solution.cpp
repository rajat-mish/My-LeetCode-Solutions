class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>>adj[n];
        for(auto ele:flights){
            adj[ele[0]].push_back({ele[1],ele[2]});
        }
vector<int>dist(n,INT_MAX);
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}});
        dist[src]=0;
        int ans=INT_MAX;
        while(!q.empty()){
            int price=q.front().first;
            int node=q.front().second.first;
            int stop=q.front().second.second;
            q.pop();
             
           if(stop>k)continue;
           for(auto ele:adj[node]){
            if(price+ele.second<dist[ele.first]){
                dist[ele.first]=price+ele.second;
            if(stop<=k) q.push({price+ele.second,{ele.first,stop+1}});
            }
           }

        }
        if(dist[dst]==INT_MAX)return -1;
        return dist[dst];

    }
};
