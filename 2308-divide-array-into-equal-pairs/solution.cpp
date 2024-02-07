class Solution {
public:
    bool divideArray(vector<int>& nums) {
      int mx=nums[0];
      for(int i=0;i<nums.size();i++){
          if(nums[i]>mx)mx=nums[i];
      }
        int v[mx+1];
        for(int i=0;i<mx+1;i++){
            v[i]=0;
        }
        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
        }
        for(int i=0;i<mx+1;i++){
            if(v[i]%2!=0)return false;
        }
        return true;
    }
};
