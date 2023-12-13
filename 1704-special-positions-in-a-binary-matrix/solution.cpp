class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) { vector<int>v(mat.size(),0);
    vector<int>u(mat[0].size(),0);
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    v[i]++;
                    u[j]++;
                }

                }
              
            }
int ans=0;
            for(int i=0;i<mat.size();i++){ 
                for(int j=0;j<mat[0].size();j++){
                    if(mat[i][j]==1){
                        if(v[i]==1 && u[j]==1){
                            ans++;
                        }
                    }
                }
                
            }
  return ans;
        }
        
    
};
