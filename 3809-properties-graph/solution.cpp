class Solution {
public:
void dfs(int node,vector<vector<int>>&G,vector<bool>&vis){
    vis[node]=true;
    int d=node;
    for(auto ele:G[d]){
        if(!vis[ele]){
            dfs(ele,G,vis);
        }
    }
}
int intersect(vector<int>&a,vector<int>&b){
    unordered_set<int>s(a.begin(),a.end());
    int count=0;
    for(auto x:b){
        if(s.count(x)){count++;
        s.erase(x);}
    }
    return count;
}
bool check(int i,int j,vector<vector<int>>&prop,int k){
    return intersect(prop[i],prop[j])>=k;
}
    int numberOfComponents(vector<vector<int>>& prop, int k) {
        int n=prop.size();
        vector<vector<int>>G(n);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(check(i,j,prop,k)==true){
                    G[i].push_back(j);
                    G[j].push_back(i);
                }
            }
        }
        vector<bool>vis(n,false);
        int count=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,G,vis);
                count++;
            }
        }
        return count;
    }
};
