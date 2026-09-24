class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            int d=nums[i];

            int sum=0;
            while(d>0){
                int r=d%10;
                sum+=r;
                d=d/10;
            }
            if(sum==i)return i;
        }
        return -1;
    }
};
