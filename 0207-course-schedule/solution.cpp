class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
        
        int n=numCourses;
        vector<vector<int>>adj(n);
     for(auto ele:pre){
        adj[ele[0]].push_back(ele[1]);
     }
      
       vector<int>indeg(n,0);
       vector<int>topo;
       for(int i=0;i<n;i++){
        for(auto ele:adj[i])indeg[ele]++;
       }
       queue<int>q;
       for(int i=0;i<n;i++){
        if(indeg[i]==0)q.push(i);
       }
       while(!q.empty()){
        int node=q.front();
        q.pop();
        topo.push_back(node);
        for(auto ele:adj[node]){
            indeg[ele]--;
            if(indeg[ele]==0)q.push(ele);
        }
       }

       if(topo.size()==n)return true;
       return false;

    }
};
