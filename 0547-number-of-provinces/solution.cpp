class Solution {
public:
void dfs(int node,vector<vector<int>>&adj,vector<int>&vis){
    vis[node]=1;
    for(auto ele:adj[node]){
        if(!vis[ele])dfs(ele,adj,vis);
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count=0;
int n=isConnected.size();
vector<vector<int>>adj(n);
for(int i=0;i<n;i++){
    for(int j=0;j<isConnected[0].size();j++){
        if(isConnected[i][j]==1){
            adj[i].push_back(j);
           
        }
    }
}

vector<int>vis(n,0);
        for(int i=0;i<n;i++){
          if(!vis[i]){
            dfs(i,adj,vis);
            count++;
          }
        }
        return count;
    }
};
