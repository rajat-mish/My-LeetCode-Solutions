class Solution {
public:
int longestcycle=-1;
void dfs(int clen,int start,vector<int>&path,vector<int>&vis,vector<int>&edges){
    clen++;
    vis[start]=1;
    path[start]=clen;
    int nbr=edges[start];
    if(nbr!=-1){
        if(!vis[nbr]){
            dfs(clen,nbr,path,vis,edges);
        }
        else if(path[nbr]!=0){
            int currcycle=path[start]-path[nbr]+1;
            longestcycle=max(longestcycle,currcycle);
        }
    }
    path[start]=0;
}
    int longestCycle(vector<int>& edges) {
        int n=edges.size();
        vector<int>vis(n,0),path(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(0,i,vis,path,edges);
            }
        }
        return longestcycle;
    }
};
