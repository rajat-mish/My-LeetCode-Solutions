class Solution {
public:
void dfs(int start,vector<int>&vis,vector<vector<int>>&adj){
    vis[start]=1;
    for(auto ele:adj[start]){
        if(!vis[ele])dfs(ele,vis,adj);
    }
}
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<vector<int>>adj(n);
        for(auto ele:connections){
            int u=ele[0];
            int v=ele[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int count=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,vis,adj);
                count++;
            }
        }
        int cw=connections.size();
        int ic=n-count+1;
        int rem=cw-(ic-1);
        if(rem>=(count-1))return count-1;
        return -1;
    }
};
