class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int>ballmap,colormap;
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            int ball=queries[i][0];
            int color=queries[i][1];

            if(ballmap.find(ball)!=ballmap.end()){
                 int pc=ballmap[ball];
                 colormap[pc]--;

                 if(colormap[pc]==0){
                    colormap.erase(pc);
                 }
            }
            ballmap[ball]=color;
            colormap[color]++;
            ans.push_back(colormap.size());
        }
        return ans;
    }
};
