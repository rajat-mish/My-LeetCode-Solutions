class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intv) {
        int n=intv.size();
     
         sort(intv.begin(),intv.end());
      

      int cnt=0;
        for(int i=0;i<n;i++){
            int a=intv[i][0];
            int b=intv[i][1];
            for(int j=0;j<n;j++){
                if(i==j)continue;
            int c=intv[j][0];
            int d=intv[j][1];

            if(a>=c && b<=d){
                cnt++;
                break;
            }
            }
        }
        return n-cnt;
    }
};
