class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>v;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                v.push_back(grid[i][j]);
            }
        }
         int count=0;
         sort(v.begin(),v.end());
        int median=v[v.size()/2];
        for(int i=0;i<v.size();i++){
            if(abs(median-v[i])%x!=0)return -1;
            else count+=abs(v[i]-median)/x;
        }
        return count;
    }
};
