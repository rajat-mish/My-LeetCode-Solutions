class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>a;
        for(int i=1;i<=numRows;i++){
            vector<int>v(i);
            a.push_back(v);
        }
        for(int i=0;i<numRows;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || i==j){
                    a[i][j]=1;
                }else{
                    a[i][j]=a[i-1][j]+a[i-1][j-1];
                }
            }
        }
        return a;
    }
};
