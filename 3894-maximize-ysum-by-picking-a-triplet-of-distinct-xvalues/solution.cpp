class Solution {
public:
   static bool cmp( const pair<int,int>&a, const pair<int,int>&b){
        return a.second<b.second;
    }
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        int n=x.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.count(x[i])==0){
                mp[x[i]]=y[i];
            }
            else {
                if(y[i]> mp[x[i]]){
                    mp[x[i]]=y[i];
                }
            }
        }
        if(mp.size()<3)return -1;
        vector<pair<int,int>>v(mp.begin(),mp.end());
        // for(auto ele:v){
        //     cout<<ele.first<<" "<<ele.second<<" ";
        // }
        // cout<<endl;
        sort(v.begin(),v.end(),cmp);
          reverse(v.begin(),v.end());

        //    for(auto ele:v){
        //     cout<<ele.first<<" "<<ele.second<<" ";
        // }
        // cout<<endl;
        int ans=0;
        int count=0;
      for(auto ele:v){
            count++;
          if(count>3)return ans;
         if(count<=3) ans+=ele.second;
        
      }
        return ans;
        
        
    }
};
