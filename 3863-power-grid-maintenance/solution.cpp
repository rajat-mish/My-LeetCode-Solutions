// class Solution {
// public:
// void dfs(int node,vector<vector<int>>&adj,vector<int>&on,priority_queue<int,vector<int>,greater<int>>&pq,vector<int>&vis){
//     vis[node]=1;
//     if(on[node]==0){
//         pq.push(node);
//     }
//     for(auto ele:adj[node]){
//         if(!vis[ele])dfs(ele,adj,on,pq,vis);
//     }
// }
//     vector<int> processQueries(int c, vector<vector<int>>& conn, vector<vector<int>>& que) {
// c+=1;
//         vector<vector<int>>adj(c);
//          vector<int>on(c,0);
//          vector<int>ans;
           
    
//         for(auto ele:conn){
//             int u=ele[0];
//             int v=ele[1];
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }

//         for(auto ele:que){
//             int type=ele[0];
//             int node=ele[1];
//             if(type==1 && on[node]==0){
//                 ans.push_back(node);
//             }
//             else if(type==2){
//                 on[node]=1;
//             }
//             else{
//                    vector<int>vis(c,0);
//                      priority_queue<int,vector<int>,greater<int>>pq;
           
//                 dfs(node,adj,on,pq,vis);
//                 if(!pq.empty()){
//                     ans.push_back(pq.top());
//                 }
//                 else ans.push_back(-1);
//             }
//         }
//         return ans;


        
//     }
// };




class Solution {
public:
    vector<int> processQueries(int c, vector<vector<int>>& connections, vector<vector<int>>& queries) {
        vector<int>vis(c+1,-1);
        vector<vector<int>>adj(c+1);
        for(auto x:connections){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<map<int,int>>v(c);
        int d=0;
        for(int i=1;i<=c;i++){
            if(vis[i]==-1){
                queue<int>q;
                q.push(i);
                while(!q.empty()){
                    auto x=q.front();q.pop();
                    vis[x]=d;
                    v[d][x]=1;
                    for(auto j:adj[x]){
                        if(vis[j]==-1){
                            vis[j]=d;
                            q.push(j);
                        }
                    }
                }
                d++;
            }
        }
        vector<int>ans;
        for(auto x:queries){
            if(x[0]==2){
                v[vis[x[1]]].erase(x[1]);
            }
            else{
                int i=x[1];
                int y=vis[i];
                if(v[y].find(i)!=v[y].end())ans.push_back(i);
                else{
                    int u=0;
                    for(auto h:v[y]){
                            u=1;
                            ans.push_back(h.first);
                            break;
                        }
                         if(u==0)ans.push_back(-1);
                    }
                }
            }
              return ans;
        }
}; 

