class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dim) {
        int n=dim.size();
        double ans=0.0;
        int a=INT_MIN;
        for(int i=0;i<n;i++){
            int sum=dim[i][0]*dim[i][0] + dim[i][1]*dim[i][1];
            double dig=sqrt(sum);
            if(dig>=ans){
               
                if(dig==ans)a=max(a,dim[i][0]*dim[i][1]);
              else a=dim[i][0]*dim[i][1];
               ans=dig;
            }
           
        }
        return a;
    }
};
