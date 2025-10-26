// class Solution {
// public:
//     int snakesAndLadders(vector<vector<int>>& board) {
//         unordered_map<int,int>mp,mpp;
//         int n=board.size();
//         int m=board[0].size();
//         int cnt=0;
//         int p=0;
//         for(int i=n-1;i>=0;i--){
//         if(p%2==0){
//                 for(int j=0;j<m;j++){
//                 cnt++;
//                 if(board[i][j]!=-1 && board[i][j]>cnt){
//                     mp[cnt]=board[i][j];
//                 }
//                 else if(board[i][j]!=-1 && board[i][j]<cnt)mpp[cnt]=board[i][j];
//             }
//         }
//         else{
//                 for(int j=m-1;j>=0;j--){
//                 cnt++;
//                 if(board[i][j]!=-1 && board[i][j]>cnt){
//                     mp[cnt]=board[i][j];
//                 }
//                 else if(board[i][j]!=-1 && board[i][j]<cnt)mpp[cnt]=board[i][j];
//             }
//         }
//         p++;
//         }
       
//         int tar=m*n;
//         queue<pair<int,int>>pq;
//         pq.push({0,1});
//         vector<int>vis(tar+1,0);
//         vis[1]=1;
//         while(!pq.empty()){
//             int id=pq.front().second;
//             int t=pq.front().first;
//             pq.pop();
//             if(id==tar)return t;

//             for(int i=1;i<=6;i++){
//                 int nid=i+id;
                
//                 if(nid<=tar){
//                     if(mp.find(nid)!=mp.end()){
//                          if(!vis[nid]){
//                             vis[nid]=1;
//                               pq.push({t+1,mp[nid]});
//                           }
//                     }
//                     else if(mpp.find(nid)!=mpp.end()){
//                           if(!vis[nid]){
//                             vis[nid]=1;
//                               pq.push({t+1,mpp[nid]});
//                           }
                        
//                     }
//                 }
//             }
//         }
//         return -1;
//     }
// };


class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        unordered_map<int,int> mp, mpp;
        int n = board.size();
        int m = board[0].size();
        int cnt = 0, p = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (p % 2 == 0) {
                for (int j = 0; j < m; j++) {
                    cnt++;
                    if (board[i][j] != -1) {
                        if (board[i][j] > cnt) mp[cnt] = board[i][j];
                        else mpp[cnt] = board[i][j];
                    }
                }
            } else {
                for (int j = m - 1; j >= 0; j--) {
                    cnt++;
                    if (board[i][j] != -1) {
                        if (board[i][j] > cnt) mp[cnt] = board[i][j];
                        else mpp[cnt] = board[i][j];
                    }
                }
            }
            p++;
        }

        int tar = m * n;
        queue<pair<int, int>> pq;
        pq.push({0, 1});
        vector<int> vis(tar + 1, 0);
        vis[1] = 1;

        while (!pq.empty()) {
            int id = pq.front().second;
            int t = pq.front().first;
            pq.pop();

            if (id == tar) return t;

            for (int i = 1; i <= 6; i++) {
                int nid = id + i;
                if (nid > tar) continue;

                int dest = nid;
                if (mp.find(nid) != mp.end()) dest = mp[nid];
                else if (mpp.find(nid) != mpp.end()) dest = mpp[nid];

                if (!vis[dest]) {
                    vis[dest] = 1;
                    pq.push({t + 1, dest});
                }
            }
        }
        return -1;
    }
};

