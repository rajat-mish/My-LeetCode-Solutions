class Solution {
public:
const int MOD=1e9+7;
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int>v,ans;
        for(int i=29;i>=0;i--){
            if((1<<i)<=n){
                v.push_back(1<<i);
                n-=(1<<i);
                if(n<=0)break;
            }
        }

        sort(v.begin(),v.end());
        for(auto ele:queries){
            int f=ele[0];
            int l=ele[1];
            long long temp=1;
            for(int i=f;i<=l;i++){
                temp=((temp%MOD)*(v[i]%MOD))%MOD;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
