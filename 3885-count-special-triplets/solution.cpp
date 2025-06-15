class Solution {
public:
    const int MOD = 1e9 + 7;
    int specialTriplets(vector<int>& nums) {
   unordered_map<int,int>left,right;
        for(int i=nums.size()-1;i>=0;i--)right[nums[i]]++;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            right[nums[i]]--;
          
            int num=nums[i]*2;
            long l=left[num],r=right[num];
            ans=(ans+(l*r)%MOD)%MOD;
              left[nums[i]]++;
        }
        return ans;
    }
};
