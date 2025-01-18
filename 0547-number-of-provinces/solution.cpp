class Solution {
    private:
    void dfs(int node,vector<int>&vis,vector<vector<int>>&adj){
        vis[node]=1;

        for(auto ele:adj[node]){
            if(!vis[ele]){
                dfs(ele,vis,adj);
            }
        }
      
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int m=isConnected[0].size();
      vector<vector<int>>adj(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                }
            }
        }

        vector<int>vis(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            
            if(!vis[i]){
                dfs(i,vis,adj);
                count++;
            }
        }
        return count;
    }
};
