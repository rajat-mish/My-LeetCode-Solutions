class Solution {
public:
    vector<int> findOrder(int V, vector<vector<int>>& prereq) {
            vector<int>adj[V];
          for(auto ele:prereq){
            adj[ele[1]].push_back(ele[0]);
          }
          
        
        
        vector<int>indegree(V,0);
            for(int i=0;i<V;i++){
                      for(auto ele:adj[i]){
            indegree[ele]++;
        }
            }
            
            queue<int>q;
            vector<int>topo;
            for(int i=0;i<V;i++){
                if(indegree[i]==0){
                    q.push(i);
                }
            }
            while(!q.empty()){
                int node=q.front();
                q.pop();
                topo.push_back(node);
                for(auto ele:adj[node]){
                    indegree[ele]--;
                    if(indegree[ele]==0){
                        q.push(ele);
                    }
                }
                
            }
          if(topo.size()==V){
              return topo;
          }
          return {};
    }
};
