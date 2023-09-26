class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        vector<int>v;
        int n=matrix[0].size();
        int minr=0,minc=0,maxr=m-1,maxc=n-1;
        int total=m*n;
       int  count=0;
        while(minr<=maxr && minc<=maxc){ //right
            for(int j=minc;j<=maxc && count<total;j++){
                v.push_back(matrix[minr][j]);
                        count++;
            }minr++;

            //down
            for(int i=minr;i<=maxr && count<total;i++){
                v.push_back(matrix[i][maxc]);
                count++;
            }maxc--;

            //left
            for(int j=maxc;j>=minc && count<total;j--){
                v.push_back(matrix[maxr][j]);
                count++;
            }maxr--;
            for(int i=maxr;i>=minr && count<total;i--){
                v.push_back(matrix[i][minc]);
                count++;
            }minc++;
        }
        return v;
    }

};
