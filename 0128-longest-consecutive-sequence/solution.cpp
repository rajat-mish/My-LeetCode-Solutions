class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        unordered_map<int,int>mp;
        for(auto ele:nums){
            st.insert(ele);
            mp[ele]++;
        }
        int count=1;
        int ans=0;
        for(auto ele:st){
            if(mp.find(ele+1)!=mp.end()){
                count++;
            }
            else{
                ans=max(ans,count);
                count=1;
            }
        }
        return ans;
        
    }
};
