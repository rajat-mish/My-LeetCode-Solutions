class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n,vector<int>(n));
        int minr=0,maxr=n-1,minc=0,maxc=n-1;
        int count=0;
        int tne=n*n;
        int a=1;
        while(count<tne){
            for(int i=minc;i<=maxc && count<tne;i++){
                arr[minr][i]=a++;
                count++;
            }minr++;

            for(int i=minr;i<=maxr && count<tne;i++){
                arr[i][maxc]=a++;
                count++;
            }maxc--;
        for(int i=maxc;i>=minc && count<tne;i--){
            arr[maxr][i]=a++;
            count++;
        }maxr--;
    for(int i=maxr;i>=minr && count<tne;i--){
        arr[i][minc]=a++;
        count++;
    }minc++;}
    return arr;
    }
};
