class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int f=INT_MIN;
        for(auto ele:mp){
            f=max(f,ele.second);
        }
        int number=-1;
       for(auto ele:mp){
        if(ele.second==f)number=ele.first;
       }

        mp.clear();
       for(int i=0;i<nums.size()-1;i++){
        mp[nums[i]]++;
           if(mp.find(number)!=mp.end()){
            if(mp[number]>(i+1)/2){
                int secf=f-mp[number];
                if(secf>(nums.size()-i-1)/2){
                    return i;
                }
            }
           }
       }
return -1;

    }
};
