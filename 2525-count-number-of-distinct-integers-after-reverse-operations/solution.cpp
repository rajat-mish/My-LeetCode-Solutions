class Solution {
public:
int reverse(int n){
    int s=0;
    while(n>0){
        int r=n%10;
        s=r+s*10;
        n=n/10;
    }
    return s;
}
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            int r=reverse(nums[i]);
            s.insert(nums[i]);
            s.insert(r);
        }
        return s.size();
    }
};
