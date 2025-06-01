class Solution {
public:
const int MOD=1e9+7;
    bool checkEqualPartitions(vector<int>& nums, long long target) {
  

    long long pro=1;
    for(int i=0;i<nums.size();i++){
        pro=(pro*nums[i])%MOD;
    }
    __int128 t=target;
    __int128 square=(t*t)%MOD;
    long long res=(long long)square;
    return res==pro;
    }
};
