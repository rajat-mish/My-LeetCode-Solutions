class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans;
        for(auto ele:nums){
            bool flag=false;
            for(int i=1;i<=ele;i++){
               if(((i)|(i+1)) ==ele){
                ans.push_back(i);
                flag=true;
                break;
               }
            }
            if(!flag)ans.push_back(-1);
        }
        return ans;
    }
};
