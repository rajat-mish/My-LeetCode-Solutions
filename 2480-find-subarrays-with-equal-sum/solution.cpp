class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int i=1;
        int j=i+1;
        int sum=nums[0]+nums[1];
        vector<int>v;
        v.push_back(sum);
        while(j<nums.size()&& i<nums.size()){
         sum=nums[i]+nums[j];
          v.push_back(sum);
          i++;j++;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1])return true;
        }
        return false;
    }
};
