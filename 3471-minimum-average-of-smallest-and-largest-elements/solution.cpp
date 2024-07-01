class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int i=1,j=nums.size()-2;
        sort(nums.begin(),nums.end());
        double res=0;
        if(nums.size()==2){
            res=(nums[0]+nums[1])/2.0;
            return res;
        }
         res=(nums[0]+nums[nums.size()-1])/2.0;
        while(i<j){
            int a=nums[i];
            int b=nums[j];
            double c=(a+b)/2.0;
            res=min(res,c);
            i++;j--;

        }
        return res;
    }
};
