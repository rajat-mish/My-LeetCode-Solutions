class Solution {
public:
    int trapRainWater(vector<vector<int>>& hm) {
        int n=hm.size();
        int m=hm[0].size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
       vector<vector<int>>vis(n,vector<int>(m,0));
            for(int j=0;j<m;j++){
                pq.push({hm[0][j],{0,j}});
                vis[0][j]=1;
            }

              for(int j=0;j<n;j++){
                pq.push({hm[j][0],{j,0}});
                vis[j][0]=1;
            }

               for(int j=0;j<m;j++){
                pq.push({hm[n-1][j],{n-1,j}});
                vis[n-1][j]=1;
            }

              for(int j=0;j<n;j++){
                pq.push({hm[j][m-1],{j,m-1}});
                vis[j][m-1]=1;
            }
           
           
        

        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};

        int ans=0;
           int l=0;
        while(!pq.empty()){
            int lev=pq.top().first;
            int row=pq.top().second.first;
            int col=pq.top().second.second;
            pq.pop();
           l=max(l,lev);

           for(int i=0;i<4;i++){
            int nr=row+delr[i];
            int nc=col+delc[i];

            if(nr<n && nr>=0 && nc<m && nc>=0 && vis[nr][nc]==0){
                vis[nr][nc]=1;
                if(hm[nr][nc]<l){
                    ans+=(l-hm[nr][nc]);
                  
                }
                  pq.push({max(hm[nr][nc], l),{nr,nc}});
            }
           }

        }
     return ans;
        
    }
};
