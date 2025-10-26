// class Solution {
// public:
// vector<vector<long long>>dp;
// long long fun(int i,int j,vector<int>&cap,vector<long long>&pre){
//     if(i>j || i+1>=j)return 0;
//         long long take=0;
   
//     if(dp[i][j]!=-1)return dp[i][j];
//    int sum=pre[j-1]-pre[i];
//     if( sum==cap[i] && sum==cap[j]){
//         take=1;
//     }
   
//         take+=fun(i+1,j,cap,pre)+fun(i,j-1,cap,pre);
//         take-=fun(i+1,j-1,cap,pre);
   
//     return dp[i][j]= take;
// }

//     long long countStableSubarrays(vector<int>& cap) {
//         int n=cap.size();
//         vector<long long>pre(n,0);
//         pre[0]=cap[0];
//         for(int i=1;i<n;i++){
//             pre[i]=pre[i-1]+cap[i];
//         }
//         // dp.resize(n,vector<long long>(n,-1));
//         // return fun(0,n-1,cap,pre);
//          long long ans=0;
//         int len=3;
//         while(len<=n){
//             for(int i=0;i+len-1<n;i++){
//                 int j=i+len-1;
//                 long long sum=pre[j-1]-pre[i];
//                 if(cap[i]==cap[j] && cap[i]==sum)ans++;
//             }
//             len++;
//         }
//         return ans;

//     }
// };


class Solution {
public:
    long long countStableSubarrays(vector<int>& capacity) {
        int n = capacity.size();
        vector<long long> prefix(n+1,0);
        for(int i = 0; i < n; i++){
            prefix[i+1] = prefix[i] + capacity[i];
        }
        long long ans = 0;
        unordered_map<long long, unordered_map<long long , int>> mp;
        for(int i = 0; i < n; i++){
            long long val = capacity[i];
            long long prefix_r = prefix[i];
            if(mp.count(val) && mp[val].count(prefix_r)){
                ans += mp[val][prefix_r];
            }
            if(i > 0 && capacity[i] == 0 && capacity[i-1] == 0)ans--;
            long long key = prefix[i+1] + capacity[i];
            mp[val][key]++;
        }
        cout<<ans;
        return ans;
    }
};
