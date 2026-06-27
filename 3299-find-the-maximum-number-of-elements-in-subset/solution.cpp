// class Solution {
// public:
//     int maximumLength(vector<int>& nums) {
//      //unordered_set<int>st;
//      unordered_map<long long,long long>mp;
//      for(auto ele:nums){
//         // st.insert(ele);
//         mp[ele]++;
//      }
//      int ans=1;
//      for(int i=0;i<nums.size();i++){
//        if(nums[i]>1){
        
//        int ele=nums[i];
//        if(mp[ele]>1){
          
      
//           int cnt=1;
//             while(mp.find(pow(ele,2))!=mp.end()){
//                 cnt++;
//                 if(mp[ele]==1)break;
//                 ele=pow(ele,2);
//             }
//             ans=max(ans,2*cnt-1);
//        }


        
//        }
//      }
//      if(ans==1){
//         if(mp.find(1)!=mp.end()){
//             int f=mp[1];
//             if(f%2!=0)return f;
        
//         else return max(ans,f-1);
//         }
//      }
//      return ans;

//     }
// };


class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> mp;
        for (int x : nums) mp[x]++;

        int ans = 1;

       
        if (mp.count(1)) {
            int f = mp[1];
            ans = max(ans, f % 2 ? f : f - 1);
        }

        for (auto &[x, freq] : mp) {
            if (x == 1) continue;

            long long cur = x;
            int len = 0;

            while (mp.count(cur)) {
                if (mp[cur] >= 2) {
                    len += 2;
                } else {
                    len += 1;
                    break;
                }

                if (cur > 1e9 / cur) break; 
                cur = cur * cur;
            }

            if (len % 2 == 0) len--; 
            ans = max(ans, len);
        }

        return ans;
    }
};
