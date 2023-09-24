class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int s=0;

        for(int i=0;i<n;i++){
            int t=nums[i];
            if(n%(i+1)==0){
                s=s+ (t*t);

            }
        }
        return s;
    }
};
