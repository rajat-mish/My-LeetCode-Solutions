class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        
        vector<int>ans;
  
        int count=0;
        for(int i=0;i<n;i++){
            int k=0;
            vector<int>temp;
            for(int j=0;j<=i && j<m;j++){
                 temp.push_back(mat[i-k][j]);
                 k++;
               
            }
            if(count%2!=0){
                reverse(temp.begin(),temp.end());

            }
            for(auto ele:temp){
                ans.push_back(ele);
            }
              count++;

        }
     
     
    
     int col=m-1;
     int cnt=0;
     if(n%2==0)cnt=0;
     else cnt=1;
      int p=1;
      int r=1;
     while(col--){
         vector<int>temp;
        
         int i=n-1;
         int b=0;
         for(int j=p;j<min(n+r,m);j++){
            temp.push_back(mat[i-b][j]);
            b++;
         }
         r++;
         p++;
         if(cnt%2!=0){
            reverse(temp.begin(),temp.end());

         }
         for(int i=0;i<temp.size();i++){
            ans.push_back(temp[i]);
         }
         cnt++;

     }
     return ans;
    }
};
