class Solution {
public:
    int largestPathValue(string color, vector<vector<int>>& edges) {
        int n=color.size();
        int ans=0;
        vector<vector<int>>graph(n);
        vector<vector<int>>count(n,vector<int>(26));
        vector<int>indgree(n);
        for(auto &ele:edges){
            graph[ele[0]].push_back(ele[1]);
            indgree[ele[1]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indgree[i]==0){
                q.push(i);
            }
        }
        int processed=0;
        while(!q.empty()){
            int f=q.front();
            q.pop();
            processed++;
            count[f][color[f]-'a']++;
            ans=max(ans,count[f][color[f]-'a']);

            for (auto ele:graph[f]){
                indgree[ele]--;
                if(indgree[ele]==0)q.push(ele);
            

            for(int i=0;i<26;i++){
                count[ele][i]=max(count[ele][i],count[f][i]);
            }}


        }
       return processed==n?ans:-1;
    }
};
