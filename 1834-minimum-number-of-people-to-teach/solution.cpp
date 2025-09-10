// class Solution {
// public:
//     int minimumTeachings(int n, vector<vector<int>>& lan, vector<vector<int>>& fr) {
//         int ans=INT_MAX;
//         vector<int>vis(fr.size()+1,0);
//         for(int i=1;i<=n;i++){
//            int cnt=0;
//            for(int var=0;var<fr.size();var++){
//             int f1=fr[var][0];
//             int f2=fr[var][1];
        
//            bool flag=false;
//            int a=0,b=0;
//             for(int j=0;j<lan[f1-1].size();j++){
//                 for(int k=0;k<lan[f2-1].size();k++){
//                     if(lan[f1-1][j]==lan[f2-1][k])flag=true;
//                     if(lan[f1-1][j]==i)a=1;
//                     if(lan[f2-1][k]==i)b=1;
//                     vis[f1]=1;
//                     vis[f2]=1;
//                 }
//             }
//             if(flag==false){
//                 if(a==1 || b==1){
//                    if(!vis[f1] && !vis[f2]) cnt++;
//                 }
//                 else {
//                     if(!vis[f1] && !vis[f2])cnt+=2;
//                 } 
//             }
//            }
//            ans=min(ans,cnt);
//         }
//         return ans;
//     }
// };


class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& lan, vector<vector<int>>& fr) {
        int m = lan.size();

        // Step 1: preprocess language knowledge into sets
        vector<unordered_set<int>> know(m + 1);
        for (int i = 0; i < m; i++) {
            for (int l : lan[i]) know[i + 1].insert(l);
        }

        // Step 2: collect people who can't communicate with their friends
        unordered_set<int> needTeaching;
        for (auto &f : fr) {
            int f1 = f[0], f2 = f[1];
            bool can = false;

            // check if f1 and f2 share a language
            if (know[f1].size() < know[f2].size()) {
                for (int l : know[f1]) {
                    if (know[f2].count(l)) { can = true; break; }
                }
            } else {
                for (int l : know[f2]) {
                    if (know[f1].count(l)) { can = true; break; }
                }
            }

            if (!can) {
                needTeaching.insert(f1);
                needTeaching.insert(f2);
            }
        }

        if (needTeaching.empty()) return 0;

        // Step 3: for each language, count how many in needTeaching don't know it
        int ans = INT_MAX;
        for (int lang = 1; lang <= n; lang++) {
            int cnt = 0;
            for (int person : needTeaching) {
                if (!know[person].count(lang)) cnt++;
            }
            ans = min(ans, cnt);
        }

        return ans;
    }
};

