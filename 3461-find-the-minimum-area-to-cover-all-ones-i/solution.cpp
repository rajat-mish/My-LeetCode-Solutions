class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int minr=-1,maxr=-1,minc=-1,maxc=-1;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    maxr=max(maxr,i+1);
                   if(minr==-1){ minr=i+1;
                    break;
                    }
                }
            }
        }

        for(int i=0;i<grid[0].size();i++){
               for(int j=0;j<grid.size();j++){
                if(grid[j][i]==1){
                    maxc=max(maxc,i+1);
                    if(minc==-1)minc=i+1;
                }
               }
        }
        return (maxc-minc+1)*(maxr-minr+1);


    }
};
