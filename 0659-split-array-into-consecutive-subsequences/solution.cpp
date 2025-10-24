class Solution {
public:
    bool isPossible(vector<int>& nums) {
        int k=3;
        unordered_map<int,int>count,end;
        for(auto ele:nums)count[ele]++;

        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(count[num]==0)continue;

            if(end[num-1]>0){
                end[num-1]--;
                end[num]++;
                count[num]--;
            }
            else{
                int cnt=0;
                while(cnt<k && count[num+cnt]>0){
                    count[num+cnt]--;
                    cnt++;
                }
                if(cnt<k)return false;
                end[num+cnt-1]++;
            }
        }
        return true;
    }
};
