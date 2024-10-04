class Solution {
public:
    long long dividePlayers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        long long pro=0;
        int n=nums.size();
        int i=0,j=n-1;
        while(i<j){
            pro+=nums[i]*nums[j];
            v.push_back(nums[i]+nums[j]);
            i++;j--;
        }
        for(int i=0;i<v.size()-1;i++){
            if(v[i]!=v[i+1]){
                return -1;
            }
        }
        return pro;
    }
};
