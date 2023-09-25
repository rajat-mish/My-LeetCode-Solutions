class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        //transpose
        for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            int t=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=t;
        
        }
    
    }
    //reverse
    for(int k=0;k<m;k++){
        int i=0;
        int j=m-1;
        while(i<=j){
            int t=matrix[k][i];
            matrix[k][i]=matrix[k][j];
            matrix[k][j]=t;
            i++;
            j--;
        }
    }
return;
    }
};
