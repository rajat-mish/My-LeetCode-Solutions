class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
      vector<vector<int>>v(m,vector<int>(n,0));
      for(int i=0;i<guards.size();i++){
        int r=guards[i][0];
        int c=guards[i][1];
        v[r][c]=1;
      }

        for(int i=0;i<walls.size();i++){
        int r=walls[i][0];
        int c=walls[i][1];
        v[r][c]=2;
      }

      for(int i=0;i<guards.size();i++){
        int r=guards[i][0];
        int c=guards[i][1];
        for(int j=r+1;j<m;j++){
            if(v[j][c]==1 || v[j][c]==2)break;
          else  v[j][c]=5;
        }
        for(int j=c+1;j<n;j++){
            if(v[r][j]==1 || v[r][j]==2)break;
            else v[r][j]=5;
        }
        for(int j=r-1;j>=0;j--){
            if(v[j][c]==1 ||v[j][c]==2)break;
            else v[j][c]=5;
        }
        for(int j=c-1;j>=0;j--){
            if(v[r][j]==1 || v[r][j]==2)break;
            else v[r][j]=5;
        }
      }
int cnt=0;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
            if(v[i][j]==0)cnt++;
        }
        cout<<endl;
      }

      return cnt;


      
    }
};
