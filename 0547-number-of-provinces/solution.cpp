class Solution {
    private:
    void dfs(int node,vector<int>&vis,vector<vector<int>>adjl){
        vis[node]=1;
        for(auto ele:adjl[node]){
            if(!vis[ele]){
                dfs(ele,vis,adjl);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>>adjl(n);
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected.size();j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjl[i].push_back(j);
                    adjl[j].push_back(i);
                }
            }
        }
        int count=0;
        vector<int>vis(n,0);
        for(int i=0;i<isConnected.size();i++){
            if(!vis[i]){
                count++;
                dfs(i,vis,adjl);
            }
        }
        return count;
    }
};
