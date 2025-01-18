class Solution {
public:
void dfs(int start,vector<bool>&vis,vector<vector<int>>&gr,int &c){
    vis[start]=true;
    c++;
    for(auto ele:gr[start]){
        if(!vis[ele]){
            dfs(ele,vis,gr,c);
        }
    }
}
    int maximumDetonation(vector<vector<int>>& bombs) {
        // make a directed graph 
        // then see  how many maximum nodes you can visit from a single node
           long long n=bombs.size();
        vector<vector<int>>gr(n);
        for(int i=0;i<n;i++){
            long long x1,y1,r1;
            x1=bombs[i][0];
            y1=bombs[i][1];
            r1=bombs[i][2];
            for(int j=0;j<n;j++){
                if(i!=j){
                    long long x,y;
                    x=abs(x1-bombs[j][0]);
                    y=abs(y1-bombs[j][1]);
                    if(x*x + y*y<=r1*r1){
                        gr[i].push_back(j);
                    }
                }
            }
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            int c=0;
            vector<bool>vis(n,false);
            dfs(i,vis,gr,c);
            ans=max(ans,c);
        }
        return ans;
    }
};
