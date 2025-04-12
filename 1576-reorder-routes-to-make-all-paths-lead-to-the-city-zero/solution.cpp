class Solution {
public:
void dfs(int start,int &ans,vector<int>&vis,vector<vector<int>>&forward,vector<vector<int>>&backward){
    vis[start]=1;
    for(auto ele:forward[start]){
        if(!vis[ele]){
            ans++;
            dfs(ele,ans,vis,forward,backward);

        }
    }
    for(auto ele:backward[start]){
        if(!vis[ele]){
            dfs(ele,ans,vis,forward,backward);
        }
    }
}
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>>forward(n),backward(n);
        vector<int>vis(n,0);
        int ans=0;
        for(int i=0;i<connections.size();i++){
            int a=connections[i][0];
            int b=connections[i][1];
            forward[a].push_back(b);
            backward[b].push_back(a);
        }
        dfs(0,ans,vis,forward,backward);
        return ans;
    }
};
