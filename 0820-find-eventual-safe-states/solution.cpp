class Solution {
public:
bool dfs(int start,vector<int>&vis,vector<int>&check,vector<int>&path,vector<vector<int>>&adj){
    vis[start]=1;
    path[start]=1;
    for(auto ele:adj[start]){
        if(!vis[ele]){
            if(dfs(ele,vis,check,path,adj)==true)return true;
        }
        else if(path[ele])return true;
    }
    check[start]=1;
    path[start]=0;
    return false;

}
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<vector<int>>adj(V);
   for(int i=0;i<V;i++){
    for(int j=0;j<graph[i].size();j++){
        adj[i].push_back(graph[i][j]);
    }
   }
        vector<int>vis(V,0),check(V,0),path(V,0),ans;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,vis,check,path,adj);
            }
        }
        for(int i=0;i<V;i++){
            if(check[i]==1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
