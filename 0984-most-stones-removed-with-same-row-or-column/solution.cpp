class DisjointSet {
public:
    vector<int> parent, rank;
    
    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for(int i = 0; i < n; i++)
            parent[i] = i;
    }
    
    int findParent(int node) {
        if(parent[node] != node)
            parent[node] = findParent(parent[node]);
        return parent[node];
    }
    
    void unionByRank(int u, int v) {
        int parent_u = findParent(u);
        int parent_v = findParent(v);
        
        if(parent_u == parent_v) return;
        
        if(rank[parent_u] < rank[parent_v]) {
            parent[parent_u] = parent_v;
        }
        else if(rank[parent_v] < rank[parent_u]) {
            parent[parent_v] = parent_u;
        }
        else {
            parent[parent_v] = parent_u;
            rank[parent_u]++;
        }
    }
};





class Solution {
public:
const int shift = 10001;

    int removeStones(vector<vector<int>>& stones) {
         DisjointSet ds(20005);
         unordered_set<int>usedNodes;
        for(auto ele:stones){
            int u=ele[0];
            int v=ele[1]+shift;
            ds.unionByRank(u,v);
            usedNodes.insert(u);
            usedNodes.insert(v);
              
        }
        int components=0;
        for(auto ele:usedNodes){
            if(ds.findParent(ele)==ele)components++;
        }
        return stones.size()-components;
    }
};
