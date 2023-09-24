class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>a;
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            int t=nums[i];
            while(t>0){
                int c=t%10;
                a.push_back(c);
                t=t/10;

            }
        }reverse(a.begin(),a.end());
        
        return a;
    }
};
