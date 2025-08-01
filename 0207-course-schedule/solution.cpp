class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& pre) {
        vector<int>adj[V];
        for(auto ele:pre){
            adj[ele[0]].push_back(ele[1]);
        }
        vector<int>ind(V,0);
        for(int i=0;i<V;i++){
            for(auto ele:adj[i]){
                ind[ele]++;
            }
        }
        queue<int>q;
        for(int i=0;i<V;i++){
            if(ind[i]==0)q.push(i);
        }
        vector<int>ans;
        while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(auto ele:adj[node]){
            ind[ele]--;
            if(ind[ele]==0)q.push(ele);
        }
        }
        if(ans.size()==V)return true;
        return false;
    }
};
