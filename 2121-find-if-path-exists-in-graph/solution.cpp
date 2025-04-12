class Solution {
public:
void fun(int source,int desti,vector<int>&vis,vector<vector<int>>&adj,bool &flag){
           vis[source]=1;
           for(auto ele:adj[source]){
            if(!vis[ele]){
                if(ele==desti){
                    flag=true;
                    return;
                }
                vis[ele]=1;
                fun(ele,desti,vis,adj,flag);
            }
           }
          
}
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(n==1 || source==destination)return true;
        bool flag=false;
        vector<vector<int>>adj(n);
        vector<int>vis(n,0);
        for(auto ele:edges){
            int u=ele[0];
            int v=ele[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
      fun(source,destination,vis,adj,flag);
      return flag;
    }
};
