class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<int>adj[V];
     for (int i = 0; i < V; i++) {
    for (int j : graph[i]) {
        adj[j].push_back(i);  
    }
}

/// graph ko reverse kro and topo order find kro!!!!!!!!!!!!!!!


         
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
            sort(topo.begin(),topo.end());
            return topo;
    }
};
