// class Solution {
// public:
// int n,target;
// bool fun(int ele,int prev,vector<int>&stones,unordered_map<int,int>&mp,vector<vector<int>>&dp){
   
//    if(ele==target)return true;
//    if(prev<=0)return false;
//    if(dp[ele][prev]!=-1)return dp[ele][prev];

// //   if(mp.find(ele+prev)==mp.end())return false;
// bool res=false;
// if(mp.find(ele+prev)!=mp.end()){
//     res|=fun(stones[mp[ele+prev]],prev,stones,mp,dp);
// }

// if(mp.find(ele+prev-1)!=mp.end()){
//     res|=fun(stones[mp[ele+prev-1]],prev-1,stones,mp,dp);
// }
// if(mp.find(ele+prev+1)!=mp.end()){
//     res|=fun(stones[mp[ele+prev+1]],prev+1,stones,mp,dp);
// }

// return dp[ele][prev]= res;



  


// }
//     bool canCross(vector<int>& stones) {
//         if(stones[1]!=1)return false;
//         n=stones.size();
//         target=stones[stones.size()-1];
//         unordered_map<int,int>mp;
//        for(int i=0;i<stones.size();i++){
//         mp[stones[i]]=i;
//        }
//        int n=stones.size();
//        vector<vector<int>>dp(n,vector<int>(n,-1));
//         return fun(stones[0],1,stones,mp,dp);
//     }
// };



class Solution {
public:
    int n, target;

    bool fun(int ele, int prev, vector<int>& stones, unordered_map<int, int>& mp, vector<vector<int>>& dp) {
        if (ele == target) return true;
        if (prev <= 0) return false;

        int idx = mp[ele]; // Convert value to index

        if (dp[idx][prev] != -1) return dp[idx][prev];

        bool res = false;

        if (mp.find(ele + prev) != mp.end()) {
            res |= fun(ele + prev, prev, stones, mp, dp);
        }

        if (mp.find(ele + prev - 1) != mp.end()) {
            res |= fun(ele + prev - 1, prev - 1, stones, mp, dp);
        }

        if (mp.find(ele + prev + 1) != mp.end()) {
            res |= fun(ele + prev + 1, prev + 1, stones, mp, dp);
        }

        return dp[idx][prev] = res;
    }

    bool canCross(vector<int>& stones) {
        if (stones[1] != 1) return false;

        n = stones.size();
        target = stones.back();

        unordered_map<int, int> mp;
        for (int i = 0; i < n; ++i) {
            mp[stones[i]] = i;
        }

        vector<vector<int>> dp(n, vector<int>(n, -1));  // dp[index][prev_jump]

        return fun(stones[1], 1, stones, mp, dp);
    }
};

