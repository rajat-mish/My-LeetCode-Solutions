class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        unordered_map<int,int>mp;
        double d=nums.size()/3;
        int fre=floor(d);
        cout<<fre;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto ele:mp){
            if(ele.second>fre){
                v.push_back(ele.first);
            }
        }
        return v;
    }
};
