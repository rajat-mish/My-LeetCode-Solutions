class Solution {
    private:
    bool dfs(int start,int color,vector<int>&vis,vector<vector<int>>& graph){
        
             vis[start]=color;
    for(auto ele:graph[start]){
        if(vis[ele]==-1){
          if(  dfs(ele,!color,vis,graph)==false)return false;
        }
        if(vis[ele]==color)return false;
    }
    return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
         vector<int>vis(v);
        for(int i=0;i<v;i++){
            vis[i]=-1;
        }
       
     
        for(int i=0;i<v;i++){
          if(vis[i]==-1){
                if(dfs(i,0,vis,graph)==false)return false;
          }
        }
        return true;
    }
};
