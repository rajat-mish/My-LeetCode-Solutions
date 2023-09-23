class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>a;
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            }else{
                a.push_back(count);
                count=0;
            }
        }
        a.push_back(count);

        int t= *max_element(a.begin(),a.end());
        return t;
    }
};
