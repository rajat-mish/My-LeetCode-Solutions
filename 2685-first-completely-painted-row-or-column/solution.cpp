class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
   vector<int>fre1(m,0),fre2(n,0);
   
        unordered_map<int,pair<int,int>>mp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               mp[mat[i][j]]= {i, j};
            }
        }

        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])!=mp.end()){
                int row=mp[arr[i]].first;
                int col=mp[arr[i]].second;
                fre1[row]++;
                fre2[col]++;
                if(fre1[row]==n || fre2[col]==m)return i;
            }
        }
        return -1;
    }
};



