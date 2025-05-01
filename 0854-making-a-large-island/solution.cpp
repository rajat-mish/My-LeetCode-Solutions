class DisjointSet {
public:
    vector<int> parent, rank,size;
    
    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for(int i = 0; i < n; i++)
            parent[i] = i; // Initially, each node is its own parent
        size.resize(n, 1); // Size of each set is 1 initially    
    }
    
    int findParent(int node) {
        if(parent[node] != node)
            parent[node] = findParent(parent[node]); // Path Compression
        return parent[node];
    }
    
    void unionByRank(int u, int v) {
        int parent_u = findParent(u);
        int parent_v = findParent(v);
        
        if(parent_u == parent_v) return; // Already in the same set
        
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
    void unionBySize(int u, int v) {
        int parent_u = findParent(u);
        int parent_v = findParent(v);
        
        if(parent_u == parent_v) return; // Already in the same set
        if(size[parent_u] < size[parent_v]) {
            parent[parent_u] = parent_v;
            size[parent_v] += size[parent_u];
        }
        else {
            parent[parent_v] = parent_u;
            size[parent_u] += size[parent_v];
        }
       
    }
};







class Solution {
public:
    int largestIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        DisjointSet ds(n*n);
       

        // step 1:- connnecting the components
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(grid[row][col]==0){
             continue;
            }
            int delr[]={-1,0,1,0};
            int delc[]={0,-1,0,1};
            for(int i=0;i<4;i++){
                int nr=row+delr[i];
                int nc=col+delc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<n && grid[nr][nc]==1){
                    int nodeno=row*n+col;
                    int adjnodeno=nr*n+nc;
                    ds.unionBySize(nodeno,adjnodeno);
                }
            }
        }
    }
// step 2
 int maxi=INT_MIN;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(grid[row][col]==1){
             continue;
            }
            int delr[]={-1,0,1,0};
            int delc[]={0,-1,0,1};
             set<int>st;
            for(int i=0;i<4;i++){
                int nr=row+delr[i];
                int nc=col+delc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<n && grid[nr][nc]==1){
                  st.insert(ds.findParent(nr*n+nc));
                }
            }
            int totalsize=0;
            for(auto ele:st){
                totalsize+=ds.size[ele];
            }
            maxi=max(maxi,totalsize+1);
        }
    }
    for(int i=0;i<n*n;i++){
        maxi=max(maxi,ds.size[ds.findParent(i)]); // if all 1's
    }
return maxi;

    }
};
