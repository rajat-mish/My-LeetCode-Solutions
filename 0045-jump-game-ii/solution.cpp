class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int choice=0,jump=0;
        for(int i=0;i<n-1;i++){
            maxi=max(maxi,nums[i]+i);
            if(i==choice){
                choice=maxi;
                jump++;
            }

            if(choice>=n-1)return jump;
        }
        return 0;
    }
};
