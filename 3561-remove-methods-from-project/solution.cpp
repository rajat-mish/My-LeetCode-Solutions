class Solution {
public:

void dfs(vector<vector<int>>&adj,int node,vector<int>&vis,unordered_set<int>&st){
    if(!vis[node]){
        vis[node]=1;
        st.insert(node);
    }
    for(auto ele:adj[node]){
        if(!vis[ele])dfs(adj,ele,vis,st);
    }
}
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& inv) {
        vector<vector<int>>adj(n);
        for(auto ele:inv){
           int u=ele[0];
           int v=ele[1];
           adj[u].push_back(v);
        }

  unordered_set<int>st;
        vector<int>vis(n,0);
        dfs(adj,k,vis,st);

        vector<int>v;
        for(int i=0;i<n;i++){
            if(st.find(i)==st.end()){
                v.push_back(i);
            }
        }
      
      unordered_set<int>st1;
         vector<int>vi(n,0);
        for(int i=0;i<v.size();i++){
            int ele=v[i];

            
        dfs(adj,ele,vi,st1);
            
        }

           for(auto ele:st)cout<<ele<<" ";
         cout<<endl;



        vector<int>ans;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(st.find(i)!=st.end() && st1.find(i)!=st1.end()){
                flag=true;
            }
        }
        
      if(flag){
       for(int i=0;i<n;i++)ans.push_back(i);
      }
      else{
          for(auto ele:st1){
            //if(st.find(ele)==st.end()){
                ans.push_back(ele);
            // }
        }
      }


       return ans;
    }
};
