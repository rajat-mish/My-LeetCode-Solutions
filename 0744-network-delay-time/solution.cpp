class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>adj[n+1];
        for(auto ele:times){
            adj[ele[0]].push_back({ele[2],ele[1]}); // weight,dest

        }
        vector<int>dist(n+1,INT_MAX);
        dist[k]=0;
        queue<pair<int,int>>q; // node weight
        q.push({k,0});
        while(!q.empty()){
            int node=q.front().first;
            int time=q.front().second;
            q.pop();
            for(auto ele:adj[node]){
                if(ele.first+time<dist[ele.second]){
                    dist[ele.second]=time+ele.first;
                    q.push({ele.second,ele.first+time});
                }
            }
        }
        int maxi=INT_MIN;
        for(int i=1;i<dist.size();i++){
            if(dist[i]==INT_MAX)return -1;
            maxi=max(maxi,dist[i]);
        }
       return maxi;
    }
};
