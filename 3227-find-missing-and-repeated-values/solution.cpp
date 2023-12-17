class Solution {
public:
   vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>v;
        vector<int>a;
        int n=grid.size();
       vector<int>b(n*n +1);
       vector<int>ans(2);
      // int ans[2];
       
     
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                a.push_back(grid[i][j]);
              
            }
        }
        //sort(a.begin(),a.end());
       for(int i=0;i<n*n ;i++){
           b[a[i]]++;
       }
       for(int i=1;i<b.size();i++){
            if(b[i]>1){
              // ans.push_back(i);
                ans[0]=i;
           }
           if(b[i]==0){
               //ans.push_back(i);
               ans[1]=i;
           }
          
       }
//        for(int i=0;i<ans.size();i++){
//            if(ans[i]>ans[i+1]){
               
//            }
//        }
       return ans;
      
    }
};
