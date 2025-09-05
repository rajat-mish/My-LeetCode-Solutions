class Solution {
public:
int ans=0;
int dfs(int r,vector<vector<int>>&adj,string &s){
   
   int l=0;
   int sl=0;
   for(auto ele:adj[r]){
    int t=1+dfs(ele,adj,s);
    if(s[ele]==s[r])continue;

    if(t>l){
        sl=l;
        l=t;
    }
    else if(t>sl){
        sl=t;
    }
   }
   ans=max(ans,l+sl+1);
   return l;
}
    int longestPath(vector<int>& par, string s) {
        int r=0;
        int n=par.size();
        vector<vector<int>>adj(n);
        for(int i=0;i<n;i++){
            if(par[i]==-1){
                r=i;
            }
            else{
                adj[par[i]].push_back(i);
            }
        }
        dfs(r,adj,s);
        return ans;
    }
};
