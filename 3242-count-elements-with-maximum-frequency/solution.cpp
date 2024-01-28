class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int max=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        vector<int>v(max+1,0);
        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
        }
        max=v[0];
        for(int i=0;i<v.size();i++){
            if(v[i]>max){
                max=v[i];
            }
        }
        int count=0;
         for(int i=0;i<v.size();i++){
            if(v[i]==max){
                count++;
            }
        }
        return max*count;
    }
};
